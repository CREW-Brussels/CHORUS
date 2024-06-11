#include "ReadBoneEditor.h"
#include "Components/SkeletalMeshComponent.h"

/////////////////////////////////////////////////////
// UReadBoneEditor

#define LOCTEXT_NAMESPACE "A3Nodes"

FText UReadBoneEditor::GetControllerDescription() const
{
	return LOCTEXT("GradualScaleJoints", "Gradual Scale Joints");
}

FText UReadBoneEditor::GetNodeTitle(ENodeTitleType::Type titleType) const
{
	return GetControllerDescription();
}

FText UReadBoneEditor::GetTooltipText() const
{
	return LOCTEXT("ReadBoneEditor_Tooltip", "Scales a chain of joints based on a curve and a delta values");
}

void UReadBoneEditor::Draw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* previewSkelMeshComp) const
{

}

#undef LOCTEXT_NAMESPACE