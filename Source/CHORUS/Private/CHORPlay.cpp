// Fill out your copyright notice in the Description page of Project Settings.


#include "CHORPlay.h"
#include "Animation/AnimInstanceProxy.h"
#include "AnimationRuntime.h"
#include "Animation/AnimTrace.h"
#include "Engine/World.h"


#include UE_INLINE_GENERATED_CPP_BY_NAME(CHORPlay) //his improves compile times because less header parsing is required. 

void FCHORPlay::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
    DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Initialize_AnyThread)
    FAnimNode_Base::Initialize_AnyThread(Context);

    UE_LOG(LogTemp, Warning, TEXT("play init"));
    if (IsValid(GEngine))
    {
        UE_LOG(LogTemp, Warning, TEXT("play has engine"));
        IsjSubSystem = GEngine->GetEngineSubsystem<UCHORSubsystem>();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("play don't have engine"));
    }
    frame = 0;
    
    Base.Initialize(Context);    


}

//void FCHORPlay::InitializeBoneReferences(const FBoneContainer& RequiredBones)
//{
//    DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(InitializeBoneReferences)
//    // check if it is the right skeleton
//    // const FReferenceSkeleton ReferenceSkeleton = RequiredBones.GetReferenceSkeleton();
//}

//bool FCHORPlay::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones)
//{
//    return true;
//}

void FCHORPlay::Evaluate_AnyThread(FPoseContext& Output)
{
    DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Evaluate_AnyThread)
    
    if (bIsPlaying)
    {
        UE_LOG(LogTemp, Warning, TEXT("PLAY: isplaying is true"));
        FCompactHeapPose RemotePose;
        if (IsjSubSystem->IsReadyForPlaying(track))
        {
            UE_LOG(LogTemp, Warning, TEXT("PLAY: is ready for playing"));
            RemotePose = IsjSubSystem->PlayPose(track, frame % numFrames);
            
            if (RemotePose.IsValid())
            {
                const FBoneContainer& RemoteBC = RemotePose.GetBoneContainer();
                if (RemoteBC.IsValid())
                {
                    if (!RemotePose.ContainsNaN())
                    {
                        Output.Pose.CopyBonesFrom(RemotePose);
                        frame++;
                        UE_LOG(LogTemp, Warning, TEXT("play: frame iss: %d"), frame);

                    }
                    else
                    {
                        UE_LOG(LogTemp, Warning, TEXT("PLAY: nananananan"));
                    }
                }
                else
                {
                    UE_LOG(LogTemp, Warning, TEXT("PLAY: REMOTEBC IS NOT VALID"));
                }
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("PLAY: REMOTEPOSSE IS NOT VALID"));
                RemotePose.ResetToRefPose();
                Output.Pose.CopyBonesFrom(RemotePose);

            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("PLAY: ready fot playing returns false"));
            Base.Evaluate(Output);
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("PLAY: playing regular input"));
        Base.Evaluate(Output);
    }    
}

void FCHORPlay::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
    // Bonecontair init goes here (but we don't need it)
    // Base.CacheBones(Context);
}


void FCHORPlay::Update_AnyThread(const FAnimationUpdateContext& Context)
   
{
    DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Update_AnyThread)
    Base.Update(Context);
    GetEvaluateGraphExposedInputs().Execute(Context);
}

	









   
FCHORPlay::FCHORPlay()
    : bIsPlaying(false)
    , numFrames(120)
    , track(0)
    , frame(0)
{
    
}

void FCHORPlay::ResetFrame()
{
    frame = 0;
}






