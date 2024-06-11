// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "AnimGraphNode_Base.h"
#include "UObject/ObjectMacros.h"
#include "CHORRec.h"
#include "CHORUSRec.generated.h"


UCLASS()
class CHORUSEDITOR_API UCHORUSRec : public UAnimGraphNode_Base
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = Settings)
	FCHORRec Node;	

	UCHORUSRec(const FObjectInitializer& ObjectInitializer);

};
