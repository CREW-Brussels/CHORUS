// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "AnimGraphNode_Base.h"
#include "UObject/ObjectMacros.h"
#include "CHORPlay.h" // Runtime module is called CHORPlay, editor CHORUSPlay
#include "CHORUSPlay.generated.h"


UCLASS()
class CHORUSEDITOR_API UCHORUSPlay : public UAnimGraphNode_Base
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = Settings)
	FCHORPlay Node;	
	

	UCHORUSPlay(const FObjectInitializer& ObjectInitializer);

};
