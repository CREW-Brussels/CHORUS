// Fill out your copyright notice in the Description page of Project Settings.


#include "CHORUSRec.h"

#include <functional>

#include "AnimationGraphSchema.h"
#include "Animation/AnimationSettings.h"
#include "Kismet2/CompilerResultsLog.h"
#include "ScopedTransaction.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "DetailLayoutBuilder.h"
#include "Logging/StructuredLog.h"

#define LOCTEXT_NAMESPACE "A3Nodes"

FLinearColor UCHORUSRec::GetNodeBodyTintColor() const { return Super::GetNodeBodyTintColor(); }

FString UCHORUSRec::GetDesc() { return "Record annimation to a Chorus track"; }

FText UCHORUSRec::GetNodeTitle(ENodeTitleType::Type TitleType) const { return FText::FromString("Chorus Recorder"); }

#undef LOCTEXT_NAMESPACE
