// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHalKvantoriadaPlugin_init() {}
	HALKVANTORIADAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HalKvantoriadaPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HalKvantoriadaPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_HalKvantoriadaPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HalKvantoriadaPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7F994EBD,
				0xD998C167,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HalKvantoriadaPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HalKvantoriadaPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HalKvantoriadaPlugin(Z_Construct_UPackage__Script_HalKvantoriadaPlugin, TEXT("/Script/HalKvantoriadaPlugin"), Z_Registration_Info_UPackage__Script_HalKvantoriadaPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7F994EBD, 0xD998C167));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
