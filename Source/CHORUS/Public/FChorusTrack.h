#pragma once

#include "FChorusCuePoint.h"

#include "FChorusTrack.generated.h"

USTRUCT()
struct FChorusFrame
{
	GENERATED_BODY()
public:
	UPROPERTY()
	TArray<FTransform> pose;
	UPROPERTY()
	double time;
};

USTRUCT()
struct FChorusTrack
{
	GENERATED_BODY()

public:
	FChorusTrack();
	
	UPROPERTY()
	TArray<FChorusFrame> Frames;
	UPROPERTY()
	TArray<FChorusCuePoint> CuePoints;
	UPROPERTY()
	int32 Fps;
	void SetFps(int32 Fps);
};
