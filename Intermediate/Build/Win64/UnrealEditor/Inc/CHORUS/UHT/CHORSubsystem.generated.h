// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CHORSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChorusCuePoint;
#ifdef CHORUS_CHORSubsystem_generated_h
#error "CHORSubsystem.generated.h already included, missing '#pragma once' in CHORSubsystem.h"
#endif
#define CHORUS_CHORSubsystem_generated_h

#define FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_16_SPARSE_DATA
#define FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetClipLength); \
	DECLARE_FUNCTION(execLoadClip); \
	DECLARE_FUNCTION(execListClips); \
	DECLARE_FUNCTION(execDeleteClip); \
	DECLARE_FUNCTION(execArchiveClip); \
	DECLARE_FUNCTION(execAddCuePoint); \
	DECLARE_FUNCTION(execDeleteCuePoint); \
	DECLARE_FUNCTION(execListCuePoints); \
	DECLARE_FUNCTION(execListTracks); \
	DECLARE_FUNCTION(execDeleteTrack); \
	DECLARE_FUNCTION(execGetTrackStatus); \
	DECLARE_FUNCTION(execGetPlayerStatus); \
	DECLARE_FUNCTION(execGetRecorderStatus); \
	DECLARE_FUNCTION(execControlPlayer); \
	DECLARE_FUNCTION(execControlRecorder); \
	DECLARE_FUNCTION(execGetNewControlId);


#define FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_16_ACCESSORS
#define FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCHORSubsystem(); \
	friend struct Z_Construct_UClass_UCHORSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCHORSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CHORUS"), NO_API) \
	DECLARE_SERIALIZER(UCHORSubsystem)


#define FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCHORSubsystem(UCHORSubsystem&&); \
	NO_API UCHORSubsystem(const UCHORSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCHORSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCHORSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCHORSubsystem) \
	NO_API virtual ~UCHORSubsystem();


#define FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_13_PROLOG
#define FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_16_SPARSE_DATA \
	FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_16_ACCESSORS \
	FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHORUS_API UClass* StaticClass<class UCHORSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
