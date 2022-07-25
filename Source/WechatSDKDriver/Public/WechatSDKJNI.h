#pragma once

#include "CoreMinimal.h"

#if PLATFORM_ANDROID
#include "Runtime/Launch/Public/Android/AndroidJNI.h"
#include "Runtime/ApplicationCore/Public/Android/AndroidApplication.h"


class WechatSDKJNI
{
public:
	WechatSDKJNI();
	~WechatSDKJNI();

	static void CallTest();
	static void InitWechatSdk(FString wechatAppId);
	static void ShareTextToTimeline();
	static void SendTextToTimeline(FString text);
	//static void SendTextToTimeline();
	static FString Screenshot();
	static void SendImageToTimeline(FString imagePath);

};

#endif