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
	bool Dirty = false;
	
	UPROPERTY()
	bool bIsRecording = false;

	UPROPERTY()
	int32 Track = 0;

	UPROPERTY()
	FChorusCuePoint Start;

	UPROPERTY()
	FChorusCuePoint End;

	UPROPERTY()
	float Speed = 1.0f;

	UPROPERTY()
	bool bLoop = false;

	UPROPERTY()
	bool bPlay = true;

	UPROPERTY()
	float Position = 0.f;

	UPROPERTY()
	bool bPalindrome = false;
};
