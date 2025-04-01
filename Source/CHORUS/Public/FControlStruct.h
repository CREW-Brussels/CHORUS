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
	bool Dirty;
	
	UPROPERTY()
	bool bIsRecording;

	UPROPERTY()
	int32 Track;

	UPROPERTY()
	FChorusCuePoint Start;

	UPROPERTY()
	FChorusCuePoint End;

	UPROPERTY()
	float Speed = 1.0f;

	UPROPERTY()
	bool bLoop;

	UPROPERTY()
	bool bPlay = true;

	UPROPERTY()
	float Position;

	UPROPERTY()
	bool bPalindrome = false;;
};
