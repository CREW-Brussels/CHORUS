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
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (PinShownByDefault))
	bool bRecord;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (PinShownByDefault))
	int32 Track;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (PinShownByDefault))
	int32 ControlID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (PinShownByDefault))
	int32 Fps;
	
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;


	FCHORRec();
private:
	
	UPROPERTY()
	bool _bRecord;
	
	UPROPERTY()
	int32 _Track;
	
	UPROPERTY()
	int32 _ControlID;

	UPROPERTY()
	int32 _Fps;
	
	UPROPERTY()
    UCHORSubsystem* ChorusSubSystem;

	void ReadPins();

	double DeltaTime;
	double CurrentTime;
	double RemainderTime;
	double FrameDelta;
};
