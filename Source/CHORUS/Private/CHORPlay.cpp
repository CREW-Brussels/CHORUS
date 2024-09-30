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
            const AActor* Owner = AnimInstance->GetOwningComponent()->GetOwner();
            if (Owner && IsValid(Owner->GetGameInstance()))
            {
                ChorusSubSystem = Owner->GetGameInstance()->GetSubsystem<UCHORSubsystem>();
            }
            else
            {
                return;
            }
        }
    }

    Base.Initialize(Context);

    if (ChorusSubSystem != nullptr)
    {
        _ControlID = ChorusSubSystem->RegisterPlayer(ControlID, _Start, _End, _Speed, _bLoop, _bPlay);
        ReadPins();
    }
}

void FCHORPlay::ReadPins()
{
    if (_ControlID == 0)
    {
        _ControlID = ControlID == 0 ? ChorusSubSystem->GetNextControlId() : ControlID;
    }
    
    if (Start != _Start)
    {
        _Start = Start;
        ChorusSubSystem->ControlIds[_ControlID].Start = _Start;
    }
    if (End != _End)
    {
        _End = End;
        ChorusSubSystem->ControlIds[_ControlID].End = _End;
    }
    if (Speed != _Speed)
    {
        _Speed = Speed;
        ChorusSubSystem->ControlIds[_ControlID].Speed = _Speed;
    }
    if (bLoop != _bLoop)
    {
        _bLoop = bLoop;
        ChorusSubSystem->ControlIds[_ControlID].bLoop = _bLoop;
    }
    if (bPlay != _bPlay)
    {
        _bPlay = bPlay;
        ChorusSubSystem->ControlIds[_ControlID].bPlay = _bPlay;
    }
}


void FCHORPlay::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
    Base.CacheBones(Context);
}

void FCHORPlay::Evaluate_AnyThread(FPoseContext& Output)
{
    if (ChorusSubSystem == nullptr)
        return;

    if (_ControlID == 0)
        _ControlID = ControlID;
    
    if (  !( ChorusSubSystem->ControlIds[_ControlID].bPlay && ReplayRecording(Output) )  )
    {
        Base.Evaluate(Output);
    }

    ReadPins();
}

void FCHORPlay::Update_AnyThread(const FAnimationUpdateContext& Context)
{
    Base.Update(Context);
    GetEvaluateGraphExposedInputs().Execute(Context);
}

void FCHORPlay::InitializePlayHead()
{
    if (ChorusSubSystem == nullptr)
        return;
    
    FControlStruct ControlStruct = ChorusSubSystem->ControlIds[_ControlID];
    ControlStruct.Speed = ControlStruct.Speed != 0 ? ControlStruct.Speed : 1;
    
    if (ControlStruct.Start.Track != ControlStruct.End.Track)
    {
        ChorusSubSystem->ControlIds[_ControlID].bPlay = false;
        PlayHead.Track = 0;
        return;
    }

    PlayHead.Track = ControlStruct.Start.Track;

    int sec = 0;
    double time = 0;
    UGameplayStatics::GetAccurateRealTime(sec, time);
    
    PlayHead.StartFrame = ControlStruct.Start.Index;
    PlayHead.EndFrame = ControlStruct.End.Index;
    PlayHead.FrameCount = PlayHead.EndFrame - PlayHead.StartFrame + 1;
    PlayHead.Length = (ControlStruct.End.Timestamp - ControlStruct.Start.Timestamp) / ControlStruct.Speed;
    PlayHead.Timestamp = time += sec;
}

bool FCHORPlay::InterpolatePose(const float Position, FPoseContext& Output) const
{
    if (ChorusSubSystem == nullptr)
        return false;
    
    if (PlayHead.Track == 0)
        return false;
    
    const float FramePos = float(PlayHead.FrameCount) * Position;

    const int Frame1 = int(floor(FramePos)) % (PlayHead.FrameCount - 1);
    const int Frame2 = int(ceil(FramePos)) % (PlayHead.FrameCount - 1);

    const float Alpha = FMath::Frac(FramePos);

    TArray<FTransform> BoneTransformsA = ChorusSubSystem->Tracks[PlayHead.Track].Poses[Frame1];
    TArray<FTransform> BoneTransformsB = ChorusSubSystem->Tracks[PlayHead.Track].Poses[Frame2];

    for (int32 BoneIndex = 0; BoneIndex < BoneTransformsA.Num(); ++BoneIndex)
    {
        Output.Pose[FCompactPoseBoneIndex(BoneIndex)].Blend(BoneTransformsA[BoneIndex], BoneTransformsB[BoneIndex], Alpha);
    }
    return true;
}

bool FCHORPlay::ReplayRecording(FPoseContext& Output)
{
    if (ChorusSubSystem == nullptr)
        return false;
    
    if (PlayHead.Track == 0)
        InitializePlayHead();

    double CurentTime = 0;
    int32 s = 0;
    UGameplayStatics::GetAccurateRealTime(s, CurentTime);
    CurentTime += s;
    
    float ClipPosition = (CurentTime - PlayHead.Timestamp) * _Speed; 

    float pos = ClipPosition / PlayHead.Length;
    
    if (pos > 1 && !ChorusSubSystem->ControlIds[_ControlID].bLoop)
    {
        ChorusSubSystem->ControlIds[_ControlID].bLoop = _bPlay = false;
        PlayHead.Track = 0;
        pos = 1;
    }

    return InterpolatePose(abs(pos), Output);
}

FCHORPlay::FCHORPlay(): ChorusSubSystem(nullptr)
{
    // _Speed = Speed = 1;
    // _bLoop = bLoop = false;
    // _bPlay = bPlay = false;
    // _ControlID = ControlID = 0;
}
