#pragma once

#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "BonePose.h"
#include "CoreMinimal.h"
#include "ReadBone.generated.h"

USTRUCT(BlueprintInternalUseOnly)
struct MYMODULE_API FReadBone : public FAnimNode_SkeletalControlBase
{
	GENERATED_BODY();
public:

	FReadBone();

	// FAnimNode_Base interface
	virtual void GatherDebugData(FNodeDebugData& debugData) override;
	virtual bool NeedsOnInitializeAnimInstance() const override { return true; }
	// End of FAnimNode_Base interface

	// FAnimNode_SkeletalControlBase interface
	virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& output, TArray<FBoneTransform>& outBoneTransforms) override;
	virtual bool IsValidToEvaluate(const USkeleton* skeleton, const FBoneContainer& requiredBones) override;
	// End of FAnimNode_SkeletalControlBase interface

private:
	// FAnimNode_SkeletalControlBase interface
	virtual void InitializeBoneReferences(const FBoneContainer& requiredBones) override;
	// End of FAnimNode_SkeletalControlBase interface

	/* The bone to start the scale at. Everything below this will be scaled by depth. */
	UPROPERTY(EditAnywhere, Category = "Gradual Scale Joints")
	FBoneReference ChainStart;

	/* The float curve that will drive the scale of the joints */
	UPROPERTY(EditAnywhere, Category = "Gradual Scale Joints")
	UCurveFloat* ScaleCurve;
};
