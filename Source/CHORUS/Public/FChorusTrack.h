#pragma once

#include "FChorusCuePoint.h"

#include "FChorusTrack.generated.h"

USTRUCT()
struct FChorusTrack
{
	GENERATED_BODY()

public:
	FChorusTrack();
	
	TArray<TArray<FTransform>> Poses;
	TArray<FChorusCuePoint> CuePoints;
	int32 Fps;
	float PrevFrameTime;
	void SetFps(int32 Fps);
};
