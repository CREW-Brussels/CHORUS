// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CHORUSEditor/Public/CHORUSRec.h"
#include "CHORUS/Public/CHORRec.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCHORUSRec() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	CHORUS_API UScriptStruct* Z_Construct_UScriptStruct_FCHORRec();
	CHORUSEDITOR_API UClass* Z_Construct_UClass_UCHORUSRec();
	CHORUSEDITOR_API UClass* Z_Construct_UClass_UCHORUSRec_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CHORUSEditor();
// End Cross Module References
	void UCHORUSRec::StaticRegisterNativesUCHORUSRec()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCHORUSRec);
	UClass* Z_Construct_UClass_UCHORUSRec_NoRegister()
	{
		return UCHORUSRec::StaticClass();
	}
	struct Z_Construct_UClass_UCHORUSRec_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCHORUSRec_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_CHORUSEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCHORUSRec_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCHORUSRec_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CHORUSRec.h" },
		{ "ModuleRelativePath", "Public/CHORUSRec.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCHORUSRec_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CHORUSRec.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCHORUSRec_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCHORUSRec, Node), Z_Construct_UScriptStruct_FCHORRec, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCHORUSRec_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UCHORUSRec_Statics::NewProp_Node_MetaData) }; // 1252408867
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCHORUSRec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCHORUSRec_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCHORUSRec_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCHORUSRec>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCHORUSRec_Statics::ClassParams = {
		&UCHORUSRec::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCHORUSRec_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCHORUSRec_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCHORUSRec_Statics::Class_MetaDataParams), Z_Construct_UClass_UCHORUSRec_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCHORUSRec_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCHORUSRec()
	{
		if (!Z_Registration_Info_UClass_UCHORUSRec.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCHORUSRec.OuterSingleton, Z_Construct_UClass_UCHORUSRec_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCHORUSRec.OuterSingleton;
	}
	template<> CHORUSEDITOR_API UClass* StaticClass<UCHORUSRec>()
	{
		return UCHORUSRec::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCHORUSRec);
	UCHORUSRec::~UCHORUSRec() {}
	struct Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUSEditor_Public_CHORUSRec_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUSEditor_Public_CHORUSRec_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCHORUSRec, UCHORUSRec::StaticClass, TEXT("UCHORUSRec"), &Z_Registration_Info_UClass_UCHORUSRec, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCHORUSRec), 3996637760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUSEditor_Public_CHORUSRec_h_1018700196(TEXT("/Script/CHORUSEditor"),
		Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUSEditor_Public_CHORUSRec_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUSEditor_Public_CHORUSRec_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
