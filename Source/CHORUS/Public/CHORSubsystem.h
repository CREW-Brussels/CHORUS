// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "CHORPlay.h"
#include "Subsystems/EngineSubsystem.h"
#include "FChorusCuePoint.h"
#include "FControlStruct.h"
#include "FChorusTrack.h"

#include "CHORSubsystem.generated.h"

// Define the dynamic multicast delegate with parameters
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnEndOfTrackEvent, UCHORUSSubsystem*, Subsystem, AActor*, Owner, int, Track);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnStartOfTrackEvent, UCHORUSSubsystem*, Subsystem, AActor*, Owner, int, Track);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnLoopEvent, UCHORUSSubsystem*, Subsystem, AActor*, Owner, int, Track, bool, Forward);

UCLASS()
class CHORUS_API UCHORUSSubsystem : public UGameInstanceSubsystem//UEngineSubsystem
{
	GENERATED_BODY()

public:
	UCHORUSSubsystem();
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	void RegisterPlayer(AActor* Owner);
	void RegisterOwner(AActor* Owner, const FControlStruct& NewControl);
	void RegisterRecorder(AActor* Owner);
	int32 GetNextOwner();
	void UnregisterPlayer(AActor* Owner);
	void RecordFrame(int32 Track, const FChorusFrame &frame);
	void UnregisterRecorder(AActor* Owner);
	void RegisterCuePoint(FChorusCuePoint& CuePoint);
	FChorusCuePoint PlayPauseRecorder(const AActor* Owner, bool Recording, int32 Track = -1);
	void TriggerStartOfTrackEvent(AActor* Owner, const int& Track);
	void TriggerOnLoopEvent(AActor* Actor, int32 INT32, bool bCond);

	UPROPERTY()
	TMap<AActor*, FControlStruct> Owners;

	UPROPERTY()
	TMap<int32, FChorusTrack> Tracks;

	// Multicast delegate for the EndOfTrack event
	UPROPERTY(BlueprintAssignable, Category = "Chorus")
	FOnEndOfTrackEvent OnEndOfTrack;
	UPROPERTY(BlueprintAssignable, Category = "Chorus")
	FOnStartOfTrackEvent OnStartOfTrack;
	UPROPERTY(BlueprintAssignable, Category = "Chorus")
	FOnLoopEvent OnLoop;

	// Method to trigger the EndOfTrack event
	UFUNCTION(BlueprintCallable, Category = "Chorus")
	void TriggerEndOfTrackEvent(AActor* Owner, const int& Track);
	
	/**
    * Returns the next Unused ChorusOwner
    * It will always return one over the highest existing ID even if it is not used anymore.
    */
	UFUNCTION(BlueprintPure, Category = "Chorus")
	int32 GetNewOwner();
	
	/**
	* Start or stop the recording on the ChorusRecorder animation node with a specific Owner
	* Return a CuePoint
	* @Param Owner the ChorusOwner that refers to this specific ChorusRecorder
	* @Param a CuePoint to this event
    */
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void ControlRecorder(AActor* Owner
	                     , bool Record
	                     , UPARAM(DisplayName = "Cue Point") FChorusCuePoint& CuePoint);
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void StartRecording(AActor* Owner, int32 Track, FChorusCuePoint& CuePoint);

	UFUNCTION(BlueprintCallable, Category="Chorus")
	void StopRecording(AActor* Owner, FChorusCuePoint& CuePoint);

	/**
	 * Control the parameters of the ChorusPlayer animation node with a specific Owner
	 * @param Owner the ChorusOwner that refers to this specific ChorusPlayer
	 * @param Start CuePoint marking the beginning of the clip
	 * @param End CuePoint marking the end of the clip
	 * @param Speed The play speed
	 * @param Loop if true the clip will loop
	 * @param Palindrome
	 * @param Play
	 */
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void ControlPlayer(AActor* Owner
	                   , FChorusCuePoint Start
	                   , FChorusCuePoint End
	                   , float Speed = 1.0f
	                   , bool Loop = false
	                   , bool Palindrome = false
	                   , bool Play = true);

	/**
	 * 
	 * @param Owner
	 * @param bIsRecording 
	 * @param Track 
	 */
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void GetRecorderStatus(AActor* Owner
	                       , UPARAM(DisplayName = "Is Recording") bool& bIsRecording
	                       , UPARAM(DisplayName = "Track") int32& Track);

