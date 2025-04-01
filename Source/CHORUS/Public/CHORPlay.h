// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Animation/AnimNodeBase.h"
#include "Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "CHORSubsystem.h"
#include "Math/UnrealMathUtility.h"
#include "BonePose.h"
#include "FChorusCuePoint.h"
#include "AnimationRuntime.h"
#include "FChorusPlayHead.h"
#include "Engine/World.h"

#include "CHORPlay.generated.h"

USTRUCT(BlueprintInternalUseOnly)
struct CHORUS_API FCHORPlay: public FAnimNode_Base
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Links)
	FPoseLink Base;
	
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual bool NeedsOnInitializeAnimInstance() const override { return true; }
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context)override;
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;

	FCHORPlay();

private:
	UPROPERTY()
	AActor *Owner;
	
	UPROPERTY()
	FChorusPlayHead PlayHead;

	UPROPERTY()
	UCHORUSSubsystem* ChorusSubSystem;

	static void InterpolatePose(const FChorusFrame& FrameA, const FChorusFrame& FrameB, const float Alpha, FPoseContext& Output);
	bool ReplayRecording(FPoseContext& Output);
	void InitializePlayHead();

	double DeltaTime;
	double CurrentTime;
};