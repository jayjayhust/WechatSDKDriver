// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WechatSDKDriver/Public/WechatSDKDriverBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWechatSDKDriverBPLibrary() {}
// Cross Module References
	WECHATSDKDRIVER_API UClass* Z_Construct_UClass_UWechatSDKDriverBPLibrary_NoRegister();
	WECHATSDKDRIVER_API UClass* Z_Construct_UClass_UWechatSDKDriverBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WechatSDKDriver();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWechatSDKDriverBPLibrary::execGetLatestScreenshot)
	{
		P_GET_TARRAY(FString,Z_Param_Files);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UWechatSDKDriverBPLibrary::GetLatestScreenshot(Z_Param_Files);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWechatSDKDriverBPLibrary::execGetFolderFiles)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWechatSDKDriverBPLibrary::GetFolderFiles(Z_Param_Path,Z_Param_Out_Files);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWechatSDKDriverBPLibrary::execLoadImageAsTexture2D)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UWechatSDKDriverBPLibrary::LoadImageAsTexture2D(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWechatSDKDriverBPLibrary::execWechatSDKDriverInitWechatSdk)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_wechatAppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWechatSDKDriverBPLibrary::WechatSDKDriverInitWechatSdk(Z_Param_wechatAppId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWechatSDKDriverBPLibrary::execWechatSDKDriverSendImageToTimeline)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_imagePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWechatSDKDriverBPLibrary::WechatSDKDriverSendImageToTimeline(Z_Param_imagePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWechatSDKDriverBPLibrary::execWechatSDKDriverScreenshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UWechatSDKDriverBPLibrary::WechatSDKDriverScreenshot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWechatSDKDriverBPLibrary::execWechatSDKDriverSendTextToTimeline)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWechatSDKDriverBPLibrary::WechatSDKDriverSendTextToTimeline(Z_Param_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWechatSDKDriverBPLibrary::execWechatSDKDriverShareTextToTimeline)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWechatSDKDriverBPLibrary::WechatSDKDriverShareTextToTimeline(Z_Param_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWechatSDKDriverBPLibrary::execWechatSDKDriverPrintLog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UWechatSDKDriverBPLibrary::WechatSDKDriverPrintLog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWechatSDKDriverBPLibrary::execWechatSDKDriverSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UWechatSDKDriverBPLibrary::WechatSDKDriverSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void UWechatSDKDriverBPLibrary::StaticRegisterNativesUWechatSDKDriverBPLibrary()
	{
		UClass* Class = UWechatSDKDriverBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFolderFiles", &UWechatSDKDriverBPLibrary::execGetFolderFiles },
			{ "GetLatestScreenshot", &UWechatSDKDriverBPLibrary::execGetLatestScreenshot },
			{ "LoadImageAsTexture2D", &UWechatSDKDriverBPLibrary::execLoadImageAsTexture2D },
			{ "WechatSDKDriverInitWechatSdk", &UWechatSDKDriverBPLibrary::execWechatSDKDriverInitWechatSdk },
			{ "WechatSDKDriverPrintLog", &UWechatSDKDriverBPLibrary::execWechatSDKDriverPrintLog },
			{ "WechatSDKDriverSampleFunction", &UWechatSDKDriverBPLibrary::execWechatSDKDriverSampleFunction },
			{ "WechatSDKDriverScreenshot", &UWechatSDKDriverBPLibrary::execWechatSDKDriverScreenshot },
			{ "WechatSDKDriverSendImageToTimeline", &UWechatSDKDriverBPLibrary::execWechatSDKDriverSendImageToTimeline },
			{ "WechatSDKDriverSendTextToTimeline", &UWechatSDKDriverBPLibrary::execWechatSDKDriverSendTextToTimeline },
			{ "WechatSDKDriverShareTextToTimeline", &UWechatSDKDriverBPLibrary::execWechatSDKDriverShareTextToTimeline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles_Statics
	{
		struct WechatSDKDriverBPLibrary_eventGetFolderFiles_Parms
		{
			FString Path;
			TArray<FString> Files;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WechatSDKDriverBPLibrary_eventGetFolderFiles_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WechatSDKDriverBPLibrary_eventGetFolderFiles_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles_Statics::NewProp_Files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles_Statics::NewProp_Files,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jay.WechatSDKDriver" },
		{ "Comment", "/*\n\x09UFUNCTION(BlueprintCallable, Category = \"Jay.Utility\")\n\x09""bool SaveBitmapAsPNG(int32 sizeX, int32 sizeY, const TArray<FColor>& bitmapData, const FString& filePath);\n\x09\n\x09UFUNCTION(BlueprintCallable, Category = \"Jay.Utility\")\n\x09void GetShot(FString path);\n\n\x09UFUNCTION(BlueprintCallable, Category = \"Jay.Utility\")\n\x09void OnScreenShotCaptured(int32 InSizeX, int32 InSizeY, const TArray<FColor>& InImageData);\n\n\x09static FString cachedScreenShotLocation;\n\x09*/" },
		{ "ModuleRelativePath", "Public/WechatSDKDriverBPLibrary.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Jay.Utility\")\nbool SaveBitmapAsPNG(int32 sizeX, int32 sizeY, const TArray<FColor>& bitmapData, const FString& filePath);\n\nUFUNCTION(BlueprintCallable, Category = \"Jay.Utility\")\nvoid GetShot(FString path);\n\nUFUNCTION(BlueprintCallable, Category = \"Jay.Utility\")\nvoid OnScreenShotCaptured(int32 InSizeX, int32 InSizeY, const TArray<FColor>& InImageData);\n\nstatic FString cachedScreenShotLocation;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWechatSDKDriverBPLibrary, nullptr, "GetFolderFiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles_Statics::WechatSDKDriverBPLibrary_eventGetFolderFiles_Parms), Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot_Statics
	{
		struct WechatSDKDriverBPLibrary_eventGetLatestScreenshot_Parms
		{
			TArray<FString> Files;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WechatSDKDriverBPLibrary_eventGetLatestScreenshot_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WechatSDKDriverBPLibrary_eventGetLatestScreenshot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot_Statics::NewProp_Files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot_Statics::NewProp_Files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jay.WechatSDKDriver" },
		{ "ModuleRelativePath", "Public/WechatSDKDriverBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWechatSDKDriverBPLibrary, nullptr, "GetLatestScreenshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot_Statics::WechatSDKDriverBPLibrary_eventGetLatestScreenshot_Parms), Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWechatSDKDriverBPLibrary_LoadImageAsTexture2D_Statics
	{
		struct WechatSDKDriverBPLibrary_eventLoadImageAsTexture2D_Parms
		{
			FString Filename;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_LoadImageAsTexture2D_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WechatSDKDriverBPLibrary_eventLoadImageAsTexture2D_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_LoadImageAsTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WechatSDKDriverBPLibrary_eventLoadImageAsTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWechatSDKDriverBPLibrary_LoadImageAsTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWechatSDKDriverBPLibrary_LoadImageAsTexture2D_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWechatSDKDriverBPLibrary_LoadImageAsTexture2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWechatSDKDriverBPLibrary_LoadImageAsTexture2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jay.Utility" },
		{ "Comment", "/*UFUNCTION(BlueprintCallable, Category = \"Jay.Utility\")\n\x09static void SaveTexture2DDebug(UTexture2D* PTexture, FString Filename);*/" },
		{ "ModuleRelativePath", "Public/WechatSDKDriverBPLibrary.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Jay.Utility\")\n       static void SaveTexture2DDebug(UTexture2D* PTexture, FString Filename);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_LoadImageAsTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWechatSDKDriverBPLibrary, nullptr, "LoadImageAsTexture2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_LoadImageAsTexture2D_Statics::WechatSDKDriverBPLibrary_eventLoadImageAsTexture2D_Parms), Z_Construct_UFunction_UWechatSDKDriverBPLibrary_LoadImageAsTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_LoadImageAsTexture2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_LoadImageAsTexture2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_LoadImageAsTexture2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWechatSDKDriverBPLibrary_LoadImageAsTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWechatSDKDriverBPLibrary_LoadImageAsTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverInitWechatSdk_Statics
	{
		struct WechatSDKDriverBPLibrary_eventWechatSDKDriverInitWechatSdk_Parms
		{
			FString wechatAppId;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_wechatAppId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverInitWechatSdk_Statics::NewProp_wechatAppId = { "wechatAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WechatSDKDriverBPLibrary_eventWechatSDKDriverInitWechatSdk_Parms, wechatAppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverInitWechatSdk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverInitWechatSdk_Statics::NewProp_wechatAppId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverInitWechatSdk_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jay.WechatSDKDriver" },
		{ "DisplayName", "Execute init wechat sdk function" },
		{ "Keywords", "WechatSDKDriver init wechat sdk testing" },
		{ "ModuleRelativePath", "Public/WechatSDKDriverBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverInitWechatSdk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWechatSDKDriverBPLibrary, nullptr, "WechatSDKDriverInitWechatSdk", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverInitWechatSdk_Statics::WechatSDKDriverBPLibrary_eventWechatSDKDriverInitWechatSdk_Parms), Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverInitWechatSdk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverInitWechatSdk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverInitWechatSdk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverInitWechatSdk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverInitWechatSdk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverInitWechatSdk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverPrintLog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverPrintLog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jay.WechatSDKDriver" },
		{ "DisplayName", "Execute Sample print log function" },
		{ "Keywords", "WechatSDKDriver sample print log testing" },
		{ "ModuleRelativePath", "Public/WechatSDKDriverBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverPrintLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWechatSDKDriverBPLibrary, nullptr, "WechatSDKDriverPrintLog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverPrintLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverPrintLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverPrintLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverPrintLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSampleFunction_Statics
	{
		struct WechatSDKDriverBPLibrary_eventWechatSDKDriverSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WechatSDKDriverBPLibrary_eventWechatSDKDriverSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WechatSDKDriverBPLibrary_eventWechatSDKDriverSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSampleFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSampleFunction_Statics::NewProp_Param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jay.WechatSDKDriver" },
		{ "DisplayName", "Execute Sample call JNI function" },
		{ "Keywords", "WechatSDKDriver sample test testing" },
		{ "ModuleRelativePath", "Public/WechatSDKDriverBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWechatSDKDriverBPLibrary, nullptr, "WechatSDKDriverSampleFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSampleFunction_Statics::WechatSDKDriverBPLibrary_eventWechatSDKDriverSampleFunction_Parms), Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverScreenshot_Statics
	{
		struct WechatSDKDriverBPLibrary_eventWechatSDKDriverScreenshot_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WechatSDKDriverBPLibrary_eventWechatSDKDriverScreenshot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverScreenshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverScreenshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jay.WechatSDKDriver" },
		{ "DisplayName", "Execute screen shot" },
		{ "Keywords", "WechatSDKDriver screen shot" },
		{ "ModuleRelativePath", "Public/WechatSDKDriverBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWechatSDKDriverBPLibrary, nullptr, "WechatSDKDriverScreenshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverScreenshot_Statics::WechatSDKDriverBPLibrary_eventWechatSDKDriverScreenshot_Parms), Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendImageToTimeline_Statics
	{
		struct WechatSDKDriverBPLibrary_eventWechatSDKDriverSendImageToTimeline_Parms
		{
			FString imagePath;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_imagePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendImageToTimeline_Statics::NewProp_imagePath = { "imagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WechatSDKDriverBPLibrary_eventWechatSDKDriverSendImageToTimeline_Parms, imagePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendImageToTimeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendImageToTimeline_Statics::NewProp_imagePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendImageToTimeline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jay.WechatSDKDriver" },
		{ "DisplayName", "Execute send image to wechat timeline function" },
		{ "Keywords", "WechatSDKDriver send image to wechat timeline testing" },
		{ "ModuleRelativePath", "Public/WechatSDKDriverBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendImageToTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWechatSDKDriverBPLibrary, nullptr, "WechatSDKDriverSendImageToTimeline", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendImageToTimeline_Statics::WechatSDKDriverBPLibrary_eventWechatSDKDriverSendImageToTimeline_Parms), Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendImageToTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendImageToTimeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendImageToTimeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendImageToTimeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendImageToTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendImageToTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendTextToTimeline_Statics
	{
		struct WechatSDKDriverBPLibrary_eventWechatSDKDriverSendTextToTimeline_Parms
		{
			FString text;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendTextToTimeline_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WechatSDKDriverBPLibrary_eventWechatSDKDriverSendTextToTimeline_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendTextToTimeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendTextToTimeline_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendTextToTimeline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jay.WechatSDKDriver" },
		{ "DisplayName", "Execute send text to wechat timeline function" },
		{ "Keywords", "WechatSDKDriver send text to wechat timeline testing" },
		{ "ModuleRelativePath", "Public/WechatSDKDriverBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendTextToTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWechatSDKDriverBPLibrary, nullptr, "WechatSDKDriverSendTextToTimeline", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendTextToTimeline_Statics::WechatSDKDriverBPLibrary_eventWechatSDKDriverSendTextToTimeline_Parms), Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendTextToTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendTextToTimeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendTextToTimeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendTextToTimeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendTextToTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendTextToTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverShareTextToTimeline_Statics
	{
		struct WechatSDKDriverBPLibrary_eventWechatSDKDriverShareTextToTimeline_Parms
		{
			FString text;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverShareTextToTimeline_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WechatSDKDriverBPLibrary_eventWechatSDKDriverShareTextToTimeline_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverShareTextToTimeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverShareTextToTimeline_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverShareTextToTimeline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Jay.WechatSDKDriver" },
		{ "DisplayName", "Execute share text to wechat timeline function" },
		{ "Keywords", "WechatSDKDriver share text to wechat timeline testing" },
		{ "ModuleRelativePath", "Public/WechatSDKDriverBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverShareTextToTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWechatSDKDriverBPLibrary, nullptr, "WechatSDKDriverShareTextToTimeline", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverShareTextToTimeline_Statics::WechatSDKDriverBPLibrary_eventWechatSDKDriverShareTextToTimeline_Parms), Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverShareTextToTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverShareTextToTimeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverShareTextToTimeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverShareTextToTimeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverShareTextToTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverShareTextToTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWechatSDKDriverBPLibrary);
	UClass* Z_Construct_UClass_UWechatSDKDriverBPLibrary_NoRegister()
	{
		return UWechatSDKDriverBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWechatSDKDriverBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWechatSDKDriverBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WechatSDKDriver,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWechatSDKDriverBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetFolderFiles, "GetFolderFiles" }, // 273471943
		{ &Z_Construct_UFunction_UWechatSDKDriverBPLibrary_GetLatestScreenshot, "GetLatestScreenshot" }, // 1710447051
		{ &Z_Construct_UFunction_UWechatSDKDriverBPLibrary_LoadImageAsTexture2D, "LoadImageAsTexture2D" }, // 1241380617
		{ &Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverInitWechatSdk, "WechatSDKDriverInitWechatSdk" }, // 2173453984
		{ &Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverPrintLog, "WechatSDKDriverPrintLog" }, // 3495601394
		{ &Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSampleFunction, "WechatSDKDriverSampleFunction" }, // 2063629035
		{ &Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverScreenshot, "WechatSDKDriverScreenshot" }, // 169514608
		{ &Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendImageToTimeline, "WechatSDKDriverSendImageToTimeline" }, // 2341034067
		{ &Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverSendTextToTimeline, "WechatSDKDriverSendTextToTimeline" }, // 3748991828
		{ &Z_Construct_UFunction_UWechatSDKDriverBPLibrary_WechatSDKDriverShareTextToTimeline, "WechatSDKDriverShareTextToTimeline" }, // 3341877670
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWechatSDKDriverBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "WechatSDKDriverBPLibrary.h" },
		{ "ModuleRelativePath", "Public/WechatSDKDriverBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWechatSDKDriverBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWechatSDKDriverBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWechatSDKDriverBPLibrary_Statics::ClassParams = {
		&UWechatSDKDriverBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWechatSDKDriverBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWechatSDKDriverBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWechatSDKDriverBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UWechatSDKDriverBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWechatSDKDriverBPLibrary.OuterSingleton, Z_Construct_UClass_UWechatSDKDriverBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWechatSDKDriverBPLibrary.OuterSingleton;
	}
	template<> WECHATSDKDRIVER_API UClass* StaticClass<UWechatSDKDriverBPLibrary>()
	{
		return UWechatSDKDriverBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWechatSDKDriverBPLibrary);
	struct Z_CompiledInDeferFile_FID_MyAndroidProject_Plugins_WechatSDKDriver_Source_WechatSDKDriver_Public_WechatSDKDriverBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyAndroidProject_Plugins_WechatSDKDriver_Source_WechatSDKDriver_Public_WechatSDKDriverBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWechatSDKDriverBPLibrary, UWechatSDKDriverBPLibrary::StaticClass, TEXT("UWechatSDKDriverBPLibrary"), &Z_Registration_Info_UClass_UWechatSDKDriverBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWechatSDKDriverBPLibrary), 3044509482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyAndroidProject_Plugins_WechatSDKDriver_Source_WechatSDKDriver_Public_WechatSDKDriverBPLibrary_h_1806966546(TEXT("/Script/WechatSDKDriver"),
		Z_CompiledInDeferFile_FID_MyAndroidProject_Plugins_WechatSDKDriver_Source_WechatSDKDriver_Public_WechatSDKDriverBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyAndroidProject_Plugins_WechatSDKDriver_Source_WechatSDKDriver_Public_WechatSDKDriverBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
