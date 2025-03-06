// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CHORSubsystem.h"

#include "Kismet/GameplayStatics.h"

int UCHORSubsystem::GetNextControlId()
{
    return ++NextControlId;
}

void UCHORSubsystem::RegisterCuePoint(FChorusCuePoint &CuePoint)
{
    if (!Tracks.Contains(CuePoint.Track))
        Tracks.Add(CuePoint.Track);
    CuePoint.Index = Tracks[CuePoint.Track].Frames.Num() - 1;
	CuePoint.Index = CuePoint.Index < 0 ? 0 : CuePoint.Index;
    Tracks[CuePoint.Track].CuePoints.Add(CuePoint);
}

FChorusCuePoint UCHORSubsystem::PlayPauseRecorder(const AActor *ControlId, const bool Recording, int32 Track)
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
	
	if (Track == 0)
		GetNewTrack(Track);
	if (Track != -1)
		ControlIds[ControlId].Track = Track;
    CuePoint.Track = ControlIds[ControlId].Track;
    ControlIds[ControlId].bIsRecording = Recording;
	
    RegisterCuePoint(CuePoint);
    return CuePoint;
}

void UCHORSubsystem::RegisterControlId(AActor* ControlId, const FControlStruct &NewControl)
{
    if (ControlIds.Contains(ControlId))
    {
        UE_LOG(LogTemp, Error, TEXT("ControlId not available."));
        return;
    }
    
    ControlIds.Add(ControlId, NewControl);
    
    return;
}

void UCHORSubsystem::RegisterPlayer(AActor *ControlId)
{
    FControlStruct NewControl;

    RegisterControlId(ControlId, NewControl);
}

void UCHORSubsystem::UnregisterPlayer(AActor *ControlId)
{
    if (!UnregisterControlId(ControlId))
        UE_LOG(LogTemp, Warning, TEXT("UnregisterPlayerr(): ControlId not found ?!"))
}

bool UCHORSubsystem::UnregisterControlId(AActor *ControlId)
{
    if (!ControlIds.IsEmpty() && ControlIds.Contains(ControlId))
    {
        ControlIds.Remove(ControlId);
        return true;
    }
    return false;
}

void UCHORSubsystem::UnregisterRecorder(AActor *ControlId)
{
    if (!UnregisterControlId(ControlId))
        UE_LOG(LogTemp, Warning, TEXT("UnregisterRecorder(): ControlId not found ?!"))
}

void UCHORSubsystem::RegisterRecorder(AActor* ControlId)
{
    FControlStruct NewControl;
	
    RegisterControlId(ControlId, NewControl);
}

void UCHORSubsystem::RecordFrame(int32 Track, const FChorusFrame& frame)
{
	Tracks[Track].Frames.Push(frame);
	Tracks[Track].Frames.Last().FrameReady = true;
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
	
	TArray<AActor*> ControlKeys;
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

void UCHORSubsystem::TriggerEndOfTrackEvent(AActor* ControlId, const int& Track)
{
	AsyncTask(ENamedThreads::GameThread, [this, ControlId, Track]()
	{
		OnEndOfTrack.Broadcast(this, ControlId, Track);
	});
}

int32 UCHORSubsystem::GetNewControlId()
{
	return GetNextControlId();
}

void UCHORSubsystem::ControlRecorder(AActor *ControlID, const bool Record, FChorusCuePoint &CuePoint)
{
    CuePoint = PlayPauseRecorder(ControlID, Record, -1);
}

void UCHORSubsystem::StartRecording(AActor *ControlID, int32 Track, FChorusCuePoint &CuePoint)
{
	CuePoint = PlayPauseRecorder(ControlID, true, Track);
}

void UCHORSubsystem::StopRecording(AActor *ControlID, FChorusCuePoint &CuePoint)
{
	CuePoint = PlayPauseRecorder(ControlID, false, -1);
}

void UCHORSubsystem::PlayFromCuePointForDuration(AActor *ControlID, FChorusCuePoint Start, float Duration, float Speed, bool Loop, bool Play)
{
	FChorusCuePoint End;
	End.SetTimestamp(Start.Timestamp(this) + Duration);
	End.Track = Start.Track;
	End.Index = -1;
	
	ControlPlayer(ControlID, Start, End, Speed, Loop, Play);
}

void UCHORSubsystem::ControlPlayer(AActor *ControlID
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

void UCHORSubsystem::GetRecorderStatus(AActor *ControlID, bool &bIsRecording, int32 &Track)
{
	if (ControlIds.Contains(ControlID))
	{
		FControlStruct ControlStruct = ControlIds[ControlID];
		bIsRecording = ControlStruct.bIsRecording;
		Track = ControlStruct.Track;
	}
}

void UCHORSubsystem::GetPlayerStatus(AActor *ControlID
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

void UCHORSubsystem::SetPlayerLooping(AActor* controlID, bool loop)
{
	
	if (ControlIds.Contains(controlID))
	{
		ControlIds[controlID].bLoop = loop;
	}
}

void UCHORSubsystem::ResumePlayer(AActor* ControlID)
{
	
	if (ControlIds.Contains(ControlID))
	{
		ControlIds[ControlID].bPlay = true;
	}
}

void UCHORSubsystem::PausePlayer(AActor* ControlID)
{
	
	if (ControlIds.Contains(ControlID))
	{
		ControlIds[ControlID].bPlay = false;
	}
}

void UCHORSubsystem::SetPlayerSpeed(AActor* ControlID, float Speed)
{
	if (ControlIds.Contains(ControlID))
	{
		ControlIds[ControlID].Speed = Speed;
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

void UCHORSubsystem::GetNewTrack(int &NewTrack)
{
	TArray<int> OldTracks;
	ListTracks(OldTracks);
	if (OldTracks.Num() == 0)
		NewTrack = 1;
	else
	{
		OldTracks.Sort();
		NewTrack = OldTracks.Last() + 1;
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


