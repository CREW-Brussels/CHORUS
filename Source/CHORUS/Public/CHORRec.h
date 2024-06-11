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
#include "CHORRec.generated.h"


USTRUCT(BlueprintInternalUseOnly)
struct CHORUS_API FCHORRec: public FAnimNode_Base
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Links)
	FPoseLink Base;

	
	UPROPERTY()
	UCHORSubsystem* IsjSubSystem;

	int frame;
	int maxFrames;
	int randomFrame;
	
public:
	FCHORRec();
	
public:
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;
	// virtual void EvaluateComponentSpace_AnyThread(FComponentSpacePoseContext& Output) override;
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;

private:
	UPROPERTY(EditAnywhere, Category = "Rec Settings", meta = (PinShownByDefault))
	bool bIsRecording;

	UPROPERTY(EditAnywhere, Category = "Rec Settings", meta = (PinShownByDefault))
	int track;
	
	





};