// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CHORUS/Public/CHORPlay.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCHORPlay() {}
// Cross Module References
	CHORUS_API UClass* Z_Construct_UClass_UCHORSubsystem_NoRegister();
	CHORUS_API UScriptStruct* Z_Construct_UScriptStruct_FCHORPlay();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsjSubSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IsjSubSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_numFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_numFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[];
#endif
		static void NewProp_bIsPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_track_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_track;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_IsjSubSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_IsjSubSystem = { "IsjSubSystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORPlay, IsjSubSystem), Z_Construct_UClass_UCHORSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_IsjSubSystem_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_IsjSubSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_numFrames_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_numFrames = { "numFrames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORPlay, numFrames), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_numFrames_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_numFrames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bIsPlaying_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
	{
		((FCHORPlay*)Obj)->bIsPlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCHORPlay), &Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bIsPlaying_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bIsPlaying_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_track_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CHORPlay.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_track = { "track", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORPlay, track), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_track_MetaData), Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_track_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCHORPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_Base,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_IsjSubSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_numFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_bIsPlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORPlay_Statics::NewProp_track,
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
	struct Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORPlay_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORPlay_h_Statics::ScriptStructInfo[] = {
		{ FCHORPlay::StaticStruct, Z_Construct_UScriptStruct_FCHORPlay_Statics::NewStructOps, TEXT("CHORPlay"), &Z_Registration_Info_UScriptStruct_CHORPlay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCHORPlay), 3751515903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORPlay_h_2205804702(TEXT("/Script/CHORUS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORPlay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORPlay_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
