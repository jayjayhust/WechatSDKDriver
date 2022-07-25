// Copyright Epic Games, Inc. All Rights Reserved.

#include "WechatSDKDriverBPLibrary.h"
#include "WechatSDKDriver.h"
#include "WechatSDKJNI.h"

#include "Misc/FileHelper.h"
#include "PixelFormat.h"
#include "HAL/UnrealMemory.h"

UWechatSDKDriverBPLibrary::UWechatSDKDriverBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UWechatSDKDriverBPLibrary::WechatSDKDriverSampleFunction(float Param)
{
#if PLATFORM_ANDROID
	UE_LOG(LogTemp, Warning, TEXT("[Jay][WechatSDKDriverBPLibrary]CallTest Start"));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("CallTest Start!"));

	WechatSDKJNI::CallTest(); // 调用C++调用JNI封装类WechatSDKJNI里的方法

	UE_LOG(LogTemp, Warning, TEXT("[Jay][WechatSDKDriverBPLibrary]CallTest End"));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("CallTest End!"));
#endif

	return -1;
}

void UWechatSDKDriverBPLibrary::WechatSDKDriverPrintLog()
{
	UE_LOG(LogTemp, Warning, TEXT("[Jay][WechatSDKDriverBPLibrary]PrintLog Start"));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("PrintLog Start!"));

	UE_LOG(LogTemp, Warning, TEXT("[Jay][WechatSDKDriverBPLibrary]PrintLog End"));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("PrintLog End!"));
	return;
}

void UWechatSDKDriverBPLibrary::WechatSDKDriverShareTextToTimeline(FString text)
{
	UE_LOG(LogTemp, Warning, TEXT("[Jay][WechatSDKDriverBPLibrary]ShareTextToTimeline Start"));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("ShareTextToTimeline Start!"));

#if PLATFORM_ANDROID
	WechatSDKJNI::ShareTextToTimeline(); // 调用C++调用JNI封装类WechatSDKJNI里的方法
#endif

	UE_LOG(LogTemp, Warning, TEXT("[Jay][WechatSDKDriverBPLibrary]ShareTextToTimeline End"));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("ShareTextToTimeline End!"));
	return;
}

void UWechatSDKDriverBPLibrary::WechatSDKDriverSendTextToTimeline(FString text)
{
	UE_LOG(LogTemp, Warning, TEXT("[Jay][WechatSDKDriverBPLibrary]SendTextToTimeline Start"));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("SendTextToTimeline Start!"));

#if PLATFORM_ANDROID
	WechatSDKJNI::SendTextToTimeline(text); // 调用C++调用JNI封装类WechatSDKJNI里的方法
	//WechatSDKJNI::SendTextToTimeline(); // 调用C++调用JNI封装类WechatSDKJNI里的方法
#endif

	UE_LOG(LogTemp, Warning, TEXT("[Jay][WechatSDKDriverBPLibrary]ShareTextToTimeline End"));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("SendTextToTimeline End!"));
	return;
}

FString UWechatSDKDriverBPLibrary::WechatSDKDriverScreenshot()
{
	FString imagePath = "";
	
	UE_LOG(LogTemp, Warning, TEXT("[Jay][WechatSDKDriverBPLibrary]Screenshot Start"));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Screenshot Start!"));

#if PLATFORM_ANDROID
	imagePath = WechatSDKJNI::Screenshot(); // 调用C++调用JNI封装类WechatSDKJNI里的方法
#endif

	UE_LOG(LogTemp, Warning, TEXT("[Jay][WechatSDKDriverBPLibrary]Screenshot End"));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Screenshot End!"));
	return imagePath;
}

void UWechatSDKDriverBPLibrary::WechatSDKDriverSendImageToTimeline(FString imagePath)
{
	UE_LOG(LogTemp, Warning, TEXT("[Jay][WechatSDKDriverBPLibrary]SendImageToTimeline Start"));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("SendImageToTimeline Start!"));

#if PLATFORM_ANDROID
	WechatSDKJNI::SendImageToTimeline(imagePath); // 调用C++调用JNI封装类WechatSDKJNI里的方法
