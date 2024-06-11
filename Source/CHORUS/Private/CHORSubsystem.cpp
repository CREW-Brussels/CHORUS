// Fill out your copyright notice in the Description page of Project Settings.


#include "CHORSubsystem.h"



bool UCHORSubsystem::RegisterRecorder(int track)
{
	return false;
}

bool UCHORSubsystem::IsReadyForPlaying(int track)
{
	if (PoseTracks[track].PoseBuffer.Num() > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void UCHORSubsystem::RecPose(int track, FCompactHeapPose Pose)
{
	if (PoseTracks.IsValidIndex(track))
	{
		PoseTracks[track].PoseBuffer.Add(Pose);
		UE_LOG(LogTemp, Warning, TEXT("SS: added copy"));
	}	
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("SS: tried to record on invalid track index"));
	}
}

FCompactHeapPose UCHORSubsystem::PlayPose(int track, int poseIndex) // overload for looping, fixed length etc
{
	FCompactHeapPose LocalPose;
	int frame = poseIndex % PoseTracks[track].PoseBuffer.Num();
	if (PoseTracks.IsValidIndex(track))
	{
		if (PoseTracks[track].PoseBuffer.IsValidIndex(frame))
		{
			LocalPose = PoseTracks[track].PoseBuffer[frame];
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("SS: tried to play INVALID poseindex"));
			LocalPose.ResetToRefPose(); // have to return some kind of pose or it will crash
		}
		return LocalPose;
	}		
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("SS: tried to play INVALID TRACK"));
		LocalPose.ResetToRefPose(); // have to return some kind of pose or it will crash
		return LocalPose;
	}
}

void UCHORSubsystem::ResetBuffer(int track)
{
	TArray<FCompactHeapPose> LocalTrack;
	{
		if (PoseTracks.IsValidIndex(track))
		{
			PoseTracks[track].PoseBuffer.Empty();
		}
	}
}
//
//void UIsjEngineSubsystem::ResetAllBuffers()
//{
//	for each (FCHTrack aTrack in PoseTracks)
//	{
//		aTrack.PoseBuffer.Empty();
//	}
//}

void UCHORSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogTemp, Warning, TEXT("INIT SUBSYSTEM"));
	Super::Initialize(Collection);
	bRecordingInitiated = false;
	FCHORTrack EmptyTrack;
	PoseTracks.Init(EmptyTrack, 256);	// array of FCHTracks
}
