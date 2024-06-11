// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h" // includes in .h in .cpp only include its own .h
#include "UObject/ObjectMacros.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/InputScaleBias.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "CHORSubsystem.h"
#include "Math/UnrealMathUtility.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BonePose.h"
#include "CHORPlay.generated.h"


USTRUCT(BlueprintInternalUseOnly)
struct CHORUS_API FCHORPlay: public FAnimNode_Base
{
	GENERATED_USTRUCT_BODY()
 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Links)
	FPoseLink Base;

	UPROPERTY()
	UCHORSubsystem* IsjSubSystem;

private:
	int frame;
	int maxFrames;
	

public:
	
	FCHORPlay();
	void ResetFrame();
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	// virtual void GatherDebugData(FNodeDebugData& debugData) override;
	virtual bool NeedsOnInitializeAnimInstance() const override { return true; }
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context)override;
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;

	UPROPERTY(EditAnywhere, Category = Settings, meta = (PinShownByDefault))
	int numFrames = 120;

	UPROPERTY(EditAnywhere, Category = Settings, meta = (PinShownByDefault))
	bool bIsPlaying = false;

	UPROPERTY(EditAnywhere, Category = Settings, meta = (PinShownByDefault))
	int track = 0;

	//UPROPERTY(EditAnywhere, Category = Settings, meta = (PinShownByDefault))
	//int frame = 0;

private:
	// virtual void InitializeBoneReferences(const FBoneContainer& RequiredBones) override;
	
	

};