#endif

	UE_LOG(LogTemp, Warning, TEXT("[Jay][WechatSDKDriverBPLibrary]SendImageToTimeline End"));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("SendImageToTimeline End!"));
	return;
}

void UWechatSDKDriverBPLibrary::WechatSDKDriverInitWechatSdk(FString wechatAppId)
{
	UE_LOG(LogTemp, Warning, TEXT("[Jay][WechatSDKDriverBPLibrary]InitWechatSdk Start"));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("InitWechatSdk Start!"));

#if PLATFORM_ANDROID
	WechatSDKJNI::InitWechatSdk(wechatAppId); // 调用C++调用JNI封装类WechatSDKJNI里的方法
#endif

	UE_LOG(LogTemp, Warning, TEXT("[Jay][WechatSDKDriverBPLibrary]InitWechatSdk End"));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("InitWechatSdk End!"));
	return;
}

//void UWechatSDKDriverBPLibrary::SaveTexture2DDebug(UTexture2D* PTexture, FString Filename)
//{
//	PTexture->UpdateResourceW();
//	FTexture2DMipMap* MM = &PTexture->PlatformData->Mips[0];
//
//	TArray<FColor> OutBMP;
//	int w = MM->SizeX;
//	int h = MM->SizeY;
//
//	OutBMP.InsertZeroed(0, w * h);
//
//	FByteBulkData* RawImageData = &MM->BulkData;
//
//	FColor* FormatedImageData = static_cast<FColor*>(RawImageData->Lock(LOCK_READ_ONLY));
//
//	for (int i = 0; i < (w * h); ++i)
//	{
//		OutBMP* = FormatedImageData*;
//		OutBMP* .A = 255;
//	}
//
//	RawImageData->Unlock();
//	FIntPoint DestSize(w, h);
//
//	FString ResultPath;
//	FHighResScreenshotConfig& HighResScreenshotConfig = GetHighResScreenshotConfig();
//	bool bSaved = HighResScreenshotConfig.SaveImage(Filename, OutBMP, DestSize, &ResultPath);
//	/*
//	FTexture2DResource* PR = (FTexture2DResource*)PTexture->Resource;
//
//	if (PR)
//	{
//		uint32 Stride;
//		void* buf = RHILockTexture2D(PR->GetTexture2DRHI(), 0, RLM_ReadOnly, Stride, false);
//	}*/
//
//	UE_LOG(LogTemp, Warning, TEXT("UWechatSDKDriverBPLibrary::SaveTexture2DDebug: %d %d"), w, h);
//	UE_LOG(LogTemp, Warning, TEXT("UWechatSDKDriverBPLibrary::SaveTexture2DDebug: %s %d"), *ResultPath, bSaved == true ? 1 : 0);
//}

UTexture2D* UWechatSDKDriverBPLibrary::LoadImageAsTexture2D(FString Filename)
{
	UE_LOG(LogTemp, Warning, TEXT("[Jay][WechatSDKDriverBPLibrary]LoadImageAsTexture2D Start"));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("LoadImageAsTexture2D Start!"));

#if PLATFORM_ANDROID
	//WechatSDKJNI::InitWechatSdk(wechatAppId); // 调用C++调用JNI封装类WechatSDKJNI里的方法
#else
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("LoadImageAsTexture2D test on windows!"));
	
	// Load image
	TArray<uint8> compressedBitmap;
	if (!FFileHelper::LoadFileToArray(compressedBitmap, *Filename))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("LoadImageAsTexture2D load image file failed!"));
	}
	else 
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("LoadImageAsTexture2D load image file ok!"));

		// Turn TArray<uint8> into Texture2D*
		// Ref URL1: https://forums.unrealengine.com/t/converting-an-array-of-pixel-values-to-a-texture/145549
		int32 width = 64;
		int32 height = 64;
		UTexture2D* texture = UTexture2D::CreateTransient(width, height, PF_B8G8R8A8);
		void* TextureData = texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
		//FMemory::Memcpy(TextureData, compressedBitmap, 4 * width * height);
		//texture->PlatformData->Mips[0].BulkData.Unlock();
		//texture->UpdateResource();
	}
