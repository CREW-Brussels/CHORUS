// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CHORUS/Public/CHORPlay.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "CHORUS/Public/FChorusCuePoint.h"
#include "CHORUS/Public/FChorusPlayHead.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCHORPlay() {}
// Cross Module References
	CHORUS_API UClass* Z_Construct_UClass_UCHORSubsystem_NoRegister();
	CHORUS_API UScriptStruct* Z_Construct_UScriptStruct_FCHORPlay();
	CHORUS_API UScriptStruct* Z_Construct_UScriptStruct_FChorusCuePoint();
	CHORUS_API UScriptStruct* Z_Construct_UScriptStruct_FChorusPlayHead();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_CHORUS();
// End Cross Module References

static_assert(std::is_polymorphic<FCHORPlay>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FCHORPlay cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CHORPlay;
class UScriptStruct* FCHORPlay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CHORPlay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CHORPlay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCHORPlay, (UObject*)Z_Construct_UPackage__Script_CHORUS(), TEXT("CHORPlay"));
	}
	return Z_Registration_Info_UScriptStruct_CHORPlay.OuterSingleton;
}
template<> CHORUS_API UScriptStruct* StaticStruct<FCHORPlay>()
{
	return FCHORPlay::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCHORPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlay_MetaData[];
#endif
		static void NewProp_bPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControlID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayHead_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayHead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChorusSubSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChorusSubSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__bLoop_MetaData[];
#endif
		static void NewProp__bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__bLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__bPlay_MetaData[];
#endif
		static void NewProp__bPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__bPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__ControlID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp__ControlID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCHORPlay_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCHORPlay>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_Base_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORPlay, Base), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_Base_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_Base_MetaData) }; // 1465313103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_Start_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORPlay, Start), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_Start_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_Start_MetaData) }; // 3249559736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_End_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORPlay, End), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_End_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_End_MetaData) }; // 3249559736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORPlay, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_Speed_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((FCHORPlay*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCHORPlay), &Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bLoop_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bLoop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bPlay_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bPlay_SetBit(void* Obj)
	{
		((FCHORPlay*)Obj)->bPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bPlay = { "bPlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCHORPlay), &Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bPlay_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_ControlID_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_ControlID = { "ControlID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORPlay, ControlID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_ControlID_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_ControlID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_PlayHead_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_PlayHead = { "PlayHead", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORPlay, PlayHead), Z_Construct_UScriptStruct_FChorusPlayHead, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_PlayHead_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_PlayHead_MetaData) }; // 1615487255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_ChorusSubSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_ChorusSubSystem = { "ChorusSubSystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORPlay, ChorusSubSystem), Z_Construct_UClass_UCHORSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_ChorusSubSystem_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_ChorusSubSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__Start_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__Start = { "_Start", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORPlay, _Start), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__Start_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__Start_MetaData) }; // 3249559736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__End_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__End = { "_End", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORPlay, _End), Z_Construct_UScriptStruct_FChorusCuePoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__End_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__End_MetaData) }; // 3249559736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__Speed_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__Speed = { "_Speed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORPlay, _Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__Speed_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__bLoop_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__bLoop_SetBit(void* Obj)
	{
		((FCHORPlay*)Obj)->_bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__bLoop = { "_bLoop", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCHORPlay), &Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__bLoop_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__bLoop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__bPlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__bPlay_SetBit(void* Obj)
	{
		((FCHORPlay*)Obj)->_bPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__bPlay = { "_bPlay", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCHORPlay), &Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__bPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__bPlay_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__bPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__ControlID_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__ControlID = { "_ControlID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORPlay, _ControlID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__ControlID_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__ControlID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCHORPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_Base,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_ControlID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_PlayHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_ChorusSubSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__bPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp__ControlID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCHORPlay_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CHORUS,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"CHORPlay",
		Z_Construct_UScriptStruct_FCHORPlay_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::PropPointers),
		sizeof(FCHORPlay),
		alignof(FCHORPlay),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCHORPlay_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCHORPlay()
	{
		if (!Z_Registration_Info_UScriptStruct_CHORPlay.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CHORPlay.InnerSingleton, Z_Construct_UScriptStruct_FCHORPlay_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CHORPlay.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORPlay_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORPlay_h_Statics::ScriptStructInfo[] = {
		{ FCHORPlay::StaticStruct, Z_Construct_UScriptStruct_FCHORPlay_Statics::NewStructOps, TEXT("CHORPlay"), &Z_Registration_Info_UScriptStruct_CHORPlay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCHORPlay), 3328670414U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORPlay_h_424807(TEXT("/Script/CHORUS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORPlay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORPlay_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
