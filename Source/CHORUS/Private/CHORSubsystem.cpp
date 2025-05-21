// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CHORSubsystem.h"

#include "Kismet/GameplayStatics.h"

int UCHORUSSubsystem::GetNextOwner()
{
    return ++NextOwner;
}

void UCHORUSSubsystem::RegisterCuePoint(FChorusCuePoint &CuePoint)
{
    if (!Tracks.Contains(CuePoint.Track))
        Tracks.Add(CuePoint.Track);
    CuePoint.Index = Tracks[CuePoint.Track].Frames.Num() - 1;
	CuePoint.Index = CuePoint.Index < 0 ? 0 : CuePoint.Index;
    Tracks[CuePoint.Track].CuePoints.Add(CuePoint);
}

FChorusCuePoint UCHORUSSubsystem::PlayPauseRecorder(const AActor *Owner, const bool Recording, int32 Track)
{
    FChorusCuePoint CuePoint;

    if (!Owners.Contains(Owner))
    {
        UE_LOG(LogTemp, Warning, TEXT("Owner is not valid"))
        CuePoint.Track = 0;
        CuePoint.Index = 0;
        //CuePoint.Timestamp = 0;
        return CuePoint;
    }
	
	if (Track == 0)
		GetNewTrack(Track);
	if (Track != -1)
		Owners[Owner].Track = Track;
    CuePoint.Track = Owners[Owner].Track;
    Owners[Owner].bIsRecording = Recording;
	
    RegisterCuePoint(CuePoint);
    return CuePoint;
}

void UCHORUSSubsystem::RegisterOwner(AActor* Owner, const FControlStruct &NewControl)
{
    if (Owners.Contains(Owner))
    {
        UE_LOG(LogTemp, Error, TEXT("Owner not available."));
        return;
    }
    
    Owners.Add(Owner, NewControl);
    
    return;
}

void UCHORUSSubsystem::RegisterPlayer(AActor *Owner)
{
    FControlStruct NewControl;

    RegisterOwner(Owner, NewControl);
}

void UCHORUSSubsystem::UnregisterPlayer(AActor *Owner)
{
    if (!UnregisterOwner(Owner))
        UE_LOG(LogTemp, Warning, TEXT("UnregisterPlayerr(): Owner not found ?!"))
}

bool UCHORUSSubsystem::UnregisterOwner(AActor *Owner)
{
    if (!Owners.IsEmpty() && Owners.Contains(Owner))
    {
        Owners.Remove(Owner);
        return true;
    }
    return false;
}

void UCHORUSSubsystem::UnregisterRecorder(AActor *Owner)
{
    if (!UnregisterOwner(Owner))
        UE_LOG(LogTemp, Warning, TEXT("UnregisterRecorder(): Owner not found ?!"))
}

void UCHORUSSubsystem::RegisterRecorder(AActor* Owner)
{
    FControlStruct NewControl;
	
    RegisterOwner(Owner, NewControl);
}

void UCHORUSSubsystem::RecordFrame(int32 Track, const FChorusFrame& frame)
{
	Tracks[Track].Frames.Push(frame);
	Tracks[Track].Frames.Last().FrameReady = true;
}

UCHORUSSubsystem::UCHORUSSubsystem()
{
    NextOwner = 0;
}

void UCHORUSSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    NextOwner = 0;
    
	Super::Initialize(Collection);
}

void UCHORUSSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void UCHORUSSubsystem::GetTrackStatus(const int Track, bool& IsRecording)
{
	IsRecording = false;
	
	if (!Tracks.Contains(Track))
	{
		IsRecording = false;
		return;
	}
	
	TArray<AActor*> ControlKeys;
	Owners.GetKeys(ControlKeys);
	for (int i = 0; i < ControlKeys.Num(); i++)
	{
		if (Owners[ControlKeys[i]].Track == Track)
		{
			IsRecording = Owners[ControlKeys[i]].bIsRecording;
			return;
		}
	}
}

void UCHORUSSubsystem::TriggerStartOfTrackEvent(AActor* Owner, const int& Track)
{
	AsyncTask(ENamedThreads::GameThread, [this, Owner, Track]()
	{
		OnStartOfTrack.Broadcast(this, Owner, Track);
	});
}

void UCHORUSSubsystem::TriggerOnLoopEvent(AActor* Owner, int Track, bool Forward)
{
	AsyncTask(ENamedThreads::GameThread, [this, Owner, Track, Forward]()
{
	OnLoop.Broadcast(this, Owner, Track, Forward);
});
}

void UCHORUSSubsystem::TriggerEndOfTrackEvent(AActor* Owner, const int& Track)
{
	AsyncTask(ENamedThreads::GameThread, [this, Owner, Track]()
	{
		OnEndOfTrack.Broadcast(this, Owner, Track);
	});
}

int32 UCHORUSSubsystem::GetNewOwner()
{
	return GetNextOwner();
}

void UCHORUSSubsystem::ControlRecorder(AActor *Owner, const bool Record, FChorusCuePoint &CuePoint)
{
    CuePoint = PlayPauseRecorder(Owner, Record, -1);
}

