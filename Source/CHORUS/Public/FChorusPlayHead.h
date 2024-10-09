#pragma once

#include "FChorusPlayHead.generated.h"

USTRUCT()
struct FChorusPlayHead
{
	GENERATED_BODY()
	
	FChorusPlayHead();

	UPROPERTY()
	int SeekPoint;
	
	UPROPERTY()
	double StartTime;

	UPROPERTY()
	double EndTime;
	
	UPROPERTY()
	int32 StartFrame;

	UPROPERTY()
	int32 EndFrame;

	UPROPERTY()
	int32 FrameCount;

	UPROPERTY()
	int32 Track;

	UPROPERTY()
	float Length;

	UPROPERTY()
	float Timestamp;
};
