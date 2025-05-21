// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Animation/AnimNodeBase.h"
#include "Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "CHORSubsystem.h"
#include "Math/UnrealMathUtility.h"
#include "AnimationRuntime.h"
#include "Engine/World.h"

#include "CHORRec.generated.h"

USTRUCT(BlueprintInternalUseOnly)
struct CHORUS_API FCHORRec: public FAnimNode_Base
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Links)
	FPoseLink Base;
	
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;


	FCHORRec();
private:
	friend class CHORSubsystem;

	UPROPERTY()
	AActor* Owner;
	
	UPROPERTY()
    UCHORUSSubsystem* ChorusSubSystem;

	double CurrentTime;
	double DeltaTime;
	double RemainderTime;
	double FrameDelta;
};
