// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Subsystems/EngineSubsystem.h"
#include "CHORSubsystem.generated.h"

/**
 * 
 */


UCLASS()
class CHORUS_API UCHORSubsystem : public UEngineSubsystem
{
	GENERATED_BODY()

public:
	bool bRecordingInitiated;

	bool RegisterRecorder(int track); // Fscopelock / mutex ?
	bool IsReadyForPlaying(int track);
	void RecPose(int track, FCompactHeapPose Pose);
	FCompactHeapPose PlayPose(int track, int poseIndex);

	UFUNCTION(BlueprintCallable, Category = "Isjtar")
	void ResetBuffer(int track);

	/*UFUNCTION(BlueprintCallable, Category = "Isjtar")
	void ResetAllBuffers();*/

	// FScopeLock or Mutex
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	TArray<FCHORTrack> PoseTracks;

};

USTRUCT(BlueprintType)
struct FCHORTrack
{
	GENERATED_BODY()

	TArray<FCompactHeapPose> PoseBuffer;

};