void UCHORUSSubsystem::StartRecording(AActor *Owner, int32 Track, FChorusCuePoint &CuePoint)
{
	CuePoint = PlayPauseRecorder(Owner, true, Track);
}

void UCHORUSSubsystem::StopRecording(AActor *Owner, FChorusCuePoint &CuePoint)
{
	CuePoint = PlayPauseRecorder(Owner, false, -1);
}

void UCHORUSSubsystem::PlayFromCuePointForDuration(AActor *Owner, FChorusCuePoint Start, float Duration, float Speed, bool Loop, bool Palindrome, bool Play)
{
	FChorusCuePoint End;
	End.SetTimestamp(Start.Timestamp(this) + Duration);
	End.Track = Start.Track;
	End.Index = -1;
	
	ControlPlayer(Owner, Start, End, Speed, Loop, Palindrome, Play);
}

void UCHORUSSubsystem::ControlPlayer(AActor* Owner
                                     , FChorusCuePoint Start
                                     , FChorusCuePoint End
                                     , float Speed
                                     , bool Loop
                                     , bool Palindrome
                                     , bool Play)
{
	if (Owners.Contains(Owner))
	{
		FControlStruct *ControlStruct = &Owners[Owner];
		ControlStruct->Speed = Speed;
		ControlStruct->bLoop = Loop;
		ControlStruct->bPlay = Play;
		ControlStruct->bPalindrome = Palindrome;
		if (ControlStruct->Start != Start)
		{
			ControlStruct->Start = Start;
			ControlStruct->Dirty = true;
		}
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

void UCHORUSSubsystem::GetRecorderStatus(AActor *Owner, bool &bIsRecording, int32 &Track)
{
	if (Owners.Contains(Owner))
	{
		FControlStruct ControlStruct = Owners[Owner];
		bIsRecording = ControlStruct.bIsRecording;
		Track = ControlStruct.Track;
	}
}

void UCHORUSSubsystem::GetPlayerStatus(AActor *Owner
                                             , FChorusCuePoint& Start
                                             , FChorusCuePoint& End
                                             , bool& bIsPlaying
                                             , bool& bIsLoop
                                             , bool& bIsPalindrome
                                             , float& Speed)
{
	if (Owners.Contains(Owner))
	{
		FControlStruct ControlStruct = Owners[Owner];

		Start = ControlStruct.Start;
		End = ControlStruct.End;
		bIsPlaying = ControlStruct.bPlay;
		bIsLoop = ControlStruct.bLoop;
		Speed = ControlStruct.Speed;
		bIsPalindrome = ControlStruct.bPalindrome;
	}
}

void UCHORUSSubsystem::SetPlayerLooping(AActor* Owner, bool loop)
{
	
	if (Owners.Contains(Owner))
	{
		Owners[Owner].bLoop = loop;
	}
}

void UCHORUSSubsystem::ResumePlayer(AActor* Owner)
{
	
	if (Owners.Contains(Owner))
	{
		Owners[Owner].bPlay = true;
	}
}

void UCHORUSSubsystem::PausePlayer(AActor* Owner)
{
	
	if (Owners.Contains(Owner))
	{
		Owners[Owner].bPlay = false;
	}
}

void UCHORUSSubsystem::SetPlayerSpeed(AActor* Owner, float Speed)
{
	if (Owners.Contains(Owner))
	{
		Owners[Owner].Speed = Speed;
	}
}

void UCHORUSSubsystem::DeleteTrack(const int Track)
{
	if (Tracks.Contains(Track))
	{
		Tracks[Track].Frames.Empty();
		Tracks[Track].CuePoints.Empty();
	}
}

void UCHORUSSubsystem::GetNewTrack(int &NewTrack)
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

void UCHORUSSubsystem::ListTracks(TArray<int>& TracksOut)
{
	Tracks.GetKeys(TracksOut);
}

void UCHORUSSubsystem::ListCuePoints(const int Track, TArray<FChorusCuePoint>& CuePoints)
{
	if (Tracks.Contains(Track))
	{
		CuePoints = Tracks[Track].CuePoints;
	}
}

void UCHORUSSubsystem::DeleteCuePoint(FChorusCuePoint CuePoint)
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

void UCHORUSSubsystem::AddCuePoint(const int Track, FChorusCuePoint &CuePoint)
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

void UCHORUSSubsystem::ArchiveClip(FString Name, FChorusCuePoint Start, FChorusCuePoint End)
{
}

void UCHORUSSubsystem::DeleteClip(FString Name)
{
}

void UCHORUSSubsystem::ListClips(TArray<FString>& Names)
{
}

void UCHORUSSubsystem::LoadClip(FString Name, int& Track, FChorusCuePoint& Start, FChorusCuePoint& End)
{
}

void UCHORUSSubsystem::GetClipLength( FChorusCuePoint Start,  FChorusCuePoint End, float& Length)
{
	if (Start.Track != End.Track)
	{
		UE_LOG(LogTemp, Warning, TEXT("GetChorusClipLength: CHORUS cannot create clip from CuePoints on different tracks"));
		Length = 0;
	}
	else
		Length = abs(End.Timestamp(this) - Start.Timestamp(this));
}


