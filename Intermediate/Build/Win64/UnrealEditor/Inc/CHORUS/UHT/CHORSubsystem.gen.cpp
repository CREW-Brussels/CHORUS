// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CHORUS/Public/CHORSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCHORSubsystem() {}
// Cross Module References
	CHORUS_API UClass* Z_Construct_UClass_UCHORSubsystem();
	CHORUS_API UClass* Z_Construct_UClass_UCHORSubsystem_NoRegister();
	CHORUS_API UScriptStruct* Z_Construct_UScriptStruct_FCHORTrack();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_CHORUS();
// End Cross Module References
	DEFINE_FUNCTION(UCHORSubsystem::execResetBuffer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_track);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetBuffer(Z_Param_track);
		P_NATIVE_END;
	}
	void UCHORSubsystem::StaticRegisterNativesUCHORSubsystem()
	{
		UClass* Class = UCHORSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetBuffer", &UCHORSubsystem::execResetBuffer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCHORSubsystem_ResetBuffer_Statics
	{
		struct CHORSubsystem_eventResetBuffer_Parms
		{
			int32 track;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_track;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCHORSubsystem_ResetBuffer_Statics::NewProp_track = { "track", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CHORSubsystem_eventResetBuffer_Parms, track), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCHORSubsystem_ResetBuffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCHORSubsystem_ResetBuffer_Statics::NewProp_track,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCHORSubsystem_ResetBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Isjtar" },
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCHORSubsystem_ResetBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCHORSubsystem, nullptr, "ResetBuffer", nullptr, nullptr, Z_Construct_UFunction_UCHORSubsystem_ResetBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ResetBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCHORSubsystem_ResetBuffer_Statics::CHORSubsystem_eventResetBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ResetBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCHORSubsystem_ResetBuffer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCHORSubsystem_ResetBuffer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCHORSubsystem_ResetBuffer_Statics::CHORSubsystem_eventResetBuffer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCHORSubsystem_ResetBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCHORSubsystem_ResetBuffer_Statics::FuncParams);
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCHORSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CHORUS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCHORSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCHORSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCHORSubsystem_ResetBuffer, "ResetBuffer" }, // 3666639295
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCHORSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCHORSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CHORSubsystem.h" },
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCHORSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCHORSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCHORSubsystem_Statics::ClassParams = {
		&UCHORSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCHORSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCHORSubsystem_Statics::Class_MetaDataParams)
	};
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
	UCHORSubsystem::UCHORSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCHORSubsystem);
	UCHORSubsystem::~UCHORSubsystem() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CHORTrack;
class UScriptStruct* FCHORTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CHORTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CHORTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCHORTrack, (UObject*)Z_Construct_UPackage__Script_CHORUS(), TEXT("CHORTrack"));
	}
	return Z_Registration_Info_UScriptStruct_CHORTrack.OuterSingleton;
}
template<> CHORUS_API UScriptStruct* StaticStruct<FCHORTrack>()
{
	return FCHORTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCHORTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCHORTrack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CHORSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCHORTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCHORTrack>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCHORTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CHORUS,
		nullptr,
		&NewStructOps,
		"CHORTrack",
		nullptr,
		0,
		sizeof(FCHORTrack),
		alignof(FCHORTrack),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCHORTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCHORTrack_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCHORTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_CHORTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CHORTrack.InnerSingleton, Z_Construct_UScriptStruct_FCHORTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CHORTrack.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FCHORTrack::StaticStruct, Z_Construct_UScriptStruct_FCHORTrack_Statics::NewStructOps, TEXT("CHORTrack"), &Z_Registration_Info_UScriptStruct_CHORTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCHORTrack), 990519083U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCHORSubsystem, UCHORSubsystem::StaticClass, TEXT("UCHORSubsystem"), &Z_Registration_Info_UClass_UCHORSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCHORSubsystem), 643537543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_3265530901(TEXT("/Script/CHORUS"),
		Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUS_Public_CHORSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
