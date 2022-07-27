// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SocketSubsystem.h"
#include "IPAddress.h"
#include "Runtime/Networking/Public/Networking.h"
#include "Json.h"
#include "HalKvantoriadaPluginBPLibrary.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnReceiveData, const FString&, data);

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UHalKvantoriadaPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Start HalDevice", Keywords = "kvantoriada halkvantoriada start device haldevice arduino"), Category = "HalKvantoriadaPlugin")
	static void StartHalDevice(FString ip,const FOnReceiveData& ord);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Receive HalDevice", Keywords = "kvantoriada halkvantoriada receive device haldevice arduino"), Category = "HalKvantoriadaPlugin")
	static void ReceiveHalDevice();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Float From Json", Keywords = "kvantoriada halkvantoriada get float json"),Category="HalKvantoriadaPlugin")
	static float GetFloatFromJson(FString key);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get String From Json", Keywords = "kvantoriada halkvantoriada get string json"), Category = "HalKvantoriadaPlugin")
	static FString GetStringFromJson(FString key);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Integer From Json", Keywords = "kvantoriada halkvantoriada get integer json"), Category = "HalKvantoriadaPlugin")
	static int32 GetIntegerFromJson(FString key);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Parse Json", Keywords = "kvantoriada halkvantoriada parse json"), Category = "HalKvantoriadaPlugin")
	static void ParseJson(FString str);

private:
	static bool Connect(FString ip, int32 port);
	static void Receive(int32 Size);
	static void Close();
	static int32 SendData(const TArray<uint8> data);
	static TArray<uint8> StringToByteArray(const FString str);
	static FString ByteArrayToString(const TArray<uint8> ByteArray);
	static FString UEStringToNormalString(FString s);
	static void ReceiveHalDevice(TArray<uint8> data);
};