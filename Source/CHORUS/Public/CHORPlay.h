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
	
	UPROPERTY(EditAnywhere, Category = Settings, meta = (PinShownByDefault))
	FChorusCuePoint Start;
	
	UPROPERTY(EditAnywhere, Category = Settings, meta = (PinShownByDefault))
	FChorusCuePoint End;
	
	UPROPERTY(EditAnywhere, Category = Settings, meta = (PinShownByDefault))
	float Speed = 1;
	
	UPROPERTY(EditAnywhere, Category = Settings, meta = (PinShownByDefault))
	bool bLoop = false;
	
	UPROPERTY(EditAnywhere, Category = Settings, meta = (PinShownByDefault))
	bool bPlay = false;
	
	UPROPERTY(EditAnywhere, Category = Settings, meta = (PinShownByDefault))
	int32 ControlID = 0;
	
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual bool NeedsOnInitializeAnimInstance() const override { return true; }
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context)override;
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;

	FCHORPlay();

private:
	UPROPERTY()
	FChorusPlayHead PlayHead;

	UPROPERTY()
	UCHORSubsystem* ChorusSubSystem;

	UPROPERTY()
	FChorusCuePoint _Start;
	
	UPROPERTY()
	FChorusCuePoint _End;
	
	UPROPERTY()
	float _Speed = 1;
	
	UPROPERTY()
	bool _bLoop = false;
	
	UPROPERTY()
	bool _bPlay = false;
	
	UPROPERTY()
	int32 _ControlID = 0;

	bool InterpolatePose(float Position, FPoseContext& Output) const;
	bool ReplayRecording(FPoseContext& Output);
	void InitializePlayHead();
	void ReadPins();
};