// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CHORUSEditor/Public/ReadBoneEditor.h"
#include "CHORUS/Public/ReadBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadBoneEditor() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	CHORUS_API UScriptStruct* Z_Construct_UScriptStruct_FReadBone();
	CHORUSEDITOR_API UClass* Z_Construct_UClass_UReadBoneEditor();
	CHORUSEDITOR_API UClass* Z_Construct_UClass_UReadBoneEditor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CHORUSEditor();
// End Cross Module References
	void UReadBoneEditor::StaticRegisterNativesUReadBoneEditor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadBoneEditor);
	UClass* Z_Construct_UClass_UReadBoneEditor_NoRegister()
	{
		return UReadBoneEditor::StaticClass();
	}
	struct Z_Construct_UClass_UReadBoneEditor_Statics
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
	UObject* (*const Z_Construct_UClass_UReadBoneEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CHORUSEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadBoneEditor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadBoneEditor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReadBoneEditor.h" },
		{ "ModuleRelativePath", "Public/ReadBoneEditor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadBoneEditor_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ReadBoneEditor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReadBoneEditor_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadBoneEditor, Node), Z_Construct_UScriptStruct_FReadBone, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadBoneEditor_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UReadBoneEditor_Statics::NewProp_Node_MetaData) }; // 3979276273
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadBoneEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadBoneEditor_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadBoneEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadBoneEditor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadBoneEditor_Statics::ClassParams = {
		&UReadBoneEditor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReadBoneEditor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadBoneEditor_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadBoneEditor_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadBoneEditor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadBoneEditor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReadBoneEditor()
	{
		if (!Z_Registration_Info_UClass_UReadBoneEditor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadBoneEditor.OuterSingleton, Z_Construct_UClass_UReadBoneEditor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadBoneEditor.OuterSingleton;
	}
	template<> CHORUSEDITOR_API UClass* StaticClass<UReadBoneEditor>()
	{
		return UReadBoneEditor::StaticClass();
	}
	UReadBoneEditor::UReadBoneEditor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadBoneEditor);
	UReadBoneEditor::~UReadBoneEditor() {}
	struct Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUSEditor_Public_ReadBoneEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUSEditor_Public_ReadBoneEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadBoneEditor, UReadBoneEditor::StaticClass, TEXT("UReadBoneEditor"), &Z_Registration_Info_UClass_UReadBoneEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadBoneEditor), 3842415820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUSEditor_Public_ReadBoneEditor_h_2235588424(TEXT("/Script/CHORUSEditor"),
		Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUSEditor_Public_ReadBoneEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DriftKill_Plugins_CHORUS_Source_CHORUSEditor_Public_ReadBoneEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
