// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CHORSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHORUS_CHORSubsystem_generated_h
#error "CHORSubsystem.generated.h already included, missing '#pragma once' in CHORSubsystem.h"
#endif
#define CHORUS_CHORSubsystem_generated_h

#define FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_18_SPARSE_DATA
#define FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetBuffer);


#define FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_18_ACCESSORS
#define FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCHORSubsystem(); \
	friend struct Z_Construct_UClass_UCHORSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCHORSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CHORUS"), NO_API) \
	DECLARE_SERIALIZER(UCHORSubsystem)


#define FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCHORSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCHORSubsystem(UCHORSubsystem&&); \
	NO_API UCHORSubsystem(const UCHORSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCHORSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCHORSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCHORSubsystem) \
	NO_API virtual ~UCHORSubsystem();


#define FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_15_PROLOG
#define FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_18_SPARSE_DATA \
	FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_18_ACCESSORS \
	FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHORUS_API UClass* StaticClass<class UCHORSubsystem>();

#define FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCHORTrack_Statics; \
	CHORUS_API static class UScriptStruct* StaticStruct();


template<> CHORUS_API UScriptStruct* StaticStruct<struct FCHORTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
