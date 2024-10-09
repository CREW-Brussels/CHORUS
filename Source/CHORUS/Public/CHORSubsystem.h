// // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "FChorusCuePoint.h"
#include "FControlStruct.h"
#include "FChorusTrack.h"

#include "CHORSubsystem.generated.h"

UCLASS()
class CHORUS_API UCHORSubsystem : public UGameInstanceSubsystem//UEngineSubsystem
{
	GENERATED_BODY()

public:
	UCHORSubsystem();
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	int32 RegisterPlayer(int32 ControlId, const FChorusCuePoint &Start, const FChorusCuePoint &End, float Speed, bool bLoop, bool bPlay);
	int32 RegisterControlId(int32 ControlId, const FControlStruct &NewControl);
	int32 RegisterRecorder(int32 Track, bool bRecord, int32 ControlId);
	int32 GetNextControlId();
	void UnregisterPlayer(int32 ControlId);
	void RecordFrame(int32 Track, const FChorusFrame &frame);
	void UnregisterRecorder(int32 ControlId);
	void RegisterCuePoint(FChorusCuePoint& CuePoint);
	FChorusCuePoint PlayPauseRecorder(int32 ControlId, bool Recording);

	UPROPERTY()
	TMap<int32, FControlStruct> ControlIds;

	UPROPERTY()
	TMap<int32, FChorusTrack> Tracks;
	
	/**
    * Returns the next Unused ChorusControlId
    * It will always return one over the highest existing ID even if it is not used anymore.
    */
	UFUNCTION(BlueprintPure, Category = "Chorus")
	int32 GetNewControlId();
	
	/**
	* Start or stop the recording on the ChorusRecorder animation node with a specific ControlId
	* Return a CuePoint
	* @Param ControlID the ChorusControlId that refers to this specific ChorusRecorder
	* @Param a CuePoint to this event
    */
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void ControlRecorder(int32 ControlID
	                                  , bool Record
	                                  , UPARAM(DisplayName = "Cue Point") FChorusCuePoint &CuePoint);

	/**
	 * Control the parameters of the ChorusPlayer animation node with a specific ControlID
	 * @param ControlID the ChorusControlId that refers to this specific ChorusPlayer
	 * @param Start CuePoint marking the beginning of the clip
	 * @param End CuePoint marking the end of the clip
	 * @param Speed The play speed
	 * @param Loop if true the clip will loop
	 */
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void ControlPlayer(int32 ControlID
		, FChorusCuePoint Start
		, FChorusCuePoint End
		, float Speed
		, bool Loop
		, bool Play);

	/**
	 * 
	 * @param ControlID 
	 * @param bIsRecording 
	 * @param Track 
	 */
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void GetRecorderStatus(int32 ControlID
		, UPARAM(DisplayName = "Is Recording") bool &bIsRecording
		, UPARAM(DisplayName = "Track") int32 &Track);

	/**
	 * 
	 * @param ControlID 
	 * @param Start 
	 * @param End 
	 * @param bIsPlaying 
	 * @param bIsLoop 
	 * @param Speed 
	 */
	UFUNCTION(BlueprintCallable, Category="Chorus")
	void GetPlayerStatus(int32 ControlID
		, UPARAM(DisplayName = "Start") FChorusCuePoint &Start
		, UPARAM(DisplayName = "End") FChorusCuePoint &End
		, UPARAM(DisplayName = "Is Playing") bool &bIsPlaying
		, UPARAM(DisplayName = "isLoop") bool &bIsLoop
		, UPARAM(DisplayName = "Speed") float &Speed);
	
	 
	/**
	 * Plays from a specific CuePoint for a given duration.
	 * 
	 * @param ControlID the ChorusControlId that refers to this specific ChorusPlayer
	 * @param Start CuePoint marking the beginning of the play
	 * @param Duration Duration to play for in seconds
	 * @param Speed The play speed
	 * @param Loop if true the clip will loop
	 * @param Play if true, starts playing, otherwise pauses
	 */
	UFUNCTION(BlueprintCallable, Category = "Chorus")
	void PlayFromCuePointForDuration(int32 ControlID, FChorusCuePoint Start, float Duration, float Speed, bool Loop, bool Play);
	
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

	/**
	 * Returns all existing tracks
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
	
	bool UnregisterControlId(int32 ControlId);
	UPROPERTY()
    int32 NextControlId;
};

