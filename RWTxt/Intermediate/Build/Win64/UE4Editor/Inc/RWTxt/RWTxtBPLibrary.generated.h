// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RWTXT_RWTxtBPLibrary_generated_h
#error "RWTxtBPLibrary.generated.h already included, missing '#pragma once' in RWTxtBPLibrary.h"
#endif
#define RWTXT_RWTxtBPLibrary_generated_h

#define HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_SPARSE_DATA
#define HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReWriteTxt); \
	DECLARE_FUNCTION(execWriteTxt); \
	DECLARE_FUNCTION(execReadTxtByLine); \
	DECLARE_FUNCTION(execReadTxt);


#define HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReWriteTxt); \
	DECLARE_FUNCTION(execWriteTxt); \
	DECLARE_FUNCTION(execReadTxtByLine); \
	DECLARE_FUNCTION(execReadTxt);


#define HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURWTxtBPLibrary(); \
	friend struct Z_Construct_UClass_URWTxtBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URWTxtBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RWTxt"), NO_API) \
	DECLARE_SERIALIZER(URWTxtBPLibrary)


#define HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesURWTxtBPLibrary(); \
	friend struct Z_Construct_UClass_URWTxtBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URWTxtBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RWTxt"), NO_API) \
	DECLARE_SERIALIZER(URWTxtBPLibrary)


#define HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URWTxtBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URWTxtBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URWTxtBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URWTxtBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URWTxtBPLibrary(URWTxtBPLibrary&&); \
	NO_API URWTxtBPLibrary(const URWTxtBPLibrary&); \
public:


#define HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URWTxtBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URWTxtBPLibrary(URWTxtBPLibrary&&); \
	NO_API URWTxtBPLibrary(const URWTxtBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URWTxtBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URWTxtBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URWTxtBPLibrary)


#define HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_10_PROLOG
#define HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_SPARSE_DATA \
	HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_RPC_WRAPPERS \
	HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_INCLASS \
	HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_SPARSE_DATA \
	HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RWTxtBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RWTXT_API UClass* StaticClass<class URWTxtBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RWTxt_Source_RWTxt_Public_RWTxtBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
