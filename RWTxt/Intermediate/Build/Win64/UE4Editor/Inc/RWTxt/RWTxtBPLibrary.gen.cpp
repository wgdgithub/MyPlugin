// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RWTxt/Public/RWTxtBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRWTxtBPLibrary() {}
// Cross Module References
	RWTXT_API UClass* Z_Construct_UClass_URWTxtBPLibrary_NoRegister();
	RWTXT_API UClass* Z_Construct_UClass_URWTxtBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RWTxt();
// End Cross Module References
	DEFINE_FUNCTION(URWTxtBPLibrary::execReWriteTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WriteContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URWTxtBPLibrary::ReWriteTxt(Z_Param_WriteContent,Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URWTxtBPLibrary::execWriteTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WriteContent);
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_UBOOL(Z_Param_bLineFeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URWTxtBPLibrary::WriteTxt(Z_Param_WriteContent,Z_Param_Path,Z_Param_bLineFeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URWTxtBPLibrary::execReadTxtByLine)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=URWTxtBPLibrary::ReadTxtByLine(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URWTxtBPLibrary::execReadTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URWTxtBPLibrary::ReadTxt(Z_Param_FileName);
		P_NATIVE_END;
	}
	void URWTxtBPLibrary::StaticRegisterNativesURWTxtBPLibrary()
	{
		UClass* Class = URWTxtBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadTxt", &URWTxtBPLibrary::execReadTxt },
			{ "ReadTxtByLine", &URWTxtBPLibrary::execReadTxtByLine },
			{ "ReWriteTxt", &URWTxtBPLibrary::execReWriteTxt },
			{ "WriteTxt", &URWTxtBPLibrary::execWriteTxt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URWTxtBPLibrary_ReadTxt_Statics
	{
		struct RWTxtBPLibrary_eventReadTxt_Parms
		{
			FString FileName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTxtBPLibrary_ReadTxt_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTxtBPLibrary_eventReadTxt_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTxtBPLibrary_ReadTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTxtBPLibrary_eventReadTxt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URWTxtBPLibrary_ReadTxt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtBPLibrary_ReadTxt_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtBPLibrary_ReadTxt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URWTxtBPLibrary_ReadTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "WGD_RWTxt" },
		{ "ModuleRelativePath", "Public/RWTxtBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URWTxtBPLibrary_ReadTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URWTxtBPLibrary, nullptr, "ReadTxt", nullptr, nullptr, sizeof(RWTxtBPLibrary_eventReadTxt_Parms), Z_Construct_UFunction_URWTxtBPLibrary_ReadTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URWTxtBPLibrary_ReadTxt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URWTxtBPLibrary_ReadTxt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URWTxtBPLibrary_ReadTxt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URWTxtBPLibrary_ReadTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URWTxtBPLibrary_ReadTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine_Statics
	{
		struct RWTxtBPLibrary_eventReadTxtByLine_Parms
		{
			FString FileName;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTxtBPLibrary_eventReadTxtByLine_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTxtBPLibrary_eventReadTxtByLine_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "WGD_RWTxt" },
		{ "ModuleRelativePath", "Public/RWTxtBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URWTxtBPLibrary, nullptr, "ReadTxtByLine", nullptr, nullptr, sizeof(RWTxtBPLibrary_eventReadTxtByLine_Parms), Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics
	{
		struct RWTxtBPLibrary_eventReWriteTxt_Parms
		{
			FString WriteContent;
			FString Path;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WriteContent;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics::NewProp_WriteContent = { "WriteContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTxtBPLibrary_eventReWriteTxt_Parms, WriteContent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTxtBPLibrary_eventReWriteTxt_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RWTxtBPLibrary_eventReWriteTxt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RWTxtBPLibrary_eventReWriteTxt_Parms), &Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics::NewProp_WriteContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "WGD_RWTxt" },
		{ "ModuleRelativePath", "Public/RWTxtBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URWTxtBPLibrary, nullptr, "ReWriteTxt", nullptr, nullptr, sizeof(RWTxtBPLibrary_eventReWriteTxt_Parms), Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics
	{
		struct RWTxtBPLibrary_eventWriteTxt_Parms
		{
			FString WriteContent;
			FString Path;
			bool bLineFeed;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WriteContent;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_bLineFeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLineFeed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::NewProp_WriteContent = { "WriteContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTxtBPLibrary_eventWriteTxt_Parms, WriteContent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RWTxtBPLibrary_eventWriteTxt_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::NewProp_bLineFeed_SetBit(void* Obj)
	{
		((RWTxtBPLibrary_eventWriteTxt_Parms*)Obj)->bLineFeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::NewProp_bLineFeed = { "bLineFeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RWTxtBPLibrary_eventWriteTxt_Parms), &Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::NewProp_bLineFeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RWTxtBPLibrary_eventWriteTxt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RWTxtBPLibrary_eventWriteTxt_Parms), &Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::NewProp_WriteContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::NewProp_bLineFeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "WGD_RWTxt" },
		{ "ModuleRelativePath", "Public/RWTxtBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URWTxtBPLibrary, nullptr, "WriteTxt", nullptr, nullptr, sizeof(RWTxtBPLibrary_eventWriteTxt_Parms), Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URWTxtBPLibrary_NoRegister()
	{
		return URWTxtBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URWTxtBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URWTxtBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RWTxt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URWTxtBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URWTxtBPLibrary_ReadTxt, "ReadTxt" }, // 2146838335
		{ &Z_Construct_UFunction_URWTxtBPLibrary_ReadTxtByLine, "ReadTxtByLine" }, // 155664539
		{ &Z_Construct_UFunction_URWTxtBPLibrary_ReWriteTxt, "ReWriteTxt" }, // 3647311530
		{ &Z_Construct_UFunction_URWTxtBPLibrary_WriteTxt, "WriteTxt" }, // 24264778
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URWTxtBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RWTxtBPLibrary.h" },
		{ "ModuleRelativePath", "Public/RWTxtBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URWTxtBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URWTxtBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URWTxtBPLibrary_Statics::ClassParams = {
		&URWTxtBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URWTxtBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URWTxtBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URWTxtBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URWTxtBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URWTxtBPLibrary, 828800414);
	template<> RWTXT_API UClass* StaticClass<URWTxtBPLibrary>()
	{
		return URWTxtBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URWTxtBPLibrary(Z_Construct_UClass_URWTxtBPLibrary, &URWTxtBPLibrary::StaticClass, TEXT("/Script/RWTxt"), TEXT("URWTxtBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URWTxtBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
