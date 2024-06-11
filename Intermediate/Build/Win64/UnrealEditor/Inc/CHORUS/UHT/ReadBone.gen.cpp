// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CHORUS/Public/ReadBone.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	CHORUS_API UScriptStruct* Z_Construct_UScriptStruct_FReadBone();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_CHORUS();
// End Cross Module References

static_assert(std::is_polymorphic<FReadBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FReadBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReadBone;
class UScriptStruct* FReadBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReadBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReadBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReadBone, (UObject*)Z_Construct_UPackage__Script_CHORUS(), TEXT("ReadBone"));
	}
	return Z_Registration_Info_UScriptStruct_ReadBone.OuterSingleton;
}
template<> CHORUS_API UScriptStruct* StaticStruct<FReadBone>()
{
	return FReadBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReadBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChainStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScaleCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReadBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReadBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReadBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReadBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReadBone_Statics::NewProp_ChainStart_MetaData[] = {
		{ "Category", "Gradual Scale Joints" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The bone to start the scale at. Everything below this will be scaled by depth. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The bone to start the scale at. Everything below this will be scaled by depth." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReadBone_Statics::NewProp_ChainStart = { "ChainStart", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReadBone, ChainStart), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReadBone_Statics::NewProp_ChainStart_MetaData), Z_Construct_UScriptStruct_FReadBone_Statics::NewProp_ChainStart_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReadBone_Statics::NewProp_ScaleCurve_MetaData[] = {
		{ "Category", "Gradual Scale Joints" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The float curve that will drive the scale of the joints */" },
#endif
		{ "ModuleRelativePath", "Public/ReadBone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The float curve that will drive the scale of the joints" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FReadBone_Statics::NewProp_ScaleCurve = { "ScaleCurve", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReadBone, ScaleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReadBone_Statics::NewProp_ScaleCurve_MetaData), Z_Construct_UScriptStruct_FReadBone_Statics::NewProp_ScaleCurve_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReadBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReadBone_Statics::NewProp_ChainStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReadBone_Statics::NewProp_ScaleCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReadBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CHORUS,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"ReadBone",
		Z_Construct_UScriptStruct_FReadBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReadBone_Statics::PropPointers),
		sizeof(FReadBone),
		alignof(FReadBone),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReadBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReadBone_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReadBone_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FReadBone()
	{
		if (!Z_Registration_Info_UScriptStruct_ReadBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReadBone.InnerSingleton, Z_Construct_UScriptStruct_FReadBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReadBone.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_ReadBone_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_ReadBone_h_Statics::ScriptStructInfo[] = {
		{ FReadBone::StaticStruct, Z_Construct_UScriptStruct_FReadBone_Statics::NewStructOps, TEXT("ReadBone"), &Z_Registration_Info_UScriptStruct_ReadBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReadBone), 3979276273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_ReadBone_h_1741762390(TEXT("/Script/CHORUS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_ReadBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_ReadBone_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
