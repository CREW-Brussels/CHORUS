// Fill out your copyright notice in the Description page of Project Settings.


#pragma once

#include "CHORPlay.h"

#include "Animation/AnimInstance.h"
#include "GameFramework/Pawn.h"
#include "Animation/AnimInstanceProxy.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/FastReferenceCollector.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(CHORPlay)

void FCHORPlay::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
    ChorusSubSystem = nullptr;
    if (Context.AnimInstanceProxy)
    {
        const UAnimInstance* AnimInstance = Cast<UAnimInstance>(Context.AnimInstanceProxy->GetAnimInstanceObject());
        if (AnimInstance)
        {
            Owner = AnimInstance->GetOwningComponent()->GetOwner();
            if (Owner && IsValid(Owner->GetGameInstance()))
            {
                ChorusSubSystem = Owner->GetGameInstance()->GetSubsystem<UCHORUSSubsystem>();
            }
            else
            {
                return;
            }
        }
    }

    Base.Initialize(Context);
    CurrentTime = 0.0;

    if (ChorusSubSystem != nullptr && Owner != nullptr)
    {
        ChorusSubSystem->RegisterPlayer(Owner);
    }
}


void FCHORPlay::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
    Base.CacheBones(Context);
}

void FCHORPlay::Evaluate_AnyThread(FPoseContext& Output)
{
    if (ChorusSubSystem == nullptr) {
        Base.Evaluate(Output);
        return;
    }

    if (ChorusSubSystem->Owners[Owner].Dirty)
    {
        ChorusSubSystem->Owners[Owner].Dirty = false;
        InitializePlayHead();
    }
    
    if (  !( ChorusSubSystem->Owners[Owner].bPlay && ReplayRecording(Output) )  )
    {
        Base.Evaluate(Output);
    }
}

void FCHORPlay::Update_AnyThread(const FAnimationUpdateContext& Context)
{
    Base.Update(Context);
    GetEvaluateGraphExposedInputs().Execute(Context);
    DeltaTime = Context.GetDeltaTime();
}

void FCHORPlay::InitializePlayHead()
{
    if (ChorusSubSystem == nullptr)
        return;
    
    FControlStruct ControlStruct = ChorusSubSystem->Owners[Owner];
    ControlStruct.Speed = ControlStruct.Speed != 0 ? ControlStruct.Speed : 1;
    
    if (ControlStruct.Start.Track != ControlStruct.End.Track ||
        !ChorusSubSystem->Tracks.Contains(ControlStruct.Start.Track))
    {
        ChorusSubSystem->Owners[Owner].bPlay = false;
        PlayHead.Track = 0;
        return;
    }

    PlayHead.Track = ControlStruct.Start.Track;

    int sec = 0;
    double time = 0;
    UGameplayStatics::GetAccurateRealTime(sec, time);
    
    CurrentTime = PlayHead.StartTime = ControlStruct.Start.Timestamp(ChorusSubSystem);
    PlayHead.EndTime = ControlStruct.End.Timestamp(ChorusSubSystem);

    PlayHead.StartFrame = ControlStruct.Start.Index;
    //PlayHead.EndFrame = ControlStruct.End.Index;

    if (PlayHead.StartFrame == -1)
    {
        for (int i = 0; i < ChorusSubSystem->Tracks[PlayHead.Track].Frames.Num(); i++)
        {
            if (ChorusSubSystem->Tracks[PlayHead.Track].Frames[i].time <= PlayHead.StartTime)
                PlayHead.StartFrame = i;
            else
                break;
        }
    }

    // if (PlayHead.EndFrame == -1)
    // {
    //     for (int i = 0; i < ChorusSubSystem->Tracks[PlayHead.Track].Frames.Num(); i++)
    //     {
    //         PlayHead.EndFrame = i;
    //         if (ChorusSubSystem->Tracks[PlayHead.Track].Frames[i].time >= PlayHead.EndTime)
    //             break;
    //     }
    // }
    
    //PlayHead.FrameCount = PlayHead.EndFrame - PlayHead.StartFrame + 1;
    PlayHead.Length = (ControlStruct.End.Timestamp(ChorusSubSystem) - ControlStruct.Start.Timestamp(ChorusSubSystem)) / ControlStruct.Speed;
    PlayHead.Timestamp = time += sec;
}

