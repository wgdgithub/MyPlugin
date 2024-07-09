// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeginnerGuid/Public/BeginnerGuidUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeginnerGuidUserWidget() {}
// Cross Module References
	BEGINNERGUID_API UEnum* Z_Construct_UEnum_BeginnerGuid_EGuidType();
	UPackage* Z_Construct_UPackage__Script_BeginnerGuid();
	BEGINNERGUID_API UClass* Z_Construct_UClass_UBeginnerGuidWidget_NoRegister();
	BEGINNERGUID_API UClass* Z_Construct_UClass_UBeginnerGuidWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBackgroundBlur_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
// End Cross Module References
	static UEnum* EGuidType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BeginnerGuid_EGuidType, Z_Construct_UPackage__Script_BeginnerGuid(), TEXT("EGuidType"));
		}
		return Singleton;
	}
	template<> BEGINNERGUID_API UEnum* StaticEnum<EGuidType>()
	{
		return EGuidType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGuidType(EGuidType_StaticEnum, TEXT("/Script/BeginnerGuid"), TEXT("EGuidType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BeginnerGuid_EGuidType_Hash() { return 3445890668U; }
	UEnum* Z_Construct_UEnum_BeginnerGuid_EGuidType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BeginnerGuid();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGuidType"), 0, Get_Z_Construct_UEnum_BeginnerGuid_EGuidType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGuidType::Message", (int64)EGuidType::Message },
				{ "EGuidType::Video", (int64)EGuidType::Video },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Message.Name", "EGuidType::Message" },
				{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
				{ "Video.Name", "EGuidType::Video" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BeginnerGuid,
				nullptr,
				"EGuidType",
				"EGuidType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UBeginnerGuidWidget::execHoldingCanceled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HoldingCanceled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBeginnerGuidWidget::execHoldingStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HoldingStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBeginnerGuidWidget::execSetupVideo)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InHoldTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupVideo(Z_Param_InHoldTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBeginnerGuidWidget::execUpdateVideoText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_NewContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVideoText(Z_Param_NewContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBeginnerGuidWidget::execShowVideoGuid)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InTitle);
		P_GET_PROPERTY(FTextProperty,Z_Param_InContent);
		P_GET_OBJECT(UObject,Z_Param_InMedia);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowVideoGuid(Z_Param_InTitle,Z_Param_InContent,Z_Param_InMedia);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBeginnerGuidWidget::execUpdateMessageText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_NewContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMessageText(Z_Param_NewContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBeginnerGuidWidget::execHideMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideMessage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBeginnerGuidWidget::execShowMessage)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMessage(Z_Param_InContent);
		P_NATIVE_END;
	}
	void UBeginnerGuidWidget::StaticRegisterNativesUBeginnerGuidWidget()
	{
		UClass* Class = UBeginnerGuidWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideMessage", &UBeginnerGuidWidget::execHideMessage },
			{ "HoldingCanceled", &UBeginnerGuidWidget::execHoldingCanceled },
			{ "HoldingStarted", &UBeginnerGuidWidget::execHoldingStarted },
			{ "SetupVideo", &UBeginnerGuidWidget::execSetupVideo },
			{ "ShowMessage", &UBeginnerGuidWidget::execShowMessage },
			{ "ShowVideoGuid", &UBeginnerGuidWidget::execShowVideoGuid },
			{ "UpdateMessageText", &UBeginnerGuidWidget::execUpdateMessageText },
			{ "UpdateVideoText", &UBeginnerGuidWidget::execUpdateVideoText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBeginnerGuidWidget_HideMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBeginnerGuidWidget_HideMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextGuid" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBeginnerGuidWidget_HideMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBeginnerGuidWidget, nullptr, "HideMessage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBeginnerGuidWidget_HideMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeginnerGuidWidget_HideMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBeginnerGuidWidget_HideMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBeginnerGuidWidget_HideMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBeginnerGuidWidget_HoldingCanceled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBeginnerGuidWidget_HoldingCanceled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBeginnerGuidWidget_HoldingCanceled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBeginnerGuidWidget, nullptr, "HoldingCanceled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBeginnerGuidWidget_HoldingCanceled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeginnerGuidWidget_HoldingCanceled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBeginnerGuidWidget_HoldingCanceled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBeginnerGuidWidget_HoldingCanceled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBeginnerGuidWidget_HoldingStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBeginnerGuidWidget_HoldingStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBeginnerGuidWidget_HoldingStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBeginnerGuidWidget, nullptr, "HoldingStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBeginnerGuidWidget_HoldingStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeginnerGuidWidget_HoldingStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBeginnerGuidWidget_HoldingStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBeginnerGuidWidget_HoldingStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBeginnerGuidWidget_SetupVideo_Statics
	{
		struct BeginnerGuidWidget_eventSetupVideo_Parms
		{
			float InHoldTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InHoldTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBeginnerGuidWidget_SetupVideo_Statics::NewProp_InHoldTime = { "InHoldTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BeginnerGuidWidget_eventSetupVideo_Parms, InHoldTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBeginnerGuidWidget_SetupVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeginnerGuidWidget_SetupVideo_Statics::NewProp_InHoldTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBeginnerGuidWidget_SetupVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "VideoGuid" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBeginnerGuidWidget_SetupVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBeginnerGuidWidget, nullptr, "SetupVideo", nullptr, nullptr, sizeof(BeginnerGuidWidget_eventSetupVideo_Parms), Z_Construct_UFunction_UBeginnerGuidWidget_SetupVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeginnerGuidWidget_SetupVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBeginnerGuidWidget_SetupVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeginnerGuidWidget_SetupVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBeginnerGuidWidget_SetupVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBeginnerGuidWidget_SetupVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBeginnerGuidWidget_ShowMessage_Statics
	{
		struct BeginnerGuidWidget_eventShowMessage_Parms
		{
			FText InContent;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBeginnerGuidWidget_ShowMessage_Statics::NewProp_InContent = { "InContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BeginnerGuidWidget_eventShowMessage_Parms, InContent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBeginnerGuidWidget_ShowMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeginnerGuidWidget_ShowMessage_Statics::NewProp_InContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBeginnerGuidWidget_ShowMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextGuid" },
		{ "Comment", "/** Text Guid */" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
		{ "ToolTip", "Text Guid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBeginnerGuidWidget_ShowMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBeginnerGuidWidget, nullptr, "ShowMessage", nullptr, nullptr, sizeof(BeginnerGuidWidget_eventShowMessage_Parms), Z_Construct_UFunction_UBeginnerGuidWidget_ShowMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeginnerGuidWidget_ShowMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBeginnerGuidWidget_ShowMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeginnerGuidWidget_ShowMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBeginnerGuidWidget_ShowMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBeginnerGuidWidget_ShowMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid_Statics
	{
		struct BeginnerGuidWidget_eventShowVideoGuid_Parms
		{
			FName InTitle;
			FText InContent;
			UObject* InMedia;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InTitle;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InContent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMedia;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid_Statics::NewProp_InTitle = { "InTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BeginnerGuidWidget_eventShowVideoGuid_Parms, InTitle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid_Statics::NewProp_InContent = { "InContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BeginnerGuidWidget_eventShowVideoGuid_Parms, InContent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid_Statics::NewProp_InMedia = { "InMedia", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BeginnerGuidWidget_eventShowVideoGuid_Parms, InMedia), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid_Statics::NewProp_InTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid_Statics::NewProp_InContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid_Statics::NewProp_InMedia,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "VideoGuid" },
		{ "Comment", "/** Video Guid */" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
		{ "ToolTip", "Video Guid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBeginnerGuidWidget, nullptr, "ShowVideoGuid", nullptr, nullptr, sizeof(BeginnerGuidWidget_eventShowVideoGuid_Parms), Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBeginnerGuidWidget_UpdateMessageText_Statics
	{
		struct BeginnerGuidWidget_eventUpdateMessageText_Parms
		{
			FText NewContent;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NewContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBeginnerGuidWidget_UpdateMessageText_Statics::NewProp_NewContent = { "NewContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BeginnerGuidWidget_eventUpdateMessageText_Parms, NewContent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBeginnerGuidWidget_UpdateMessageText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeginnerGuidWidget_UpdateMessageText_Statics::NewProp_NewContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBeginnerGuidWidget_UpdateMessageText_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextGuid" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBeginnerGuidWidget_UpdateMessageText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBeginnerGuidWidget, nullptr, "UpdateMessageText", nullptr, nullptr, sizeof(BeginnerGuidWidget_eventUpdateMessageText_Parms), Z_Construct_UFunction_UBeginnerGuidWidget_UpdateMessageText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeginnerGuidWidget_UpdateMessageText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBeginnerGuidWidget_UpdateMessageText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeginnerGuidWidget_UpdateMessageText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBeginnerGuidWidget_UpdateMessageText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBeginnerGuidWidget_UpdateMessageText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBeginnerGuidWidget_UpdateVideoText_Statics
	{
		struct BeginnerGuidWidget_eventUpdateVideoText_Parms
		{
			FText NewContent;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NewContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBeginnerGuidWidget_UpdateVideoText_Statics::NewProp_NewContent = { "NewContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BeginnerGuidWidget_eventUpdateVideoText_Parms, NewContent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBeginnerGuidWidget_UpdateVideoText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeginnerGuidWidget_UpdateVideoText_Statics::NewProp_NewContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBeginnerGuidWidget_UpdateVideoText_Statics::Function_MetaDataParams[] = {
		{ "Category", "VideoGuid" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBeginnerGuidWidget_UpdateVideoText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBeginnerGuidWidget, nullptr, "UpdateVideoText", nullptr, nullptr, sizeof(BeginnerGuidWidget_eventUpdateVideoText_Parms), Z_Construct_UFunction_UBeginnerGuidWidget_UpdateVideoText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeginnerGuidWidget_UpdateVideoText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBeginnerGuidWidget_UpdateVideoText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeginnerGuidWidget_UpdateVideoText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBeginnerGuidWidget_UpdateVideoText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBeginnerGuidWidget_UpdateVideoText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBeginnerGuidWidget_NoRegister()
	{
		return UBeginnerGuidWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBeginnerGuidWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MessageText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowMessageAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShowMessageAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideMessageAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HideMessageAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuidCanvasPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GuidCanvasPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blur_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blur;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoGuidText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoGuidText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoMedia_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoMedia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfirmationProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConfirmationProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfirmButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConfirmButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowVideoAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShowVideoAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideVideoAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HideVideoAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentGuidType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGuidType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentGuidType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBeginnerGuidWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_BeginnerGuid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBeginnerGuidWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBeginnerGuidWidget_HideMessage, "HideMessage" }, // 1049750714
		{ &Z_Construct_UFunction_UBeginnerGuidWidget_HoldingCanceled, "HoldingCanceled" }, // 3268439023
		{ &Z_Construct_UFunction_UBeginnerGuidWidget_HoldingStarted, "HoldingStarted" }, // 3740670142
		{ &Z_Construct_UFunction_UBeginnerGuidWidget_SetupVideo, "SetupVideo" }, // 2430037788
		{ &Z_Construct_UFunction_UBeginnerGuidWidget_ShowMessage, "ShowMessage" }, // 41766331
		{ &Z_Construct_UFunction_UBeginnerGuidWidget_ShowVideoGuid, "ShowVideoGuid" }, // 2959691526
		{ &Z_Construct_UFunction_UBeginnerGuidWidget_UpdateMessageText, "UpdateMessageText" }, // 592157588
		{ &Z_Construct_UFunction_UBeginnerGuidWidget_UpdateVideoText, "UpdateVideoText" }, // 772879096
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BeginnerGuidUserWidget.h" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_MessageText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TextGuid" },
		{ "Comment", "/** Text Guid */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
		{ "ToolTip", "Text Guid" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_MessageText = { "MessageText", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeginnerGuidWidget, MessageText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_MessageText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_MessageText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_BoxOverlay_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TextGuid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_BoxOverlay = { "BoxOverlay", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeginnerGuidWidget, BoxOverlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_BoxOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_BoxOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ShowMessageAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "TextGuidAnimations" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ShowMessageAnim = { "ShowMessageAnim", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeginnerGuidWidget, ShowMessageAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ShowMessageAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ShowMessageAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_HideMessageAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "TextGuidAnimations" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_HideMessageAnim = { "HideMessageAnim", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeginnerGuidWidget, HideMessageAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_HideMessageAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_HideMessageAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_GuidCanvasPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VideoGuid" },
		{ "Comment", "/** Video Guid */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
		{ "ToolTip", "Video Guid" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_GuidCanvasPanel = { "GuidCanvasPanel", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeginnerGuidWidget, GuidCanvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_GuidCanvasPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_GuidCanvasPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_Blur_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VideoGuid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_Blur = { "Blur", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeginnerGuidWidget, Blur), Z_Construct_UClass_UBackgroundBlur_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_Blur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_Blur_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_VideoGuidText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VideoGuid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_VideoGuidText = { "VideoGuidText", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeginnerGuidWidget, VideoGuidText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_VideoGuidText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_VideoGuidText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_TitleText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VideoGuid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeginnerGuidWidget, TitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_TitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_TitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_VideoMedia_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VideoGuid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_VideoMedia = { "VideoMedia", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeginnerGuidWidget, VideoMedia), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_VideoMedia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_VideoMedia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ConfirmationProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VideoGuid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ConfirmationProgressBar = { "ConfirmationProgressBar", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeginnerGuidWidget, ConfirmationProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ConfirmationProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ConfirmationProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ConfirmButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VideoGuid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ConfirmButton = { "ConfirmButton", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeginnerGuidWidget, ConfirmButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ConfirmButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ConfirmButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ShowVideoAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "VideoGuidAnimations" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ShowVideoAnim = { "ShowVideoAnim", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeginnerGuidWidget, ShowVideoAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ShowVideoAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ShowVideoAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_HideVideoAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "VideoGuidAnimations" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_HideVideoAnim = { "HideVideoAnim", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeginnerGuidWidget, HideVideoAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_HideVideoAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_HideVideoAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_MediaMaterial_MetaData[] = {
		{ "Category", "VideoGuidSettings" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_MediaMaterial = { "MediaMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeginnerGuidWidget, MediaMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_MediaMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_MediaMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "VideoGuidSettings" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeginnerGuidWidget, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_MediaPlayer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_CurrentGuidType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_CurrentGuidType_MetaData[] = {
		{ "Category", "GuidType" },
		{ "Comment", "/** ~End Video Guid */" },
		{ "ModuleRelativePath", "Public/BeginnerGuidUserWidget.h" },
		{ "ToolTip", "~End Video Guid" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_CurrentGuidType = { "CurrentGuidType", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeginnerGuidWidget, CurrentGuidType), Z_Construct_UEnum_BeginnerGuid_EGuidType, METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_CurrentGuidType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_CurrentGuidType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBeginnerGuidWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_MessageText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_BoxOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ShowMessageAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_HideMessageAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_GuidCanvasPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_Blur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_VideoGuidText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_TitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_VideoMedia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ConfirmationProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ConfirmButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_ShowVideoAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_HideVideoAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_MediaMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_MediaPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_CurrentGuidType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeginnerGuidWidget_Statics::NewProp_CurrentGuidType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBeginnerGuidWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBeginnerGuidWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBeginnerGuidWidget_Statics::ClassParams = {
		&UBeginnerGuidWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBeginnerGuidWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBeginnerGuidWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBeginnerGuidWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBeginnerGuidWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBeginnerGuidWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBeginnerGuidWidget, 2563463740);
	template<> BEGINNERGUID_API UClass* StaticClass<UBeginnerGuidWidget>()
	{
		return UBeginnerGuidWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBeginnerGuidWidget(Z_Construct_UClass_UBeginnerGuidWidget, &UBeginnerGuidWidget::StaticClass, TEXT("/Script/BeginnerGuid"), TEXT("UBeginnerGuidWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBeginnerGuidWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
