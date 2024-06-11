#include "ReadBone.h"
#include "Animation/AnimInstanceProxy.h"
#include "AnimationCoreLibrary.h"
#include "AnimationRuntime.h"

DECLARE_CYCLE_STAT(TEXT("Gradual Scale Joints Eval"), STAT_GradualScaleJoints_Eval, STATGROUP_Anim);

/////////////////////////////////////////////////////
// FAnimNode_GradualScaleJoint

FReadBone::FReadBone()
	: ScaleCurve(nullptr)
{
}

void FReadBone::GatherDebugData(FNodeDebugData& debugData)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(GatherDebugData)

	FString DebugLine = debugData.GetNodeName(this);

	DebugLine += "(";
	AddDebugNodeData(DebugLine);
	DebugLine += FString::Printf(TEXT(")"));
	debugData.AddDebugItem(DebugLine);

	ComponentPose.GatherDebugData(debugData);

}

void FReadBone::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& output,
	TArray<FBoneTransform>& outBoneTransforms)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(EvaluateSkeletalControl_AnyThread)
	SCOPE_CYCLE_COUNTER(STAT_GradualScaleJoints_Eval);
}

bool FReadBone::IsValidToEvaluate(const USkeleton* skeleton, const FBoneContainer& requiredBones)
{
	return true;
}

void FReadBone::InitializeBoneReferences(const FBoneContainer& requiredBones)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(InitializeBoneReferences)
}