void FCHORPlay::InterpolatePose(const FChorusFrame &FrameA, const FChorusFrame &FrameB, const float Alpha, FPoseContext& Output)
{
    if (FrameA.pose.Num() != Output.Pose.GetNumBones() || FrameB.pose.Num() != Output.Pose.GetNumBones()) {
        UE_LOG(LogTemp, Warning, TEXT("Input: %d, FrameA: %d, FrameB: %d"), Output.Pose.GetNumBones(), FrameA.pose.Num(), FrameB.pose.Num());
        return;
    }
    for (int32 BoneIndex = 0; BoneIndex < FrameA.pose.Num(); ++BoneIndex)
    {
        Output.Pose[FCompactPoseBoneIndex(BoneIndex)].Blend(FrameA.pose[BoneIndex], FrameB.pose[BoneIndex], Alpha);
    }
}

bool FCHORPlay::ReplayRecording(FPoseContext& Output)
{
    if (ChorusSubSystem == nullptr)
        return false;
    if (ChorusSubSystem->Owners[Owner].bPlay == false)
        return false;
    
    if (PlayHead.Track == 0)
    {
        InitializePlayHead();
    }
    
    CurrentTime += DeltaTime * ChorusSubSystem->Owners[Owner].Speed;
    const TArray<FChorusFrame>& frames = ChorusSubSystem->Tracks[PlayHead.Track].Frames;
    
    if (frames.Num() - 2 >= 0)
    {
        double t = PlayHead.StartTime;
        double true_end = FMath::Min(PlayHead.EndTime, frames[frames.Num() - 2].time);

        //if( CurrentTime >= frames[frames.Num() - 2].time)
        //    CurrentTime = frames[frames.Num() - 2].time - UE_DOUBLE_SMALL_NUMBER;
        
        if (CurrentTime < t)
        {
            if (ChorusSubSystem->Owners[Owner].bLoop)
            {
                if (ChorusSubSystem->Owners[Owner].bPalindrome)
                {
                    ChorusSubSystem->Owners[Owner].Speed *= -1;
                    CurrentTime = t + (t - CurrentTime);
                }
                else
                {
                    CurrentTime += true_end - PlayHead.StartTime;
                }
                ChorusSubSystem->TriggerOnLoopEvent(Owner, PlayHead.Track, false);
            }
            else
            {
                CurrentTime = t;
                ChorusSubSystem->Owners[Owner].bPlay = false;
                ChorusSubSystem->TriggerStartOfTrackEvent(Owner, PlayHead.Track);
                //return false;
            }
        }
        if (CurrentTime > true_end)
        {
            if (ChorusSubSystem->Owners[Owner].bPalindrome)
            {
                ChorusSubSystem->Owners[Owner].Speed *= -1;
                CurrentTime = true_end - (CurrentTime - true_end);
            }
            else if (ChorusSubSystem->Owners[Owner].bLoop)
            {
                CurrentTime -= true_end - PlayHead.StartTime;
                ChorusSubSystem->TriggerOnLoopEvent(Owner, PlayHead.Track, true);
            }
            else
            {
                CurrentTime = true_end - DBL_EPSILON;
                ChorusSubSystem->Owners[Owner].bPlay = false;
                ChorusSubSystem->TriggerEndOfTrackEvent(Owner, PlayHead.Track);
                //return false;
            }
        }

        if (ChorusSubSystem->Tracks[PlayHead.Track].Frames.Num() - PlayHead.StartFrame < 2)
            InterpolatePose(frames[PlayHead.StartFrame], frames[PlayHead.StartFrame], (0), Output);
        else
        {
            int FrameNum = frames.Num() - 1;
            for (int i = PlayHead.StartFrame + 1; i < FrameNum; i++)
            {
                double nt = frames[i].time;
                if (CurrentTime >= t && CurrentTime < nt)
                {
                    InterpolatePose(frames[i - 1], frames[i], (CurrentTime - t) / (nt - t), Output);
                }
                t = nt;
            }
        }
    }
    
    return true;
}


FCHORPlay::FCHORPlay():ChorusSubSystem(nullptr),
Owner(nullptr)
{
}
