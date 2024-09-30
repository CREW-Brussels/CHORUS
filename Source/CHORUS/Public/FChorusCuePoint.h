#pragma once

#include "CoreMinimal.h"

#include "FchorusCuePoint.generated.h"

USTRUCT(BlueprintType)
struct FChorusCuePoint
{
    GENERATED_BODY()
    
    FChorusCuePoint();
	FChorusCuePoint(int Fps, int Track, int Index, float Timestamp);

	~FChorusCuePoint();
	
	bool operator==(const FChorusCuePoint& rhs) const { return Track == rhs.Track && Index == rhs.Index; }

	bool operator<(const FChorusCuePoint& rhs) const { return Index < rhs.Index; }

	bool operator>(const FChorusCuePoint& rhs) const { return Index > rhs.Index; }
	
    UPROPERTY(BlueprintReadOnly)
	int Fps;
	
    UPROPERTY(BlueprintReadOnly)
    int Track;
    
    UPROPERTY(BlueprintReadOnly)
    int Index;

    UPROPERTY(BlueprintReadOnly)
    float Timestamp;
};
