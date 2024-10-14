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
	int32 Track;

	UPROPERTY()
	double Length;

	UPROPERTY()
	double Timestamp;
};
