// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HALKVANTORIADAPLUGIN_HalKvantoriadaPluginBPLibrary_generated_h
#error "HalKvantoriadaPluginBPLibrary.generated.h already included, missing '#pragma once' in HalKvantoriadaPluginBPLibrary.h"
#endif
#define HALKVANTORIADAPLUGIN_HalKvantoriadaPluginBPLibrary_generated_h

#define FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_13_DELEGATE \
struct _Script_HalKvantoriadaPlugin_eventOnReceiveData_Parms \
{ \
	FString data; \
}; \
static inline void FOnReceiveData_DelegateWrapper(const FScriptDelegate& OnReceiveData, const FString& data) \
{ \
	_Script_HalKvantoriadaPlugin_eventOnReceiveData_Parms Parms; \
	Parms.data=data; \
	OnReceiveData.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_SPARSE_DATA
#define FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execParseJson); \
	DECLARE_FUNCTION(execGetIntegerFromJson); \
	DECLARE_FUNCTION(execGetStringFromJson); \
	DECLARE_FUNCTION(execGetFloatFromJson); \
	DECLARE_FUNCTION(execReceiveHalDevice); \
	DECLARE_FUNCTION(execStartHalDevice);


#define FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execParseJson); \
	DECLARE_FUNCTION(execGetIntegerFromJson); \
	DECLARE_FUNCTION(execGetStringFromJson); \
	DECLARE_FUNCTION(execGetFloatFromJson); \
	DECLARE_FUNCTION(execReceiveHalDevice); \
	DECLARE_FUNCTION(execStartHalDevice);


#define FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHalKvantoriadaPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UHalKvantoriadaPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HalKvantoriadaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHalKvantoriadaPluginBPLibrary)


#define FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUHalKvantoriadaPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UHalKvantoriadaPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UHalKvantoriadaPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HalKvantoriadaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHalKvantoriadaPluginBPLibrary)


#define FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHalKvantoriadaPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHalKvantoriadaPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHalKvantoriadaPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHalKvantoriadaPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHalKvantoriadaPluginBPLibrary(UHalKvantoriadaPluginBPLibrary&&); \
	NO_API UHalKvantoriadaPluginBPLibrary(const UHalKvantoriadaPluginBPLibrary&); \
public:


#define FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHalKvantoriadaPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHalKvantoriadaPluginBPLibrary(UHalKvantoriadaPluginBPLibrary&&); \
	NO_API UHalKvantoriadaPluginBPLibrary(const UHalKvantoriadaPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHalKvantoriadaPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHalKvantoriadaPluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHalKvantoriadaPluginBPLibrary)


#define FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_32_PROLOG
#define FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_SPARSE_DATA \
	FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_RPC_WRAPPERS \
	FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_INCLASS \
	FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_SPARSE_DATA \
	FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HalKvantoriadaPluginBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HALKVANTORIADAPLUGIN_API UClass* StaticClass<class UHalKvantoriadaPluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_HalKvantoriadaPlugin_Source_HalKvantoriadaPlugin_Public_HalKvantoriadaPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
