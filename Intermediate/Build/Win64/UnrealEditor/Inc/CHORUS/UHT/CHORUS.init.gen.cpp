// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCHORUS_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CHORUS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CHORUS()
	{
		if (!Z_Registration_Info_UPackage__Script_CHORUS.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CHORUS",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x76C62AB4,
				0xCD065483,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CHORUS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CHORUS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CHORUS(Z_Construct_UPackage__Script_CHORUS, TEXT("/Script/CHORUS"), Z_Registration_Info_UPackage__Script_CHORUS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x76C62AB4, 0xCD065483));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