	/**
	 * 
	 * @param Owner
	 * @param Start 
	 * @param End 
	 * @param bIsPlaying 
	 * @param bIsLoop
	 * @param bIsPalindrome 
	 * @param Speed 
	 */
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void GetPlayerStatus(AActor* Owner
	                     , UPARAM(DisplayName = "Start") FChorusCuePoint& Start
	                     , UPARAM(DisplayName = "End") FChorusCuePoint& End
	                     , UPARAM(DisplayName = "Is Playing") bool& bIsPlaying
	                     , UPARAM(DisplayName = "isLoop") bool& bIsLoop
	                     , UPARAM(DisplayName = "isPalindrome") bool& bIsPalindrome
	                     , UPARAM(DisplayName = "Speed") float& Speed);
	

	UFUNCTION(BlueprintCallable, Category="Chorus")
	void SetPlayerLooping(AActor* Owner, bool loop = true);
	
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void ResumePlayer(AActor *Owner);

	UFUNCTION(BlueprintCallable, Category="Chorus")
	void PausePlayer(AActor *Owner);

	UFUNCTION(BlueprintCallable, Category="Chorus")
	void SetPlayerSpeed(AActor *Owner, float Speed);

	
	/**
	 * Plays from a specific CuePoint for a given duration.
	 * 
	 * @param Owner the Owner that refers to this specific ChorusPlayer
	 * @param Start CuePoint marking the beginning of the play
	 * @param Duration Duration to play for in seconds
	 * @param Speed The play speed
	 * @param Loop if true the clip will loop
	 * @param Palindrome
	 * @param Play if true, starts playing, otherwise pauses
	 */
	UFUNCTION(BlueprintCallable, Category = "Chorus")
	void PlayFromCuePointForDuration(AActor* Owner, FChorusCuePoint Start, float Duration, float Speed = 1.0f, bool Loop = false, bool Palindrome = false, bool Play = true);
	
	/**
	 * Determine if a Track is currently recording
	 * @param Track 
	 * @param IsRecording 
	 */
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void GetTrackStatus(int Track, UPARAM(DisplayName = "IsRecording") bool &IsRecording);

	/**
	 * Clear all data on a track;
	 * @param Track 
	 */
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void DeleteTrack(int Track);
	
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void GetNewTrack(int& NewTrack);

	/**
	 * Returns all existing tracks
	 * @param TracksOut
	 * @param Tracks 
	 */
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void ListTracks(UPARAM(DisplayName = "Tracks") TArray<int> &TracksOut);

	// Cue Points

	/**
	 * Get all CuePoints on a track
	 * @param Track 
	 * @param CuePoints 
	 */
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void ListCuePoints(int Track, UPARAM(DisplayName = "CuePoints") TArray<FChorusCuePoint> &CuePoints);

	/**
	 * Delete a Cuepoint
	 * @param CuePoint 
	 */
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void DeleteCuePoint(FChorusCuePoint CuePoint);

	/**
	 * Create a CuePoint on Track
	 * @param Track 
	 * @param CuePoint 
	 */
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void AddCuePoint(int Track, UPARAM(DisplayName = "CuePoint") FChorusCuePoint &CuePoint);

	// clips
	
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void ArchiveClip(FString Name, FChorusCuePoint Start, FChorusCuePoint End);

	UFUNCTION(BlueprintCallable, Category="Chorus")
	void DeleteClip(FString Name);

	UFUNCTION(BlueprintCallable, Category="Chorus")
	void ListClips(TArray<FString> &Names);

	UFUNCTION(BlueprintCallable, Category="Chorus")
	void LoadClip(FString Name, UPARAM(DisplayName = "Track") int &Track, UPARAM(DisplayName = "Start") FChorusCuePoint &Start, UPARAM(DisplayName = "End") FChorusCuePoint &End);

	/**
	 * Return the length of a Chorus clip between two CuePoints.
	 * If the CuePoints are on a different track the length is always 0.
	 * 
	 * @param Start a ChorusCuePoint
	 * @param End a ChorusCuePoint
	 * @param Length the length of the clip in secconds.
	 */
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void GetClipLength(const FChorusCuePoint Start, const FChorusCuePoint End, UPARAM(DisplayName = "Length") float &Length);

private:
	bool UnregisterOwner(AActor* Owner);
	UPROPERTY()
    int32 NextOwner;
};

