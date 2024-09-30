// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CHORUS/Public/CHORSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "CHORUS/Public/FChorusCuePoint.h"
#include "CHORUS/Public/FChorusTrack.h"
#include "CHORUS/Public/FControlStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCHORSubsystem() {}
// Cross Module References
	CHORUS_API UClass* Z_Construct_UClass_UCHORSubsystem();
	CHORUS_API UClass* Z_Construct_UClass_UCHORSubsystem_NoRegister();
	CHORUS_API UScriptStruct* Z_Construct_UScriptStruct_FChorusCuePoint();
	CHORUS_API UScriptStruct* Z_Construct_UScriptStruct_FChorusTrack();
	CHORUS_API UScriptStruct* Z_Construct_UScriptStruct_FControlStruct();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_CHORUS();
// End Cross Module References
	DEFINE_FUNCTION(UCHORSubsystem::execGetClipLength)
	{
		P_GET_STRUCT(FChorusCuePoint,Z_Param_Start);
		P_GET_STRUCT(FChorusCuePoint,Z_Param_End);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Length);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetClipLength(Z_Param_Start,Z_Param_End,Z_Param_Out_Length);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCHORSubsystem::execLoadClip)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Track);
		P_GET_STRUCT_REF(FChorusCuePoint,Z_Param_Out_Start);
		P_GET_STRUCT_REF(FChorusCuePoint,Z_Param_Out_End);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadClip(Z_Param_Name,Z_Param_Out_Track,Z_Param_Out_Start,Z_Param_Out_End);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCHORSubsystem::execListClips)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListClips(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCHORSubsystem::execDeleteClip)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteClip(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCHORSubsystem::execArchiveClip)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_STRUCT(FChorusCuePoint,Z_Param_Start);
		P_GET_STRUCT(FChorusCuePoint,Z_Param_End);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ArchiveClip(Z_Param_Name,Z_Param_Start,Z_Param_End);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCHORSubsystem::execAddCuePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Track);
		P_GET_STRUCT_REF(FChorusCuePoint,Z_Param_Out_CuePoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCuePoint(Z_Param_Track,Z_Param_Out_CuePoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCHORSubsystem::execDeleteCuePoint)
	{
		P_GET_STRUCT(FChorusCuePoint,Z_Param_CuePoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteCuePoint(Z_Param_CuePoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCHORSubsystem::execListCuePoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Track);
		P_GET_TARRAY_REF(FChorusCuePoint,Z_Param_Out_CuePoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListCuePoints(Z_Param_Track,Z_Param_Out_CuePoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCHORSubsystem::execListTracks)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_TracksOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListTracks(Z_Param_Out_TracksOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCHORSubsystem::execDeleteTrack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteTrack(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCHORSubsystem::execGetTrackStatus)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Track);
		P_GET_UBOOL_REF(Z_Param_Out_IsRecording);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTrackStatus(Z_Param_Track,Z_Param_Out_IsRecording);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCHORSubsystem::execGetPlayerStatus)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControlID);
		P_GET_STRUCT_REF(FChorusCuePoint,Z_Param_Out_Start);
		P_GET_STRUCT_REF(FChorusCuePoint,Z_Param_Out_End);
		P_GET_UBOOL_REF(Z_Param_Out_bIsPlaying);
		P_GET_UBOOL_REF(Z_Param_Out_bIsLoop);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerStatus(Z_Param_ControlID,Z_Param_Out_Start,Z_Param_Out_End,Z_Param_Out_bIsPlaying,Z_Param_Out_bIsLoop,Z_Param_Out_Speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCHORSubsystem::execGetRecorderStatus)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControlID);
		P_GET_UBOOL_REF(Z_Param_Out_bIsRecording);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRecorderStatus(Z_Param_ControlID,Z_Param_Out_bIsRecording,Z_Param_Out_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCHORSubsystem::execControlPlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControlID);
		P_GET_STRUCT(FChorusCuePoint,Z_Param_Start);
		P_GET_STRUCT(FChorusCuePoint,Z_Param_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_GET_UBOOL(Z_Param_Loop);
		P_GET_UBOOL(Z_Param_Play);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ControlPlayer(Z_Param_ControlID,Z_Param_Start,Z_Param_End,Z_Param_Speed,Z_Param_Loop,Z_Param_Play);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCHORSubsystem::execControlRecorder)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControlID);
		P_GET_UBOOL(Z_Param_Record);
		P_GET_STRUCT_REF(FChorusCuePoint,Z_Param_Out_CuePoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ControlRecorder(Z_Param_ControlID,Z_Param_Record,Z_Param_Out_CuePoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCHORSubsystem::execGetNewControlId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNewControlId();
		P_NATIVE_END;
	}
	void UCHORSubsystem::StaticRegisterNativesUCHORSubsystem()
	{
		UClass* Class = UCHORSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCuePoint", &UCHORSubsystem::execAddCuePoint },
			{ "ArchiveClip", &UCHORSubsystem::execArchiveClip },
			{ "ControlPlayer", &UCHORSubsystem::execControlPlayer },
			{ "ControlRecorder", &UCHORSubsystem::execControlRecorder },
			{ "DeleteClip", &UCHORSubsystem::execDeleteClip },
			{ "DeleteCuePoint", &UCHORSubsystem::execDeleteCuePoint },
			{ "DeleteTrack", &UCHORSubsystem::execDeleteTrack },
			{ "GetClipLength", &UCHORSubsystem::execGetClipLength },
			{ "GetNewControlId", &UCHORSubsystem::execGetNewControlId },
			{ "GetPlayerStatus", &UCHORSubsystem::execGetPlayerStatus },
			{ "GetRecorderStatus", &UCHORSubsystem::execGetRecorderStatus },
			{ "GetTrackStatus", &UCHORSubsystem::execGetTrackStatus },
			{ "ListClips", &UCHORSubsystem::execListClips },
			{ "ListCuePoints", &UCHORSubsystem::execListCuePoints },
			{ "ListTracks", &UCHORSubsystem::execListTracks },
			{ "LoadClip", &UCHORSubsystem::execLoadClip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics
	{
		struct CHORSubsystem_eventAddCuePoint_Parms
		{
			int32 Track;
			FChorusCuePoint CuePoint;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CuePoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CuePoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventAddCuePoint_Parms, Track), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::NewProp_CuePoint_MetaData[] = {
		{ "DisplayName", "CuePoint" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::NewProp_CuePoint = { "CuePoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventAddCuePoint_Parms, CuePoint), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::NewProp_CuePoint_MetaData), Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::NewProp_CuePoint_MetaData) }; // 3249559736
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::NewProp_CuePoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chorus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create a CuePoint on Track\n\x09 * @param Track \n\x09 * @param CuePoint \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a CuePoint on Track\n@param Track\n@param CuePoint" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "AddCuePoint", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::CHORSubsystem_eventAddCuePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::CHORSubsystem_eventAddCuePoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_AddCuePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_AddCuePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics
	{
		struct CHORSubsystem_eventArchiveClip_Parms
		{
			FString Name;
			FChorusCuePoint Start;
			FChorusCuePoint End;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventArchiveClip_Parms, Name), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventArchiveClip_Parms, Start), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(0, nullptr) }; // 3249559736
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventArchiveClip_Parms, End), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(0, nullptr) }; // 3249559736
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::NewProp_End,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chorus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// clips\n" },
#endif
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "clips" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "ArchiveClip", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::CHORSubsystem_eventArchiveClip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::CHORSubsystem_eventArchiveClip_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_ArchiveClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_ArchiveClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics
	{
		struct CHORSubsystem_eventControlPlayer_Parms
		{
			int32 ControlID;
			FChorusCuePoint Start;
			FChorusCuePoint End;
			float Speed;
			bool Loop;
			bool Play;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControlID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static void NewProp_Loop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Loop;
		static void NewProp_Play_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Play;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::NewProp_ControlID = { "ControlID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventControlPlayer_Parms, ControlID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventControlPlayer_Parms, Start), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(0, nullptr) }; // 3249559736
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventControlPlayer_Parms, End), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(0, nullptr) }; // 3249559736
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventControlPlayer_Parms, Speed), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::NewProp_Loop_SetBit(void* Obj)
	{
		((CHORSubsystem_eventControlPlayer_Parms*)Obj)->Loop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CHORSubsystem_eventControlPlayer_Parms), &Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::NewProp_Loop_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::NewProp_Play_SetBit(void* Obj)
	{
		((CHORSubsystem_eventControlPlayer_Parms*)Obj)->Play = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::NewProp_Play = { "Play", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CHORSubsystem_eventControlPlayer_Parms), &Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::NewProp_Play_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::NewProp_ControlID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::NewProp_Loop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::NewProp_Play,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chorus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Control the parameters of the ChorusPlayer animation node with a specific ControlID\n\x09 * @param ControlID the ChorusControlId that refers to this specific ChorusPlayer\n\x09 * @param Start CuePoint marking the beginning of the clip\n\x09 * @param End CuePoint marking the end of the clip\n\x09 * @param Speed The play speed\n\x09 * @param Loop if true the clip will loop\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control the parameters of the ChorusPlayer animation node with a specific ControlID\n@param ControlID the ChorusControlId that refers to this specific ChorusPlayer\n@param Start CuePoint marking the beginning of the clip\n@param End CuePoint marking the end of the clip\n@param Speed The play speed\n@param Loop if true the clip will loop" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "ControlPlayer", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::CHORSubsystem_eventControlPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::CHORSubsystem_eventControlPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_ControlPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_ControlPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics
	{
		struct CHORSubsystem_eventControlRecorder_Parms
		{
			int32 ControlID;
			bool Record;
			FChorusCuePoint CuePoint;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControlID;
		static void NewProp_Record_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Record;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CuePoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CuePoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::NewProp_ControlID = { "ControlID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventControlRecorder_Parms, ControlID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::NewProp_Record_SetBit(void* Obj)
	{
		((CHORSubsystem_eventControlRecorder_Parms*)Obj)->Record = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::NewProp_Record = { "Record", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CHORSubsystem_eventControlRecorder_Parms), &Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::NewProp_Record_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::NewProp_CuePoint_MetaData[] = {
		{ "DisplayName", "Cue Point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::NewProp_CuePoint = { "CuePoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventControlRecorder_Parms, CuePoint), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::NewProp_CuePoint_MetaData), Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::NewProp_CuePoint_MetaData) }; // 3249559736
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::NewProp_ControlID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::NewProp_Record,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::NewProp_CuePoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chorus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Start or stop the recording on the ChorusRecorder animation node with a specific ControlId\n\x09* Return a CuePoint\n\x09* @Param ControlID the ChorusControlId that refers to this specific ChorusRecorder\n\x09* @Param a CuePoint to this event\n    */" },
#endif
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start or stop the recording on the ChorusRecorder animation node with a specific ControlId\nReturn a CuePoint\n@Param ControlID the ChorusControlId that refers to this specific ChorusRecorder\n@Param a CuePoint to this event" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "ControlRecorder", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::CHORSubsystem_eventControlRecorder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::CHORSubsystem_eventControlRecorder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_ControlRecorder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_ControlRecorder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCHORSubsystem_DeleteClip_Statics
	{
		struct CHORSubsystem_eventDeleteClip_Parms
		{
			FString Name;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCHORSubsystem_DeleteClip_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventDeleteClip_Parms, Name), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_DeleteClip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_DeleteClip_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_DeleteClip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chorus" },
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_DeleteClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "DeleteClip", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_DeleteClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_DeleteClip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_DeleteClip_Statics::CHORSubsystem_eventDeleteClip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_DeleteClip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_DeleteClip_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_DeleteClip_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_DeleteClip_Statics::CHORSubsystem_eventDeleteClip_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_DeleteClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_DeleteClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCHORSubsystem_DeleteCuePoint_Statics
	{
		struct CHORSubsystem_eventDeleteCuePoint_Parms
		{
			FChorusCuePoint CuePoint;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CuePoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCHORSubsystem_DeleteCuePoint_Statics::NewProp_CuePoint = { "CuePoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventDeleteCuePoint_Parms, CuePoint), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(0, nullptr) }; // 3249559736
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_DeleteCuePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_DeleteCuePoint_Statics::NewProp_CuePoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_DeleteCuePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chorus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Delete a Cuepoint\n\x09 * @param CuePoint \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delete a Cuepoint\n@param CuePoint" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_DeleteCuePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "DeleteCuePoint", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_DeleteCuePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_DeleteCuePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_DeleteCuePoint_Statics::CHORSubsystem_eventDeleteCuePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_DeleteCuePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_DeleteCuePoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_DeleteCuePoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_DeleteCuePoint_Statics::CHORSubsystem_eventDeleteCuePoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_DeleteCuePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_DeleteCuePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCHORSubsystem_DeleteTrack_Statics
	{
		struct CHORSubsystem_eventDeleteTrack_Parms
		{
			int32 Track;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Track;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCHORSubsystem_DeleteTrack_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventDeleteTrack_Parms, Track), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_DeleteTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_DeleteTrack_Statics::NewProp_Track,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_DeleteTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chorus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clear all data on a track;\n\x09 * @param Track \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear all data on a track;\n@param Track" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_DeleteTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "DeleteTrack", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_DeleteTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_DeleteTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_DeleteTrack_Statics::CHORSubsystem_eventDeleteTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_DeleteTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_DeleteTrack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_DeleteTrack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_DeleteTrack_Statics::CHORSubsystem_eventDeleteTrack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_DeleteTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_DeleteTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics
	{
		struct CHORSubsystem_eventGetClipLength_Parms
		{
			FChorusCuePoint Start;
			FChorusCuePoint End;
			float Length;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventGetClipLength_Parms, Start), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::NewProp_Start_MetaData), Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::NewProp_Start_MetaData) }; // 3249559736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventGetClipLength_Parms, End), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::NewProp_End_MetaData), Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::NewProp_End_MetaData) }; // 3249559736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::NewProp_Length_MetaData[] = {
		{ "DisplayName", "Length" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventGetClipLength_Parms, Length), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::NewProp_Length_MetaData), Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::NewProp_Length_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::NewProp_Length,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chorus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return the length of a Chorus clip between two CuePoints.\n\x09 * If the CuePoints are on a different track the length is always 0.\n\x09 * \n\x09 * @param Start a ChorusCuePoint\n\x09 * @param End a ChorusCuePoint\n\x09 * @param Length the length of the clip in secconds.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the length of a Chorus clip between two CuePoints.\nIf the CuePoints are on a different track the length is always 0.\n\n@param Start a ChorusCuePoint\n@param End a ChorusCuePoint\n@param Length the length of the clip in secconds." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "GetClipLength", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::CHORSubsystem_eventGetClipLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::CHORSubsystem_eventGetClipLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_GetClipLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_GetClipLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCHORSubsystem_GetNewControlId_Statics
	{
		struct CHORSubsystem_eventGetNewControlId_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCHORSubsystem_GetNewControlId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventGetNewControlId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_GetNewControlId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_GetNewControlId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_GetNewControlId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chorus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Returns the next Unused ChorusControlId\n    * It will always return one over the highest existing ID even if it is not used anymore.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the next Unused ChorusControlId\nIt will always return one over the highest existing ID even if it is not used anymore." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_GetNewControlId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "GetNewControlId", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_GetNewControlId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetNewControlId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_GetNewControlId_Statics::CHORSubsystem_eventGetNewControlId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetNewControlId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_GetNewControlId_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetNewControlId_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_GetNewControlId_Statics::CHORSubsystem_eventGetNewControlId_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_GetNewControlId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_GetNewControlId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics
	{
		struct CHORSubsystem_eventGetPlayerStatus_Parms
		{
			int32 ControlID;
			FChorusCuePoint Start;
			FChorusCuePoint End;
			bool bIsPlaying;
			bool bIsLoop;
			float Speed;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControlID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[];
#endif
		static void NewProp_bIsPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoop_MetaData[];
#endif
		static void NewProp_bIsLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_ControlID = { "ControlID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventGetPlayerStatus_Parms, ControlID), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_Start_MetaData[] = {
		{ "DisplayName", "Start" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventGetPlayerStatus_Parms, Start), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_Start_MetaData), Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_Start_MetaData) }; // 3249559736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_End_MetaData[] = {
		{ "DisplayName", "End" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventGetPlayerStatus_Parms, End), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_End_MetaData), Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_End_MetaData) }; // 3249559736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_bIsPlaying_MetaData[] = {
		{ "DisplayName", "Is Playing" },
	};
#endif
	void Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
	{
		((CHORSubsystem_eventGetPlayerStatus_Parms*)Obj)->bIsPlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CHORSubsystem_eventGetPlayerStatus_Parms), &Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_bIsPlaying_MetaData), Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_bIsPlaying_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_bIsLoop_MetaData[] = {
		{ "DisplayName", "isLoop" },
	};
#endif
	void Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_bIsLoop_SetBit(void* Obj)
	{
		((CHORSubsystem_eventGetPlayerStatus_Parms*)Obj)->bIsLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_bIsLoop = { "bIsLoop", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CHORSubsystem_eventGetPlayerStatus_Parms), &Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_bIsLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_bIsLoop_MetaData), Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_bIsLoop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_Speed_MetaData[] = {
		{ "DisplayName", "Speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventGetPlayerStatus_Parms, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_Speed_MetaData), Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_Speed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_ControlID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_bIsPlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_bIsLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::NewProp_Speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chorus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \n\x09 * @param ControlID \n\x09 * @param Start \n\x09 * @param End \n\x09 * @param bIsPlaying \n\x09 * @param bIsLoop \n\x09 * @param Speed \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@param ControlID\n@param Start\n@param End\n@param bIsPlaying\n@param bIsLoop\n@param Speed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "GetPlayerStatus", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::CHORSubsystem_eventGetPlayerStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::CHORSubsystem_eventGetPlayerStatus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics
	{
		struct CHORSubsystem_eventGetRecorderStatus_Parms
		{
			int32 ControlID;
			bool bIsRecording;
			int32 Track;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControlID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRecording_MetaData[];
#endif
		static void NewProp_bIsRecording_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRecording;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Track;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::NewProp_ControlID = { "ControlID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventGetRecorderStatus_Parms, ControlID), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::NewProp_bIsRecording_MetaData[] = {
		{ "DisplayName", "Is Recording" },
	};
#endif
	void Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::NewProp_bIsRecording_SetBit(void* Obj)
	{
		((CHORSubsystem_eventGetRecorderStatus_Parms*)Obj)->bIsRecording = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::NewProp_bIsRecording = { "bIsRecording", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CHORSubsystem_eventGetRecorderStatus_Parms), &Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::NewProp_bIsRecording_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::NewProp_bIsRecording_MetaData), Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::NewProp_bIsRecording_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::NewProp_Track_MetaData[] = {
		{ "DisplayName", "Track" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventGetRecorderStatus_Parms, Track), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::NewProp_Track_MetaData), Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::NewProp_Track_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::NewProp_ControlID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::NewProp_bIsRecording,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::NewProp_Track,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chorus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \n\x09 * @param ControlID \n\x09 * @param bIsRecording \n\x09 * @param Track \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@param ControlID\n@param bIsRecording\n@param Track" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "GetRecorderStatus", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::CHORSubsystem_eventGetRecorderStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::CHORSubsystem_eventGetRecorderStatus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics
	{
		struct CHORSubsystem_eventGetTrackStatus_Parms
		{
			int32 Track;
			bool IsRecording;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRecording_MetaData[];
#endif
		static void NewProp_IsRecording_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRecording;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventGetTrackStatus_Parms, Track), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::NewProp_IsRecording_MetaData[] = {
		{ "DisplayName", "IsRecording" },
	};
#endif
	void Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::NewProp_IsRecording_SetBit(void* Obj)
	{
		((CHORSubsystem_eventGetTrackStatus_Parms*)Obj)->IsRecording = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::NewProp_IsRecording = { "IsRecording", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CHORSubsystem_eventGetTrackStatus_Parms), &Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::NewProp_IsRecording_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::NewProp_IsRecording_MetaData), Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::NewProp_IsRecording_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::NewProp_IsRecording,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chorus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determine if a Track is currently recording\n\x09 * @param Track \n\x09 * @param IsRecording \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determine if a Track is currently recording\n@param Track\n@param IsRecording" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "GetTrackStatus", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::CHORSubsystem_eventGetTrackStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::CHORSubsystem_eventGetTrackStatus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCHORSubsystem_ListClips_Statics
	{
		struct CHORSubsystem_eventListClips_Parms
		{
			TArray<FString> Names;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Names_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCHORSubsystem_ListClips_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCHORSubsystem_ListClips_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventListClips_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_ListClips_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ListClips_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ListClips_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_ListClips_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chorus" },
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_ListClips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "ListClips", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_ListClips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ListClips_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_ListClips_Statics::CHORSubsystem_eventListClips_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ListClips_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_ListClips_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ListClips_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_ListClips_Statics::CHORSubsystem_eventListClips_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_ListClips()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_ListClips_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics
	{
		struct CHORSubsystem_eventListCuePoints_Parms
		{
			int32 Track;
			TArray<FChorusCuePoint> CuePoints;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Track;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CuePoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CuePoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CuePoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventListCuePoints_Parms, Track), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::NewProp_CuePoints_Inner = { "CuePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(0, nullptr) }; // 3249559736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::NewProp_CuePoints_MetaData[] = {
		{ "DisplayName", "CuePoints" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::NewProp_CuePoints = { "CuePoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventListCuePoints_Parms, CuePoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::NewProp_CuePoints_MetaData), Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::NewProp_CuePoints_MetaData) }; // 3249559736
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::NewProp_CuePoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::NewProp_CuePoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chorus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get all CuePoints on a track\n\x09 * @param Track \n\x09 * @param CuePoints \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all CuePoints on a track\n@param Track\n@param CuePoints" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "ListCuePoints", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::CHORSubsystem_eventListCuePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::CHORSubsystem_eventListCuePoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_ListCuePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_ListCuePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics
	{
		struct CHORSubsystem_eventListTracks_Parms
		{
			TArray<int32> TracksOut;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TracksOut_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TracksOut_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TracksOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::NewProp_TracksOut_Inner = { "TracksOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::NewProp_TracksOut_MetaData[] = {
		{ "DisplayName", "Tracks" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::NewProp_TracksOut = { "TracksOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventListTracks_Parms, TracksOut), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::NewProp_TracksOut_MetaData), Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::NewProp_TracksOut_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::NewProp_TracksOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::NewProp_TracksOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chorus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns all existing tracks\n\x09 * @param Tracks \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all existing tracks\n@param Tracks" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "ListTracks", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::CHORSubsystem_eventListTracks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::CHORSubsystem_eventListTracks_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_ListTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_ListTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics
	{
		struct CHORSubsystem_eventLoadClip_Parms
		{
			FString Name;
			int32 Track;
			FChorusCuePoint Start;
			FChorusCuePoint End;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventLoadClip_Parms, Name), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_Track_MetaData[] = {
		{ "DisplayName", "Track" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventLoadClip_Parms, Track), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_Track_MetaData), Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_Track_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_Start_MetaData[] = {
		{ "DisplayName", "Start" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventLoadClip_Parms, Start), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_Start_MetaData), Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_Start_MetaData) }; // 3249559736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_End_MetaData[] = {
		{ "DisplayName", "End" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventLoadClip_Parms, End), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_End_MetaData), Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_End_MetaData) }; // 3249559736
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::NewProp_End,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chorus" },
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "LoadClip", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::CHORSubsystem_eventLoadClip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::CHORSubsystem_eventLoadClip_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_LoadClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_LoadClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCHORSubsystem);
	UClass* Z_Construct_UClass_UCHORSubsystem_NoRegister()
	{
		return UCHORSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCHORSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlIds_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControlIds_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlIds_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ControlIds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Tracks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Tracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextControlId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NextControlId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCHORSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CHORUS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCHORSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCHORSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCHORSubsystem_AddCuePoint, "AddCuePoint" }, // 3398885281
		{ &Z_Construct_UFunction_UCHORSubsystem_ArchiveClip, "ArchiveClip" }, // 3256271524
		{ &Z_Construct_UFunction_UCHORSubsystem_ControlPlayer, "ControlPlayer" }, // 1865317552
		{ &Z_Construct_UFunction_UCHORSubsystem_ControlRecorder, "ControlRecorder" }, // 1539976401
		{ &Z_Construct_UFunction_UCHORSubsystem_DeleteClip, "DeleteClip" }, // 3574650812
		{ &Z_Construct_UFunction_UCHORSubsystem_DeleteCuePoint, "DeleteCuePoint" }, // 2451648450
		{ &Z_Construct_UFunction_UCHORSubsystem_DeleteTrack, "DeleteTrack" }, // 4146551787
		{ &Z_Construct_UFunction_UCHORSubsystem_GetClipLength, "GetClipLength" }, // 980398247
		{ &Z_Construct_UFunction_UCHORSubsystem_GetNewControlId, "GetNewControlId" }, // 2068525391
		{ &Z_Construct_UFunction_UCHORSubsystem_GetPlayerStatus, "GetPlayerStatus" }, // 1647960434
		{ &Z_Construct_UFunction_UCHORSubsystem_GetRecorderStatus, "GetRecorderStatus" }, // 1018248365
		{ &Z_Construct_UFunction_UCHORSubsystem_GetTrackStatus, "GetTrackStatus" }, // 3926103038
		{ &Z_Construct_UFunction_UCHORSubsystem_ListClips, "ListClips" }, // 326221274
		{ &Z_Construct_UFunction_UCHORSubsystem_ListCuePoints, "ListCuePoints" }, // 830991090
		{ &Z_Construct_UFunction_UCHORSubsystem_ListTracks, "ListTracks" }, // 880045851
		{ &Z_Construct_UFunction_UCHORSubsystem_LoadClip, "LoadClip" }, // 2046123249
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCHORSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCHORSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CHORSubsystem.h" },
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_ControlIds_ValueProp = { "ControlIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FControlStruct, METADATA_PARAMS(0, nullptr) }; // 3852764514
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_ControlIds_Key_KeyProp = { "ControlIds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_ControlIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_ControlIds = { "ControlIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCHORSubsystem, ControlIds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_ControlIds_MetaData), Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_ControlIds_MetaData) }; // 3852764514
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_Tracks_ValueProp = { "Tracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FChorusTrack, METADATA_PARAMS(0, nullptr) }; // 3154879020
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_Tracks_Key_KeyProp = { "Tracks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_Tracks_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCHORSubsystem, Tracks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_Tracks_MetaData), Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_Tracks_MetaData) }; // 3154879020
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_NextControlId_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_NextControlId = { "NextControlId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCHORSubsystem, NextControlId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_NextControlId_MetaData), Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_NextControlId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCHORSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_ControlIds_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_ControlIds_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_ControlIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_Tracks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_Tracks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_Tracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCHORSubsystem_Statics::NewProp_NextControlId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCHORSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCHORSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCHORSubsystem_Statics::ClassParams = {
		&UCHORSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCHORSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCHORSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCHORSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCHORSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCHORSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCHORSubsystem()
	{
		if (!Z_Registration_Info_UClass_UCHORSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCHORSubsystem.OuterSingleton, Z_Construct_UClass_UCHORSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCHORSubsystem.OuterSingleton;
	}
	template<> CHORUS_API UClass* StaticClass<UCHORSubsystem>()
	{
		return UCHORSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCHORSubsystem);
	UCHORSubsystem::~UCHORSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCHORSubsystem, UCHORSubsystem::StaticClass, TEXT("UCHORSubsystem"), &Z_Registration_Info_UClass_UCHORSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCHORSubsystem), 3815751222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_628572498(TEXT("/Script/CHORUS"),
		Z_CompiledInDeferFile_FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
