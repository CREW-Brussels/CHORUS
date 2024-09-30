// Fill out your copyright notice in the Description page of Project Settings.


#include "CHORUSPlay.h"

#include "Animation/AnimationSettings.h"
#include "Kismet2/CompilerResultsLog.h"
#include "ScopedTransaction.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "DetailLayoutBuilder.h"

#define LOCTEXT_NAMESPACE "A3Nodes"

UCHORUSPlay::UCHORUSPlay(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer){}

FString UCHORUSPlay::GetDesc() { return "Replay a Chorus Clip"; }

FText UCHORUSPlay::GetNodeTitle(ENodeTitleType::Type TitleType) const { return FText::FromString("Chorus Player")   ;}

#undef LOCTEXT_NAMESPACE
