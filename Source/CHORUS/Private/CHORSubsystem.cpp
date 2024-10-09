// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CHORSubsystem.h"

#include "EntitySystem/MovieSceneEntitySystemTypes.h"
#include "Kismet/GameplayStatics.h"

int UCHORSubsystem::GetNextControlId()
{
    return ++NextControlId;
}

void UCHORSubsystem::RegisterCuePoint(FChorusCuePoint &CuePoint)
{
    if (!Tracks.Contains(CuePoint.Track))
        Tracks.Add(CuePoint.Track);
    CuePoint.Index = Tracks[CuePoint.Track].Frames.Num();
    Tracks[CuePoint.Track].CuePoints.Add(CuePoint);
}


FChorusCuePoint UCHORSubsystem::PlayPauseRecorder(const int32 ControlId, const bool Recording)
{
    FChorusCuePoint CuePoint;

    if (!ControlIds.Contains(ControlId))
    {
        UE_LOG(LogTemp, Warning, TEXT("ControlID is not valid"))
        CuePoint.Track = 0;
        CuePoint.Index = 0;
        //CuePoint.Timestamp = 0;
        return CuePoint;
    }
	
    int sec = 0;
    double time = 0;

    CuePoint.Track = ControlIds[ControlId].Track;
    UGameplayStatics::GetAccurateRealTime(sec, time);
    time += sec;
    //CuePoint.Timestamp = time;
    ControlIds[ControlId].bIsRecording = Recording;
    RegisterCuePoint(CuePoint);
    return CuePoint;
}

int32 UCHORSubsystem::RegisterControlId(int32 ControlId, const FControlStruct &NewControl)
{
    if (ControlId == 0)
        ControlId = GetNextControlId();
    else if (ControlIds.Contains(ControlId))
    {
        UE_LOG(LogTemp, Warning, TEXT("ControlId not available."));
        return 0;
    }

    if (NextControlId < ControlId)
        NextControlId = ControlId;
    
    ControlIds.Add(ControlId, NewControl);
    
    return ControlId;
}

int32 UCHORSubsystem::RegisterPlayer(const int32 ControlId
                                     , const FChorusCuePoint &Start
                                     , const FChorusCuePoint &End
                                     , const float Speed
                                     , const bool bLoop
                                     , const bool bPlay)
{

    FControlStruct NewControl;

    NewControl.Start = Start;
    NewControl.End = End;
    NewControl.Speed = Speed;
    NewControl.bLoop = bLoop;
    NewControl.bPlay = bPlay;
    NewControl.Track = Start.Track;
    NewControl.Position = 0.0;

    return RegisterControlId(ControlId, NewControl);
}

void UCHORSubsystem::UnregisterPlayer(const int32 ControlId)
{
    if (!UnregisterControlId(ControlId))
        UE_LOG(LogTemp, Warning, TEXT("UnregisterPlayerr(): ControlId not found ?!"))
}

bool UCHORSubsystem::UnregisterControlId(const int32 ControlId)
{
    if (!ControlIds.IsEmpty() && ControlIds.Contains(ControlId))
    {
        ControlIds.Remove(ControlId);
        return true;
    }
    return false;
}

void UCHORSubsystem::UnregisterRecorder(const int32 ControlId)
{
    if (!UnregisterControlId(ControlId))
        UE_LOG(LogTemp, Warning, TEXT("UnregisterRecorder(): ControlId not found ?!"))
}

int32 UCHORSubsystem::RegisterRecorder(const int32 Track, const bool bRecord, const int32 ControlId)
{
    FControlStruct NewControl;

    NewControl.bIsRecording = bRecord;
    NewControl.Track = Track;

    return RegisterControlId(ControlId, NewControl);
}

void UCHORSubsystem::RecordFrame(int32 Track, const FChorusFrame& frame)
{
	// int sec = 0;
	// double time = 0;
	//FPlatformTime::Seconds();
	
	Tracks[Track].Frames.Push(frame);
}

UCHORSubsystem::UCHORSubsystem()
{
    NextControlId = 0;
}

void UCHORSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    NextControlId = 0;
    
	Super::Initialize(Collection);
}

void UCHORSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void UCHORSubsystem::GetTrackStatus(const int Track, bool& IsRecording)
{
	IsRecording = false;
	
	if (!Tracks.Contains(Track))
	{
		IsRecording = false;
		return;
	}
	
	TArray<int32> ControlKeys;
	ControlIds.GetKeys(ControlKeys);
	for (int i = 0; i < ControlKeys.Num(); i++)
	{
		if (ControlIds[ControlKeys[i]].Track == Track)
		{
			IsRecording = ControlIds[ControlKeys[i]].bIsRecording;
			return;
		}
	}
}

int32 UCHORSubsystem::GetNewControlId()
{
	return GetNextControlId();
}

