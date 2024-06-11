#pragma once

#include "BoneControllers/AnimNode_ModifyBone.h"
#include "ReadBone.h"
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "ReadBoneEditor.generated.h"

UCLASS(MinimalAPI)
class UReadBoneEditor : public UReadBone
{
	GENERATED_BODY()

public:

	// UEdGraphNode interface
	virtual FText GetNodeTitle(ENodeTitleType::Type titleType) const override;
	virtual FText GetTooltipText() const override;
	// End of UEdGraphNode interface

protected:

	// UAnimGraphNode_SkeletalControlBase interface
	virtual FText GetControllerDescription() const override;
	virtual const FAnimNode_SkeletalControlBase* GetNode() const override { return &Node; }
	virtual void Draw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* previewSkelMeshComp) const override;
	// End of UAnimGraphNode_SkeletalControlBase interface

private:

	UPROPERTY(EditAnywhere, Category = Settings)
	FReadBone Node;

};
