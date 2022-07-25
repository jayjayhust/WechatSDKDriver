// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ImageUtils.h"
#include "Engine/Texture2D.h" // https://docs.unrealengine.com/4.27/en-US/API/Runtime/Engine/Engine/UTexture2D/
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WechatSDKDriverBPLibrary.generated.h"

//#include "UnrealClient.h"

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
class UWechatSDKDriverBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample call JNI function", Keywords = "WechatSDKDriver sample test testing"), Category = "Jay.WechatSDKDriver")
	static float WechatSDKDriverSampleFunction(float Param);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample print log function", Keywords = "WechatSDKDriver sample print log testing"), Category = "Jay.WechatSDKDriver")
	static void WechatSDKDriverPrintLog();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute share text to wechat timeline function", Keywords = "WechatSDKDriver share text to wechat timeline testing"), Category = "Jay.WechatSDKDriver")
	static void WechatSDKDriverShareTextToTimeline(FString text);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute send text to wechat timeline function", Keywords = "WechatSDKDriver send text to wechat timeline testing"), Category = "Jay.WechatSDKDriver")
	static void WechatSDKDriverSendTextToTimeline(FString text);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute screen shot", Keywords = "WechatSDKDriver screen shot"), Category = "Jay.WechatSDKDriver")
	static FString WechatSDKDriverScreenshot();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute send image to wechat timeline function", Keywords = "WechatSDKDriver send image to wechat timeline testing"), Category = "Jay.WechatSDKDriver")
	static void WechatSDKDriverSendImageToTimeline(FString imagePath);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute init wechat sdk function", Keywords = "WechatSDKDriver init wechat sdk testing"), Category = "Jay.WechatSDKDriver")
	static void WechatSDKDriverInitWechatSdk(FString wechatAppId);

	/*UFUNCTION(BlueprintCallable, Category = "Jay.Utility")
	static void SaveTexture2DDebug(UTexture2D* PTexture, FString Filename);*/

	UFUNCTION(BlueprintCallable, Category = "Jay.Utility")
	static UTexture2D* LoadImageAsTexture2D(FString Filename);

	/*
	UFUNCTION(BlueprintCallable, Category = "Jay.Utility")
	bool SaveBitmapAsPNG(int32 sizeX, int32 sizeY, const TArray<FColor>& bitmapData, const FString& filePath);
	
	UFUNCTION(BlueprintCallable, Category = "Jay.Utility")
	void GetShot(FString path);

	UFUNCTION(BlueprintCallable, Category = "Jay.Utility")
	void OnScreenShotCaptured(int32 InSizeX, int32 InSizeY, const TArray<FColor>& InImageData);

	static FString cachedScreenShotLocation;
	*/

	UFUNCTION(BlueprintCallable, Category = "Jay.WechatSDKDriver")
	static void GetFolderFiles(FString Path, TArray<FString>& Files);

	UFUNCTION(BlueprintCallable, Category = "Jay.WechatSDKDriver")
	static FString GetLatestScreenshot(TArray<FString> Files);
};
