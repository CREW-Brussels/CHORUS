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

    CurrentTime = 0.0;
    DeltaTime = 0.0;
    _Fps = -1;
    if (ChorusSubSystem != nullptr)
    {
        _ControlID = ChorusSubSystem->RegisterRecorder(_Track, _bRecord, ControlID);
        ReadPins();
    }
}

void FCHORRec::ReadPins()
{

    if (_ControlID == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("ControlID is 0, Control ID should not be 0 here."));
        return;
    }

    if (Fps != _Fps)
    {
        _Fps = Fps;
        FrameDelta = 1.0 / (double)_Fps;
        RemainderTime = FrameDelta;
        if (ChorusSubSystem->Tracks.Contains(ChorusSubSystem->ControlIds[_ControlID].Track))
        ChorusSubSystem->Tracks[ChorusSubSystem->ControlIds[_ControlID].Track].SetFps(Fps);
    }
    
    if (bRecord != _bRecord)
    {
        _bRecord = bRecord;
        ChorusSubSystem->ControlIds[_ControlID].bIsRecording = _bRecord;
    }

    if (Track != _Track)
    {
        _Track = Track;
        ChorusSubSystem->ControlIds[_ControlID].Track = _Track;
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

    if (ChorusSubSystem != nullptr)
        ReadPins();
}

void FCHORRec::Evaluate_AnyThread(FPoseContext& Output)
{
    if (ChorusSubSystem == nullptr)
        return;
    
    Base.Evaluate(Output);

    if (_ControlID == 0)
        _ControlID = ControlID;

    RemainderTime += DeltaTime;
    CurrentTime += DeltaTime;
    if (ChorusSubSystem->ControlIds[_ControlID].bIsRecording && RemainderTime >= FrameDelta)
    {
        FChorusFrame frame;
        frame.pose = Output.Pose.GetBones();
        frame.time = CurrentTime;

        RemainderTime = FMath::Fmod(RemainderTime, FrameDelta);

        ChorusSubSystem->RecordFrame(ChorusSubSystem->ControlIds[_ControlID].Track, frame);
    }
}

FCHORRec::FCHORRec()
    : bRecord()
    , Track()
    , ControlID()
{
    // _bRecord = bRecord;
    // _Track = Track;
    // _ControlID = ControlID;
}


