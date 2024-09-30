// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CHORUS/Public/CHORRec.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCHORRec() {}
// Cross Module References
	CHORUS_API UClass* Z_Construct_UClass_UCHORSubsystem_NoRegister();
	CHORUS_API UScriptStruct* Z_Construct_UScriptStruct_FCHORRec();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_CHORUS();
// End Cross Module References

static_assert(std::is_polymorphic<FCHORRec>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FCHORRec cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CHORRec;
class UScriptStruct* FCHORRec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CHORRec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CHORRec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCHORRec, (UObject*)Z_Construct_UPackage__Script_CHORUS(), TEXT("CHORRec"));
	}
	return Z_Registration_Info_UScriptStruct_CHORRec.OuterSingleton;
}
template<> CHORUS_API UScriptStruct* StaticStruct<FCHORRec>()
{
	return FCHORRec::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCHORRec_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecord_MetaData[];
#endif
		static void NewProp_bRecord_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControlID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Fps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__bRecord_MetaData[];
#endif
		static void NewProp__bRecord_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__bRecord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Track_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp__Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__ControlID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp__ControlID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Fps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp__Fps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChorusSubSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChorusSubSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORRec_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CHORRec.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCHORRec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCHORRec>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_Base_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/CHORRec.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORRec, Base), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_Base_MetaData), Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_Base_MetaData) }; // 1465313103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_bRecord_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CHORRec.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_bRecord_SetBit(void* Obj)
	{
		((FCHORRec*)Obj)->bRecord = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_bRecord = { "bRecord", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCHORRec), &Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_bRecord_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_bRecord_MetaData), Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_bRecord_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_Track_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CHORRec.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORRec, Track), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_Track_MetaData), Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_Track_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_ControlID_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CHORRec.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_ControlID = { "ControlID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORRec, ControlID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_ControlID_MetaData), Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_ControlID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_Fps_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CHORRec.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_Fps = { "Fps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORRec, Fps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_Fps_MetaData), Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_Fps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__bRecord_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORRec.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__bRecord_SetBit(void* Obj)
	{
		((FCHORRec*)Obj)->_bRecord = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__bRecord = { "_bRecord", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCHORRec), &Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__bRecord_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__bRecord_MetaData), Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__bRecord_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__Track_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORRec.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__Track = { "_Track", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORRec, _Track), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__Track_MetaData), Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__Track_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__ControlID_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORRec.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__ControlID = { "_ControlID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORRec, _ControlID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__ControlID_MetaData), Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__ControlID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__Fps_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORRec.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__Fps = { "_Fps", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORRec, _Fps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__Fps_MetaData), Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__Fps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_ChorusSubSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/CHORRec.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_ChorusSubSystem = { "ChorusSubSystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCHORRec, ChorusSubSystem), Z_Construct_UClass_UCHORSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_ChorusSubSystem_MetaData), Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_ChorusSubSystem_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCHORRec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_Base,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_bRecord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_ControlID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_Fps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__bRecord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__ControlID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp__Fps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCHORRec_Statics::NewProp_ChorusSubSystem,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCHORRec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CHORUS,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"CHORRec",
		Z_Construct_UScriptStruct_FCHORRec_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORRec_Statics::PropPointers),
		sizeof(FCHORRec),
		alignof(FCHORRec),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORRec_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCHORRec_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORRec_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCHORRec()
	{
		if (!Z_Registration_Info_UScriptStruct_CHORRec.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CHORRec.InnerSingleton, Z_Construct_UScriptStruct_FCHORRec_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CHORRec.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORRec_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORRec_h_Statics::ScriptStructInfo[] = {
		{ FCHORRec::StaticStruct, Z_Construct_UScriptStruct_FCHORRec_Statics::NewStructOps, TEXT("CHORRec"), &Z_Registration_Info_UScriptStruct_CHORRec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCHORRec), 3851280420U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORRec_h_650332962(TEXT("/Script/CHORUS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORRec_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Balthazar_Desktop_Repo_Crew_CHORUS_test_CHORUS_test_Plugins_CHORUS_Source_CHORUS_Public_CHORRec_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
