// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef BEGINNERGUID_BeginnerGuidUserWidget_generated_h
#error "BeginnerGuidUserWidget.generated.h already included, missing '#pragma once' in BeginnerGuidUserWidget.h"
#endif
#define BEGINNERGUID_BeginnerGuidUserWidget_generated_h

#define Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_SPARSE_DATA
#define Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHoldingCanceled); \
	DECLARE_FUNCTION(execHoldingStarted); \
	DECLARE_FUNCTION(execSetupVideo); \
	DECLARE_FUNCTION(execUpdateVideoText); \
	DECLARE_FUNCTION(execShowVideoGuid); \
	DECLARE_FUNCTION(execUpdateMessageText); \
	DECLARE_FUNCTION(execHideMessage); \
	DECLARE_FUNCTION(execShowMessage);


#define Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHoldingCanceled); \
	DECLARE_FUNCTION(execHoldingStarted); \
	DECLARE_FUNCTION(execSetupVideo); \
	DECLARE_FUNCTION(execUpdateVideoText); \
	DECLARE_FUNCTION(execShowVideoGuid); \
	DECLARE_FUNCTION(execUpdateMessageText); \
	DECLARE_FUNCTION(execHideMessage); \
	DECLARE_FUNCTION(execShowMessage);


#define Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBeginnerGuidWidget(); \
	friend struct Z_Construct_UClass_UBeginnerGuidWidget_Statics; \
public: \
	DECLARE_CLASS(UBeginnerGuidWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BeginnerGuid"), NO_API) \
	DECLARE_SERIALIZER(UBeginnerGuidWidget)


#define Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUBeginnerGuidWidget(); \
	friend struct Z_Construct_UClass_UBeginnerGuidWidget_Statics; \
public: \
	DECLARE_CLASS(UBeginnerGuidWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BeginnerGuid"), NO_API) \
	DECLARE_SERIALIZER(UBeginnerGuidWidget)


#define Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBeginnerGuidWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBeginnerGuidWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBeginnerGuidWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBeginnerGuidWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBeginnerGuidWidget(UBeginnerGuidWidget&&); \
	NO_API UBeginnerGuidWidget(const UBeginnerGuidWidget&); \
public:


#define Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBeginnerGuidWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBeginnerGuidWidget(UBeginnerGuidWidget&&); \
	NO_API UBeginnerGuidWidget(const UBeginnerGuidWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBeginnerGuidWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBeginnerGuidWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBeginnerGuidWidget)


#define Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MessageText() { return STRUCT_OFFSET(UBeginnerGuidWidget, MessageText); } \
	FORCEINLINE static uint32 __PPO__BoxOverlay() { return STRUCT_OFFSET(UBeginnerGuidWidget, BoxOverlay); } \
	FORCEINLINE static uint32 __PPO__ShowMessageAnim() { return STRUCT_OFFSET(UBeginnerGuidWidget, ShowMessageAnim); } \
	FORCEINLINE static uint32 __PPO__HideMessageAnim() { return STRUCT_OFFSET(UBeginnerGuidWidget, HideMessageAnim); } \
	FORCEINLINE static uint32 __PPO__GuidCanvasPanel() { return STRUCT_OFFSET(UBeginnerGuidWidget, GuidCanvasPanel); } \
	FORCEINLINE static uint32 __PPO__Blur() { return STRUCT_OFFSET(UBeginnerGuidWidget, Blur); } \
	FORCEINLINE static uint32 __PPO__VideoGuidText() { return STRUCT_OFFSET(UBeginnerGuidWidget, VideoGuidText); } \
	FORCEINLINE static uint32 __PPO__TitleText() { return STRUCT_OFFSET(UBeginnerGuidWidget, TitleText); } \
	FORCEINLINE static uint32 __PPO__VideoMedia() { return STRUCT_OFFSET(UBeginnerGuidWidget, VideoMedia); } \
	FORCEINLINE static uint32 __PPO__ConfirmationProgressBar() { return STRUCT_OFFSET(UBeginnerGuidWidget, ConfirmationProgressBar); } \
	FORCEINLINE static uint32 __PPO__ConfirmButton() { return STRUCT_OFFSET(UBeginnerGuidWidget, ConfirmButton); } \
	FORCEINLINE static uint32 __PPO__ShowVideoAnim() { return STRUCT_OFFSET(UBeginnerGuidWidget, ShowVideoAnim); } \
	FORCEINLINE static uint32 __PPO__HideVideoAnim() { return STRUCT_OFFSET(UBeginnerGuidWidget, HideVideoAnim); } \
	FORCEINLINE static uint32 __PPO__MediaMaterial() { return STRUCT_OFFSET(UBeginnerGuidWidget, MediaMaterial); } \
	FORCEINLINE static uint32 __PPO__MediaPlayer() { return STRUCT_OFFSET(UBeginnerGuidWidget, MediaPlayer); } \
	FORCEINLINE static uint32 __PPO__CurrentGuidType() { return STRUCT_OFFSET(UBeginnerGuidWidget, CurrentGuidType); }


#define Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_25_PROLOG
#define Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_PRIVATE_PROPERTY_OFFSET \
	Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_SPARSE_DATA \
	Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_RPC_WRAPPERS \
	Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_INCLASS \
	Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_PRIVATE_PROPERTY_OFFSET \
	Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_SPARSE_DATA \
	Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_INCLASS_NO_PURE_DECLS \
	Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEGINNERGUID_API UClass* StaticClass<class UBeginnerGuidWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Guid_Plugins_BeginnerGuid_Source_BeginnerGuid_Public_BeginnerGuidUserWidget_h


#define FOREACH_ENUM_EGUIDTYPE(op) \
	op(EGuidType::Message) \
	op(EGuidType::Video) 

enum class EGuidType : uint8;
template<> BEGINNERGUID_API UEnum* StaticEnum<EGuidType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