void UCHORSubsystem::ControlRecorder(const int32 ControlID, const bool Record, FChorusCuePoint &CuePoint)
{
    CuePoint = PlayPauseRecorder(ControlID, Record);
}


void UCHORSubsystem::PlayFromCuePointForDuration(int32 ControlID, FChorusCuePoint Start, float Duration, float Speed, bool Loop, bool Play)
{
	FChorusCuePoint End;
	End.SetTimestamp(Start.Timestamp(this) + Duration);
	End.Track = Start.Track;
	End.Index = -1;
	
	ControlPlayer(ControlID, Start, End, Speed, Loop, Play);
}


void UCHORSubsystem::ControlPlayer(const int32 ControlID
                                           , const FChorusCuePoint Start
                                           , const FChorusCuePoint End
                                           , const float Speed
                                           , const bool Loop
                                           , const bool Play)
{
	if (ControlIds.Contains(ControlID))
	{
		FControlStruct *ControlStruct = &ControlIds[ControlID];
		ControlStruct->Speed = Speed;
		ControlStruct->bLoop = Loop;
		ControlStruct->Start = Start;
		ControlStruct->End = End;
		if (Start.Track != 0 && End.Track!= 0)
		{
			float l;
			GetClipLength(Start, End, l);
			if (l != 0)
			{
				ControlStruct->bPlay = Play;
			}
		}
	}
}

void UCHORSubsystem::GetRecorderStatus(const int32 ControlID, bool &bIsRecording, int32 &Track)
{
	if (ControlIds.Contains(ControlID))
	{
		FControlStruct ControlStruct = ControlIds[ControlID];
		bIsRecording = ControlStruct.bIsRecording;
		Track = ControlStruct.Track;
	}
}

void UCHORSubsystem::GetPlayerStatus(const int32 ControlID
                                             , FChorusCuePoint& Start
                                             , FChorusCuePoint& End
                                             , bool& bIsPlaying
                                             , bool& bIsLoop
                                             , float& Speed)
{
	if (ControlIds.Contains(ControlID))
	{
		FControlStruct ControlStruct = ControlIds[ControlID];

		Start = ControlStruct.Start;
		End = ControlStruct.End;
		bIsPlaying = ControlStruct.bPlay;
		bIsLoop = ControlStruct.bLoop;
		Speed = ControlStruct.Speed;
	}
}

void UCHORSubsystem::DeleteTrack(const int Track)
{
	if (Tracks.Contains(Track))
	{
		Tracks[Track].Frames.Empty();
		Tracks[Track].CuePoints.Empty();
	}
}

void UCHORSubsystem::ListTracks(TArray<int>& TracksOut)
{
	Tracks.GetKeys(TracksOut);
}

void UCHORSubsystem::ListCuePoints(const int Track, TArray<FChorusCuePoint>& CuePoints)
{
	if (Tracks.Contains(Track))
	{
		CuePoints = Tracks[Track].CuePoints;
	}
}

void UCHORSubsystem::DeleteCuePoint(FChorusCuePoint CuePoint)
{
	if (Tracks.Contains(CuePoint.Track))
	{
		int cp = -1;
		for (int i = 0; i < Tracks[CuePoint.Track].CuePoints.Num(); i++)
		{
			if (Tracks[CuePoint.Track].CuePoints[i].Timestamp(this) == CuePoint.Timestamp(this))
			{
				cp = i;
				break;
			}
		}
		if (cp != -1)
		{
			// TODO: check if Track data can be cleared
			Tracks[CuePoint.Track].CuePoints.RemoveAt(cp);
		}
	}
}

void UCHORSubsystem::AddCuePoint(const int Track, FChorusCuePoint &CuePoint)
{
	bool isRecording = false;
	GetTrackStatus(Track, isRecording);
	if (isRecording)
	{
		CuePoint.Track = Track;
		//CuePoint.Timestamp = UGameplayStatics::GetRealTimeSeconds(this);
		RegisterCuePoint(CuePoint);
	}
	else
	{
		CuePoint.Track = 0;
		CuePoint.Index = 0;
		//CuePoint.Timestamp = 0;
	}
}

void UCHORSubsystem::ArchiveClip(FString Name, FChorusCuePoint Start, FChorusCuePoint End)
{
}

void UCHORSubsystem::DeleteClip(FString Name)
{
}

void UCHORSubsystem::ListClips(TArray<FString>& Names)
{
}

void UCHORSubsystem::LoadClip(FString Name, int& Track, FChorusCuePoint& Start, FChorusCuePoint& End)
{
}

void UCHORSubsystem::GetClipLength( FChorusCuePoint Start,  FChorusCuePoint End, float& Length)
{
	if (Start.Track != End.Track)
	{
		UE_LOG(LogTemp, Warning, TEXT("GetChorusClipLength: CHORUS cannot create clip from CuePoints on different tracks"));
		Length = 0;
	}
	else
		Length = abs(End.Timestamp(this) - Start.Timestamp(this));
}


