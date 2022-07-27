// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HalKvantoriadaPlugin/Public/HalKvantoriadaPluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHalKvantoriadaPluginBPLibrary() {}
// Cross Module References
	HALKVANTORIADAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HalKvantoriadaPlugin();
	HALKVANTORIADAPLUGIN_API UClass* Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary_NoRegister();
	HALKVANTORIADAPLUGIN_API UClass* Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature_Statics
	{
		struct _Script_HalKvantoriadaPlugin_eventOnReceiveData_Parms
		{
			FString data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_HalKvantoriadaPlugin_eventOnReceiveData_Parms, data), METADATA_PARAMS(Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalKvantoriadaPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HalKvantoriadaPlugin, nullptr, "OnReceiveData__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature_Statics::_Script_HalKvantoriadaPlugin_eventOnReceiveData_Parms), Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UHalKvantoriadaPluginBPLibrary::execParseJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_str);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHalKvantoriadaPluginBPLibrary::ParseJson(Z_Param_str);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalKvantoriadaPluginBPLibrary::execGetIntegerFromJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UHalKvantoriadaPluginBPLibrary::GetIntegerFromJson(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalKvantoriadaPluginBPLibrary::execGetStringFromJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UHalKvantoriadaPluginBPLibrary::GetStringFromJson(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalKvantoriadaPluginBPLibrary::execGetFloatFromJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UHalKvantoriadaPluginBPLibrary::GetFloatFromJson(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalKvantoriadaPluginBPLibrary::execReceiveHalDevice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UHalKvantoriadaPluginBPLibrary::ReceiveHalDevice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalKvantoriadaPluginBPLibrary::execStartHalDevice)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ip);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ord);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHalKvantoriadaPluginBPLibrary::StartHalDevice(Z_Param_ip,FOnReceiveData(Z_Param_Out_ord));
		P_NATIVE_END;
	}
	void UHalKvantoriadaPluginBPLibrary::StaticRegisterNativesUHalKvantoriadaPluginBPLibrary()
	{
		UClass* Class = UHalKvantoriadaPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFloatFromJson", &UHalKvantoriadaPluginBPLibrary::execGetFloatFromJson },
			{ "GetIntegerFromJson", &UHalKvantoriadaPluginBPLibrary::execGetIntegerFromJson },
			{ "GetStringFromJson", &UHalKvantoriadaPluginBPLibrary::execGetStringFromJson },
			{ "ParseJson", &UHalKvantoriadaPluginBPLibrary::execParseJson },
			{ "ReceiveHalDevice", &UHalKvantoriadaPluginBPLibrary::execReceiveHalDevice },
			{ "StartHalDevice", &UHalKvantoriadaPluginBPLibrary::execStartHalDevice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetFloatFromJson_Statics
	{
		struct HalKvantoriadaPluginBPLibrary_eventGetFloatFromJson_Parms
		{
			FString key;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetFloatFromJson_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalKvantoriadaPluginBPLibrary_eventGetFloatFromJson_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetFloatFromJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalKvantoriadaPluginBPLibrary_eventGetFloatFromJson_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetFloatFromJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetFloatFromJson_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetFloatFromJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetFloatFromJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "HalKvantoriadaPlugin" },
		{ "DisplayName", "Get Float From Json" },
		{ "Keywords", "kvantoriada halkvantoriada get float json" },
		{ "ModuleRelativePath", "Public/HalKvantoriadaPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetFloatFromJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary, nullptr, "GetFloatFromJson", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetFloatFromJson_Statics::HalKvantoriadaPluginBPLibrary_eventGetFloatFromJson_Parms), Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetFloatFromJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetFloatFromJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetFloatFromJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetFloatFromJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetFloatFromJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetFloatFromJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetIntegerFromJson_Statics
	{
		struct HalKvantoriadaPluginBPLibrary_eventGetIntegerFromJson_Parms
		{
			FString key;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetIntegerFromJson_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalKvantoriadaPluginBPLibrary_eventGetIntegerFromJson_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetIntegerFromJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalKvantoriadaPluginBPLibrary_eventGetIntegerFromJson_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetIntegerFromJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetIntegerFromJson_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetIntegerFromJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetIntegerFromJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "HalKvantoriadaPlugin" },
		{ "DisplayName", "Get Integer From Json" },
		{ "Keywords", "kvantoriada halkvantoriada get integer json" },
		{ "ModuleRelativePath", "Public/HalKvantoriadaPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetIntegerFromJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary, nullptr, "GetIntegerFromJson", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetIntegerFromJson_Statics::HalKvantoriadaPluginBPLibrary_eventGetIntegerFromJson_Parms), Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetIntegerFromJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetIntegerFromJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetIntegerFromJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetIntegerFromJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetIntegerFromJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetIntegerFromJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetStringFromJson_Statics
	{
		struct HalKvantoriadaPluginBPLibrary_eventGetStringFromJson_Parms
		{
			FString key;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetStringFromJson_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalKvantoriadaPluginBPLibrary_eventGetStringFromJson_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetStringFromJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalKvantoriadaPluginBPLibrary_eventGetStringFromJson_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetStringFromJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetStringFromJson_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetStringFromJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetStringFromJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "HalKvantoriadaPlugin" },
		{ "DisplayName", "Get String From Json" },
		{ "Keywords", "kvantoriada halkvantoriada get string json" },
		{ "ModuleRelativePath", "Public/HalKvantoriadaPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetStringFromJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary, nullptr, "GetStringFromJson", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetStringFromJson_Statics::HalKvantoriadaPluginBPLibrary_eventGetStringFromJson_Parms), Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetStringFromJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetStringFromJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetStringFromJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetStringFromJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetStringFromJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetStringFromJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ParseJson_Statics
	{
		struct HalKvantoriadaPluginBPLibrary_eventParseJson_Parms
		{
			FString str;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_str;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ParseJson_Statics::NewProp_str = { "str", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalKvantoriadaPluginBPLibrary_eventParseJson_Parms, str), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ParseJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ParseJson_Statics::NewProp_str,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ParseJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "HalKvantoriadaPlugin" },
		{ "DisplayName", "Parse Json" },
		{ "Keywords", "kvantoriada halkvantoriada parse json" },
		{ "ModuleRelativePath", "Public/HalKvantoriadaPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ParseJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary, nullptr, "ParseJson", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ParseJson_Statics::HalKvantoriadaPluginBPLibrary_eventParseJson_Parms), Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ParseJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ParseJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ParseJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ParseJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ParseJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ParseJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ReceiveHalDevice_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ReceiveHalDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "HalKvantoriadaPlugin" },
		{ "DisplayName", "Receive HalDevice" },
		{ "Keywords", "kvantoriada halkvantoriada receive device haldevice arduino" },
		{ "ModuleRelativePath", "Public/HalKvantoriadaPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ReceiveHalDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary, nullptr, "ReceiveHalDevice", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ReceiveHalDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ReceiveHalDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ReceiveHalDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ReceiveHalDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics
	{
		struct HalKvantoriadaPluginBPLibrary_eventStartHalDevice_Parms
		{
			FString ip;
			FScriptDelegate ord;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ord_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics::NewProp_ip = { "ip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalKvantoriadaPluginBPLibrary_eventStartHalDevice_Parms, ip), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics::NewProp_ord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics::NewProp_ord = { "ord", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalKvantoriadaPluginBPLibrary_eventStartHalDevice_Parms, ord), Z_Construct_UDelegateFunction_HalKvantoriadaPlugin_OnReceiveData__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics::NewProp_ord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics::NewProp_ord_MetaData)) }; // 707872857
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics::NewProp_ip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics::NewProp_ord,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "HalKvantoriadaPlugin" },
		{ "DisplayName", "Start HalDevice" },
		{ "Keywords", "kvantoriada halkvantoriada start device haldevice arduino" },
		{ "ModuleRelativePath", "Public/HalKvantoriadaPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary, nullptr, "StartHalDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics::HalKvantoriadaPluginBPLibrary_eventStartHalDevice_Parms), Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHalKvantoriadaPluginBPLibrary);
	UClass* Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary_NoRegister()
	{
		return UHalKvantoriadaPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HalKvantoriadaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetFloatFromJson, "GetFloatFromJson" }, // 3541410328
		{ &Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetIntegerFromJson, "GetIntegerFromJson" }, // 4097754115
		{ &Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_GetStringFromJson, "GetStringFromJson" }, // 3127164380
		{ &Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ParseJson, "ParseJson" }, // 3187681287
		{ &Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_ReceiveHalDevice, "ReceiveHalDevice" }, // 1325232084
		{ &Z_Construct_UFunction_UHalKvantoriadaPluginBPLibrary_StartHalDevice, "StartHalDevice" }, // 1984563468
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "HalKvantoriadaPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/HalKvantoriadaPluginBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHalKvantoriadaPluginBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary_Statics::ClassParams = {
		&UHalKvantoriadaPluginBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UHalKvantoriadaPluginBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHalKvantoriadaPluginBPLibrary.OuterSingleton, Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHalKvantoriadaPluginBPLibrary.OuterSingleton;
	}
	template<> HALKVANTORIADAPLUGIN_API UClass* StaticClass<UHalKvantoriadaPluginBPLibrary>()
	{
		return UHalKvantoriadaPluginBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHalKvantoriadaPluginBPLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary, UHalKvantoriadaPluginBPLibrary::StaticClass, TEXT("UHalKvantoriadaPluginBPLibrary"), &Z_Registration_Info_UClass_UHalKvantoriadaPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHalKvantoriadaPluginBPLibrary), 463657978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_687878837(TEXT("/Script/HalKvantoriadaPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
