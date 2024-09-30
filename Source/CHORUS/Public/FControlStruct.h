#pragma once

#include "CoreMinimal.h"
#include "FChorusCuePoint.h"

#include "FControlStruct.generated.h"

USTRUCT()
struct FControlStruct
{
	GENERATED_BODY()
public :
	
	FControlStruct();

	UPROPERTY()
	bool bIsRecording;

	UPROPERTY()
	int32 Track;

	UPROPERTY()
	FChorusCuePoint Start;

	UPROPERTY()
	FChorusCuePoint End;

	UPROPERTY()
	float Speed;

	UPROPERTY()
	bool bLoop;

	UPROPERTY()
	bool bPlay;

	UPROPERTY()
	float Position;
};
