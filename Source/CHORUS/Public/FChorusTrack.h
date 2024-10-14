#pragma once

#include "FChorusCuePoint.h"

#include "FChorusTrack.generated.h"

USTRUCT()
struct FChorusFrame
{
	GENERATED_BODY()
public:
	bool FrameReady;
	TArray<FTransform> pose;
	double time;
};

USTRUCT()
struct FChorusTrack
{
	GENERATED_BODY()

public:
	FChorusTrack();
	
	TArray<FChorusFrame> Frames;
	TArray<FChorusCuePoint> CuePoints;
	int32 Fps;
	void SetFps(int32 Fps);
};