#endif

	UE_LOG(LogTemp, Warning, TEXT("[Jay][WechatSDKDriverBPLibrary]LoadImageAsTexture2D End"));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("LoadImageAsTexture2D End!"));
	return nullptr;
}

/*
bool UWechatSDKDriverBPLibrary::SaveBitmapAsPNG(int32 sizeX, int32 sizeY, const TArray<FColor>& bitmapData, const FString& filePath) {
	TArray<uint8> compressedBitmap;
	FImageUtils::CompressImageArray(sizeX, sizeY, bitmapData, compressedBitmap);
	return FFileHelper::SaveArrayToFile(compressedBitmap, *filePath);
}

// Then, in the class where you are wanting to handle your screenshotting, you'll need to make two functions,
// one that requests the screenshot using FScreenshotRequest, and one that receives the screenshot data in the
// next frame, when the screenshot is actually completed.

FString UWechatSDKDriverBPLibrary::cachedScreenShotLocation = ""; // this was static in the original. Hmmm.

void UWechatSDKDriverBPLibrary::GetShot(FString path) {
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "debug msg from GetShot");
	UE_LOG(LogTemp, Warning, TEXT("GetShot received: %s"), *path);
	cachedScreenShotLocation = path;
	UGameViewportClient* GameViewportClient = GEngine->GameViewport;
	// register notification for when the next screenshot is completed
	GameViewportClient->OnScreenshotCaptured().AddUObject(this, &AScreenshotWithUI::OnScreenShotCaptured);
	FScreenshotRequest::RequestScreenshot(path, true, false);
}

void UWechatSDKDriverBPLibrary::OnScreenShotCaptured(int32 InSizeX, int32 InSizeY, const TArray<FColor>& InImageData) {
	UE_LOG(LogTemp, Warning, TEXT("hello from OnScreenShotCaptured"));
	// remove notification for when shot is completed, we don't care if someone else requested a screenshot, just
	// the most recent request that came in involving this object.
	GEngine->GameViewport->OnScreenshotCaptured().RemoveAll(this);
	if (!SaveBitmapAsPNG(InSizeX, InSizeY, InImageData, cachedScreenShotLocation)) {
		UE_LOG(LogTemp, Error, TEXT("Error saving screenshot to %s"), *cachedScreenShotLocation);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("screenshot saved to %s"), *cachedScreenShotLocation);
	}
}
*/

void UWechatSDKDriverBPLibrary::GetFolderFiles(FString Path, TArray<FString>& Files)
{
	//TArray<UObject*> LoadedAsseObjects;
	//FString ResourcePath(TEXT("/Game/ThirdPerson/Assets"));
	//
	//if (EngineUtils::FindOrLoadAssetsByPath(ResourcePath, LoadedAsseObjects, EngineUtils::ATL_Regular)) // Find all assets(https://zhuanlan.zhihu.com/p/421014838)
	//{
	//	for (UObject* TmpAssetObject : LoadedAsseObjects)
	//	{
	//		UTexture2D* TmpWidgetBluePrint = Cast<UTexture2D>(TmpAssetObject); // 处理UTexture2D资源

	//		if (!TmpWidgetBluePrint)
	//		{
	//			continue;
	//		}

	//		if (GEngine)
	//			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("PNG file was found!"));
	//	}
	//	
	//	return true;
	//}
	//else 
	//{
	//	if (GEngine)
	//		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Directory incorrect or has no file in directory!"));
	//}

	// Ref URL: https://www.jianshu.com/p/9d50c7bfcc30
	FPaths::NormalizeDirectoryName(Path);
	IFileManager& FileManager = IFileManager::Get();
	FString FinalPath = Path / TEXT("*");
	FileManager.FindFiles(Files, *FinalPath, true, true);
}

FString UWechatSDKDriverBPLibrary::GetLatestScreenshot(TArray<FString> Files)
{
	int32 maxIndex = -1;
	FString latestFile = "";
	FString LeftString = "";
	FString RightString = "";

	for (FString file : Files)
	{
		file.Split("_", &LeftString, &RightString);
		int32 index = FCString::Atoi(*RightString);

		if (index > maxIndex)
		{
			maxIndex = index;
			latestFile = file;
		}
	}

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Latest image file is: %s"), *latestFile));
	return latestFile;
}