// Fill out your copyright notice in the Description page of Project Settings.

#include "CHORRec.h"

#include "Animation/AnimInstance.h"
#include "GameFramework/Pawn.h"
#include "Animation/AnimInstanceProxy.h"
#include "Kismet/GameplayStatics.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(CHORRec)



void FCHORRec::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
    ChorusSubSystem = nullptr;
    if (Context.AnimInstanceProxy)
    {
        if (const UAnimInstance* AnimInstance = Cast<UAnimInstance>(Context.AnimInstanceProxy->GetAnimInstanceObject()))
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
    DeltaTime = 0.0;
    if (ChorusSubSystem != nullptr && Owner != nullptr)
    {
        ChorusSubSystem->RegisterRecorder(Owner);

    }
}

void FCHORRec::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
    Base.CacheBones(Context);
}

void FCHORRec::Update_AnyThread(const FAnimationUpdateContext& Context) 
{
    DeltaTime = Context.GetDeltaTime();
    Base.Update(Context);
    GetEvaluateGraphExposedInputs().Execute(Context);
}

void FCHORRec::Evaluate_AnyThread(FPoseContext& Output)
{
    Base.Evaluate(Output);

    if (ChorusSubSystem == nullptr || Owner == nullptr)
        return;

    RemainderTime += DeltaTime;
    CurrentTime += DeltaTime;
    if (ChorusSubSystem->Owners[Owner].bIsRecording && RemainderTime >= FrameDelta)
    {
        FrameDelta = 1.0 / (double)ChorusSubSystem->Tracks[ChorusSubSystem->Owners[Owner].Track].Fps;
        FChorusFrame frame;
        frame.pose = Output.Pose.GetBones();
        frame.time = CurrentTime;
        frame.FrameReady = false;
        
        RemainderTime = FMath::Fmod(RemainderTime, FrameDelta);

        ChorusSubSystem->RecordFrame(ChorusSubSystem->Owners[Owner].Track, frame);
    }
}

FCHORRec::FCHORRec():
    Owner(nullptr)
{
}


