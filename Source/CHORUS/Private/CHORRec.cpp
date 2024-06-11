// Fill out your copyright notice in the Description page of Project Settings.


#include "CHORRec.h"
#include "Animation/AnimInstanceProxy.h"
#include "AnimationRuntime.h"
#include "Animation/AnimTrace.h"
#include "Engine/World.h"


#include UE_INLINE_GENERATED_CPP_BY_NAME(CHORRec) //his improves compile times because less header parsing is required. 

void FCHORRec::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
    FAnimNode_Base::Initialize_AnyThread(Context);
    Base.Initialize(Context);  
    IsjSubSystem = GEngine->GetEngineSubsystem<UCHORSubsystem>(); //  alreadty doing this in constructor??
    IsjSubSystem->ResetBuffer(track);
    frame = 0;

}

void FCHORRec::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
    DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(CacheBones_AnyThread)
    // InitializeBoneReferences(Context.AnimInstance->RequiredBones);
    Base.CacheBones(Context);
}

void FCHORRec::Update_AnyThread(const FAnimationUpdateContext& Context)
{
    DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Update_AnyThread)
    Base.Update(Context);
    GetEvaluateGraphExposedInputs().Execute(Context);
}

void FCHORRec::Evaluate_AnyThread(FPoseContext& Output)
{
    DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Evaluate_AnyThread)

    UE_LOG(LogTemp, Warning, TEXT("Rec:Evaluate"));
    if (bIsRecording)
    {
        UE_LOG(LogTemp, Warning, TEXT(" rec: bIsRerecording true"));
        if (IsValid(IsjSubSystem))
        {
            Base.Evaluate(Output);
            //UE_LOG(LogTemp, Warning, TEXT("REC: found the subsystem"));
            // check if Array is initiated
            if (IsjSubSystem->bRecordingInitiated == false)
            {
                //UE_LOG(LogTemp, Warning, TEXT("REC: recording not initiated"));
                IsjSubSystem->bRecordingInitiated = true;
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("REC: recording initiated"));
                FCompactHeapPose PoseCopy;
                PoseCopy.CopyBonesFrom(Output.Pose);
                PoseCopy.NormalizeRotations();
                if (!PoseCopy.ContainsNaN())
                {
                    IsjSubSystem->RecPose(track, PoseCopy);
                    UE_LOG(LogTemp, Warning, TEXT("REC: pose recorded"));
                    //FCompactHeapPose PoseRetrieve = IsjSubSystem->PlayPose(track, frame);
                    //Output.Pose.CopyBonesFrom(PoseRetrieve); // just to see already
                   
                    Base.Evaluate(Output);

                    frame++;
                }
                else
                {
                    UE_LOG(LogTemp, Warning, TEXT("REC: nanananananan"));
                }

            }
        }
        else
        {
            Base.Evaluate(Output);
            UE_LOG(LogTemp, Warning, TEXT(" rec didnt find the subsystem"));
        }
    }
    else
    {
        Base.Evaluate(Output);
        UE_LOG(LogTemp, Warning, TEXT(" bIsRec: false"));
    }    
}

   
FCHORRec::FCHORRec()
    : bIsRecording(false)
    , track(0)
{
    DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Initialize_AnyThread)
        
    UE_LOG(LogTemp, Warning, TEXT("evaluating 26"));
    frame = 0;
    if (IsValid(GEngine))
    {
        UE_LOG(LogTemp, Warning, TEXT("rec have engine"));
        IsjSubSystem = GEngine->GetEngineSubsystem<UCHORSubsystem>();
        if (IsValid(IsjSubSystem))
        {
            UE_LOG(LogTemp, Warning, TEXT("rec have subsystem"));
            // register to subsystem rectrack here here
        }

    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("rec don't have engine"));
    }  
}


