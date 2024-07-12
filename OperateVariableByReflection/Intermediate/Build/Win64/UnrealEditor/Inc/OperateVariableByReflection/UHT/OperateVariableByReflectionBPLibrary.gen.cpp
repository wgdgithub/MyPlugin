// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperateVariableByReflection/Public/OperateVariableByReflectionBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperateVariableByReflectionBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
OPERATEVARIABLEBYREFLECTION_API UClass* Z_Construct_UClass_UOperateVariableByReflectionBPLibrary();
OPERATEVARIABLEBYREFLECTION_API UClass* Z_Construct_UClass_UOperateVariableByReflectionBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OperateVariableByReflection();
// End Cross Module References

// Begin Class UOperateVariableByReflectionBPLibrary Function CallObjNoParamNoResultFunByName
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventCallObjNoParamNoResultFunByName_Parms
	{
		UObject* Obj;
		FName FunctionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|Func" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventCallObjNoParamNoResultFunByName_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventCallObjNoParamNoResultFunByName_Parms, FunctionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName_Statics::NewProp_FunctionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "CallObjNoParamNoResultFunByName", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName_Statics::OperateVariableByReflectionBPLibrary_eventCallObjNoParamNoResultFunByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName_Statics::OperateVariableByReflectionBPLibrary_eventCallObjNoParamNoResultFunByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execCallObjNoParamNoResultFunByName)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_FunctionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOperateVariableByReflectionBPLibrary::CallObjNoParamNoResultFunByName(Z_Param_Obj,Z_Param_FunctionName);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function CallObjNoParamNoResultFunByName

// Begin Class UOperateVariableByReflectionBPLibrary Function GetAllEnum
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventGetAllEnum_Parms
	{
		TArray<UObject*> ResultEnum;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|All" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultEnum_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultEnum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum_Statics::NewProp_ResultEnum_Inner = { "ResultEnum", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum_Statics::NewProp_ResultEnum = { "ResultEnum", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetAllEnum_Parms, ResultEnum), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum_Statics::NewProp_ResultEnum_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum_Statics::NewProp_ResultEnum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "GetAllEnum", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum_Statics::OperateVariableByReflectionBPLibrary_eventGetAllEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum_Statics::OperateVariableByReflectionBPLibrary_eventGetAllEnum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execGetAllEnum)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_ResultEnum);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOperateVariableByReflectionBPLibrary::GetAllEnum(Z_Param_Out_ResultEnum);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function GetAllEnum

// Begin Class UOperateVariableByReflectionBPLibrary Function GetAllStruct
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventGetAllStruct_Parms
	{
		TArray<UObject*> ResultStruct;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|All" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultStruct_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct_Statics::NewProp_ResultStruct_Inner = { "ResultStruct", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct_Statics::NewProp_ResultStruct = { "ResultStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetAllStruct_Parms, ResultStruct), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct_Statics::NewProp_ResultStruct_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct_Statics::NewProp_ResultStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "GetAllStruct", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct_Statics::OperateVariableByReflectionBPLibrary_eventGetAllStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct_Statics::OperateVariableByReflectionBPLibrary_eventGetAllStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execGetAllStruct)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_ResultStruct);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOperateVariableByReflectionBPLibrary::GetAllStruct(Z_Param_Out_ResultStruct);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function GetAllStruct

// Begin Class UOperateVariableByReflectionBPLibrary Function GetAllUClass
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventGetAllUClass_Parms
	{
		TArray<UObject*> ResultClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|All" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultClass_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass_Statics::NewProp_ResultClass_Inner = { "ResultClass", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass_Statics::NewProp_ResultClass = { "ResultClass", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetAllUClass_Parms, ResultClass), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass_Statics::NewProp_ResultClass_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass_Statics::NewProp_ResultClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "GetAllUClass", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass_Statics::OperateVariableByReflectionBPLibrary_eventGetAllUClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass_Statics::OperateVariableByReflectionBPLibrary_eventGetAllUClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execGetAllUClass)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_ResultClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOperateVariableByReflectionBPLibrary::GetAllUClass(Z_Param_Out_ResultClass);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function GetAllUClass

// Begin Class UOperateVariableByReflectionBPLibrary Function GetBoolValue
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventGetBoolValue_Parms
	{
		UObject* Obj;
		FName PropertyName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|BoolType" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetBoolValue_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetBoolValue_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OperateVariableByReflectionBPLibrary_eventGetBoolValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperateVariableByReflectionBPLibrary_eventGetBoolValue_Parms), &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "GetBoolValue", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::OperateVariableByReflectionBPLibrary_eventGetBoolValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::OperateVariableByReflectionBPLibrary_eventGetBoolValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execGetBoolValue)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOperateVariableByReflectionBPLibrary::GetBoolValue(Z_Param_Obj,Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function GetBoolValue

// Begin Class UOperateVariableByReflectionBPLibrary Function GetClassObj
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventGetClassObj_Parms
	{
		FString ClassName;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|GetObj" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8\xe5\x90\x8d\xe7\xa7\xb0\xe5\x90\x8e\xe5\x8a\xa0\xe4\xb8\x8a \"_C\"\n" },
#endif
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8\xe5\x90\x8d\xe7\xa7\xb0\xe5\x90\x8e\xe5\x8a\xa0\xe4\xb8\x8a \"_C\"" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetClassObj_Parms, ClassName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetClassObj_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "GetClassObj", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj_Statics::OperateVariableByReflectionBPLibrary_eventGetClassObj_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj_Statics::OperateVariableByReflectionBPLibrary_eventGetClassObj_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execGetClassObj)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ClassName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UOperateVariableByReflectionBPLibrary::GetClassObj(Z_Param_ClassName);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function GetClassObj

// Begin Class UOperateVariableByReflectionBPLibrary Function GetFloatValue
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventGetFloatValue_Parms
	{
		UObject* Obj;
		FName PropertyName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|FloatType" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetFloatValue_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetFloatValue_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetFloatValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "GetFloatValue", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics::OperateVariableByReflectionBPLibrary_eventGetFloatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics::OperateVariableByReflectionBPLibrary_eventGetFloatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execGetFloatValue)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UOperateVariableByReflectionBPLibrary::GetFloatValue(Z_Param_Obj,Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function GetFloatValue

// Begin Class UOperateVariableByReflectionBPLibrary Function GetIntValue
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventGetIntValue_Parms
	{
		UObject* Obj;
		FName PropertyName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|IntType" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetIntValue_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetIntValue_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetIntValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "GetIntValue", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics::OperateVariableByReflectionBPLibrary_eventGetIntValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics::OperateVariableByReflectionBPLibrary_eventGetIntValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execGetIntValue)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOperateVariableByReflectionBPLibrary::GetIntValue(Z_Param_Obj,Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function GetIntValue

// Begin Class UOperateVariableByReflectionBPLibrary Function GetNameValue
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventGetNameValue_Parms
	{
		UObject* Obj;
		FName PropertyName;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|NameType" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetNameValue_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetNameValue_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetNameValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "GetNameValue", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics::OperateVariableByReflectionBPLibrary_eventGetNameValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics::OperateVariableByReflectionBPLibrary_eventGetNameValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execGetNameValue)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UOperateVariableByReflectionBPLibrary::GetNameValue(Z_Param_Obj,Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function GetNameValue

// Begin Class UOperateVariableByReflectionBPLibrary Function GetRotatorValue
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventGetRotatorValue_Parms
	{
		UObject* Obj;
		FName PropertyName;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|RotatorType" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetRotatorValue_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetRotatorValue_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetRotatorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "GetRotatorValue", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics::OperateVariableByReflectionBPLibrary_eventGetRotatorValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics::OperateVariableByReflectionBPLibrary_eventGetRotatorValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execGetRotatorValue)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UOperateVariableByReflectionBPLibrary::GetRotatorValue(Z_Param_Obj,Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function GetRotatorValue

// Begin Class UOperateVariableByReflectionBPLibrary Function GetStrValue
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventGetStrValue_Parms
	{
		UObject* Obj;
		FName PropertyName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|StringType" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe5\x80\xbc\xe5\xb9\xb6\xe4\xbf\xae\xe6\x94\xb9\n" },
#endif
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe5\x80\xbc\xe5\xb9\xb6\xe4\xbf\xae\xe6\x94\xb9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetStrValue_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetStrValue_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetStrValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "GetStrValue", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics::OperateVariableByReflectionBPLibrary_eventGetStrValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics::OperateVariableByReflectionBPLibrary_eventGetStrValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execGetStrValue)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOperateVariableByReflectionBPLibrary::GetStrValue(Z_Param_Obj,Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function GetStrValue

// Begin Class UOperateVariableByReflectionBPLibrary Function GetTextValue
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventGetTextValue_Parms
	{
		UObject* Obj;
		FName PropertyName;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|TextType" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetTextValue_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetTextValue_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetTextValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "GetTextValue", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics::OperateVariableByReflectionBPLibrary_eventGetTextValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics::OperateVariableByReflectionBPLibrary_eventGetTextValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execGetTextValue)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UOperateVariableByReflectionBPLibrary::GetTextValue(Z_Param_Obj,Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function GetTextValue

// Begin Class UOperateVariableByReflectionBPLibrary Function GetVectorValue
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventGetVectorValue_Parms
	{
		UObject* Obj;
		FName PropertyName;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|VectorType" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetVectorValue_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetVectorValue_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventGetVectorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "GetVectorValue", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics::OperateVariableByReflectionBPLibrary_eventGetVectorValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics::OperateVariableByReflectionBPLibrary_eventGetVectorValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execGetVectorValue)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UOperateVariableByReflectionBPLibrary::GetVectorValue(Z_Param_Obj,Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function GetVectorValue

// Begin Class UOperateVariableByReflectionBPLibrary Function SetBoolValue
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventSetBoolValue_Parms
	{
		UObject* Obj;
		FName PropertyName;
		bool NewValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|BoolType" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetBoolValue_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetBoolValue_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((OperateVariableByReflectionBPLibrary_eventSetBoolValue_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperateVariableByReflectionBPLibrary_eventSetBoolValue_Parms), &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OperateVariableByReflectionBPLibrary_eventSetBoolValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperateVariableByReflectionBPLibrary_eventSetBoolValue_Parms), &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "SetBoolValue", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::OperateVariableByReflectionBPLibrary_eventSetBoolValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::OperateVariableByReflectionBPLibrary_eventSetBoolValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execSetBoolValue)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOperateVariableByReflectionBPLibrary::SetBoolValue(Z_Param_Obj,Z_Param_PropertyName,Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function SetBoolValue

// Begin Class UOperateVariableByReflectionBPLibrary Function SetFloatValue
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventSetFloatValue_Parms
	{
		UObject* Obj;
		FName PropertyName;
		float NewValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|FloatType" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetFloatValue_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetFloatValue_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetFloatValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OperateVariableByReflectionBPLibrary_eventSetFloatValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperateVariableByReflectionBPLibrary_eventSetFloatValue_Parms), &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "SetFloatValue", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::OperateVariableByReflectionBPLibrary_eventSetFloatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::OperateVariableByReflectionBPLibrary_eventSetFloatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execSetFloatValue)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOperateVariableByReflectionBPLibrary::SetFloatValue(Z_Param_Obj,Z_Param_PropertyName,Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function SetFloatValue

// Begin Class UOperateVariableByReflectionBPLibrary Function SetIntValue
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventSetIntValue_Parms
	{
		UObject* Obj;
		FName PropertyName;
		int32 NewValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|IntType" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetIntValue_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetIntValue_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetIntValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OperateVariableByReflectionBPLibrary_eventSetIntValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperateVariableByReflectionBPLibrary_eventSetIntValue_Parms), &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "SetIntValue", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::OperateVariableByReflectionBPLibrary_eventSetIntValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::OperateVariableByReflectionBPLibrary_eventSetIntValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execSetIntValue)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOperateVariableByReflectionBPLibrary::SetIntValue(Z_Param_Obj,Z_Param_PropertyName,Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function SetIntValue

// Begin Class UOperateVariableByReflectionBPLibrary Function SetNameValue
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventSetNameValue_Parms
	{
		UObject* Obj;
		FName PropertyName;
		FName NewValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|NameType" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetNameValue_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetNameValue_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetNameValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OperateVariableByReflectionBPLibrary_eventSetNameValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperateVariableByReflectionBPLibrary_eventSetNameValue_Parms), &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "SetNameValue", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::OperateVariableByReflectionBPLibrary_eventSetNameValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::OperateVariableByReflectionBPLibrary_eventSetNameValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execSetNameValue)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FNameProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOperateVariableByReflectionBPLibrary::SetNameValue(Z_Param_Obj,Z_Param_PropertyName,Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function SetNameValue

// Begin Class UOperateVariableByReflectionBPLibrary Function SetRotatorValue
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventSetRotatorValue_Parms
	{
		UObject* Obj;
		FName PropertyName;
		FRotator NewValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|RotatorType" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetRotatorValue_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetRotatorValue_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetRotatorValue_Parms, NewValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OperateVariableByReflectionBPLibrary_eventSetRotatorValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperateVariableByReflectionBPLibrary_eventSetRotatorValue_Parms), &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "SetRotatorValue", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::OperateVariableByReflectionBPLibrary_eventSetRotatorValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::OperateVariableByReflectionBPLibrary_eventSetRotatorValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execSetRotatorValue)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_STRUCT(FRotator,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOperateVariableByReflectionBPLibrary::SetRotatorValue(Z_Param_Obj,Z_Param_PropertyName,Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function SetRotatorValue

// Begin Class UOperateVariableByReflectionBPLibrary Function SetStrValue
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventSetStrValue_Parms
	{
		UObject* Obj;
		FName PropertyName;
		FString NewValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|StringType" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetStrValue_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetStrValue_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetStrValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OperateVariableByReflectionBPLibrary_eventSetStrValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperateVariableByReflectionBPLibrary_eventSetStrValue_Parms), &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "SetStrValue", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::OperateVariableByReflectionBPLibrary_eventSetStrValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::OperateVariableByReflectionBPLibrary_eventSetStrValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execSetStrValue)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FStrProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOperateVariableByReflectionBPLibrary::SetStrValue(Z_Param_Obj,Z_Param_PropertyName,Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function SetStrValue

// Begin Class UOperateVariableByReflectionBPLibrary Function SetTextValue
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventSetTextValue_Parms
	{
		UObject* Obj;
		FName PropertyName;
		FText NewValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|TextType" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetTextValue_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetTextValue_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetTextValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OperateVariableByReflectionBPLibrary_eventSetTextValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperateVariableByReflectionBPLibrary_eventSetTextValue_Parms), &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "SetTextValue", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::OperateVariableByReflectionBPLibrary_eventSetTextValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::OperateVariableByReflectionBPLibrary_eventSetTextValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execSetTextValue)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FTextProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOperateVariableByReflectionBPLibrary::SetTextValue(Z_Param_Obj,Z_Param_PropertyName,Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function SetTextValue

// Begin Class UOperateVariableByReflectionBPLibrary Function SetVectorValue
struct Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics
{
	struct OperateVariableByReflectionBPLibrary_eventSetVectorValue_Parms
	{
		UObject* Obj;
		FName PropertyName;
		FVector NewValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WGDReflection|VectorType" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetVectorValue_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetVectorValue_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperateVariableByReflectionBPLibrary_eventSetVectorValue_Parms, NewValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OperateVariableByReflectionBPLibrary_eventSetVectorValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperateVariableByReflectionBPLibrary_eventSetVectorValue_Parms), &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::NewProp_Obj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, nullptr, "SetVectorValue", nullptr, nullptr, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::OperateVariableByReflectionBPLibrary_eventSetVectorValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::OperateVariableByReflectionBPLibrary_eventSetVectorValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperateVariableByReflectionBPLibrary::execSetVectorValue)
{
	P_GET_OBJECT(UObject,Z_Param_Obj);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_STRUCT(FVector,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOperateVariableByReflectionBPLibrary::SetVectorValue(Z_Param_Obj,Z_Param_PropertyName,Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UOperateVariableByReflectionBPLibrary Function SetVectorValue

// Begin Class UOperateVariableByReflectionBPLibrary
void UOperateVariableByReflectionBPLibrary::StaticRegisterNativesUOperateVariableByReflectionBPLibrary()
{
	UClass* Class = UOperateVariableByReflectionBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallObjNoParamNoResultFunByName", &UOperateVariableByReflectionBPLibrary::execCallObjNoParamNoResultFunByName },
		{ "GetAllEnum", &UOperateVariableByReflectionBPLibrary::execGetAllEnum },
		{ "GetAllStruct", &UOperateVariableByReflectionBPLibrary::execGetAllStruct },
		{ "GetAllUClass", &UOperateVariableByReflectionBPLibrary::execGetAllUClass },
		{ "GetBoolValue", &UOperateVariableByReflectionBPLibrary::execGetBoolValue },
		{ "GetClassObj", &UOperateVariableByReflectionBPLibrary::execGetClassObj },
		{ "GetFloatValue", &UOperateVariableByReflectionBPLibrary::execGetFloatValue },
		{ "GetIntValue", &UOperateVariableByReflectionBPLibrary::execGetIntValue },
		{ "GetNameValue", &UOperateVariableByReflectionBPLibrary::execGetNameValue },
		{ "GetRotatorValue", &UOperateVariableByReflectionBPLibrary::execGetRotatorValue },
		{ "GetStrValue", &UOperateVariableByReflectionBPLibrary::execGetStrValue },
		{ "GetTextValue", &UOperateVariableByReflectionBPLibrary::execGetTextValue },
		{ "GetVectorValue", &UOperateVariableByReflectionBPLibrary::execGetVectorValue },
		{ "SetBoolValue", &UOperateVariableByReflectionBPLibrary::execSetBoolValue },
		{ "SetFloatValue", &UOperateVariableByReflectionBPLibrary::execSetFloatValue },
		{ "SetIntValue", &UOperateVariableByReflectionBPLibrary::execSetIntValue },
		{ "SetNameValue", &UOperateVariableByReflectionBPLibrary::execSetNameValue },
		{ "SetRotatorValue", &UOperateVariableByReflectionBPLibrary::execSetRotatorValue },
		{ "SetStrValue", &UOperateVariableByReflectionBPLibrary::execSetStrValue },
		{ "SetTextValue", &UOperateVariableByReflectionBPLibrary::execSetTextValue },
		{ "SetVectorValue", &UOperateVariableByReflectionBPLibrary::execSetVectorValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperateVariableByReflectionBPLibrary);
UClass* Z_Construct_UClass_UOperateVariableByReflectionBPLibrary_NoRegister()
{
	return UOperateVariableByReflectionBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UOperateVariableByReflectionBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "OperateVariableByReflectionBPLibrary.h" },
		{ "ModuleRelativePath", "Public/OperateVariableByReflectionBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_CallObjNoParamNoResultFunByName, "CallObjNoParamNoResultFunByName" }, // 902372337
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllEnum, "GetAllEnum" }, // 1357518442
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllStruct, "GetAllStruct" }, // 3689296969
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetAllUClass, "GetAllUClass" }, // 2890072903
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetBoolValue, "GetBoolValue" }, // 864109522
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetClassObj, "GetClassObj" }, // 2621414791
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetFloatValue, "GetFloatValue" }, // 3187697557
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetIntValue, "GetIntValue" }, // 1976280043
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetNameValue, "GetNameValue" }, // 2201027549
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetRotatorValue, "GetRotatorValue" }, // 1940639413
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetStrValue, "GetStrValue" }, // 1326879835
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetTextValue, "GetTextValue" }, // 4275868741
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_GetVectorValue, "GetVectorValue" }, // 3681823467
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetBoolValue, "SetBoolValue" }, // 1952743404
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetFloatValue, "SetFloatValue" }, // 3864215404
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetIntValue, "SetIntValue" }, // 2112477443
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetNameValue, "SetNameValue" }, // 688949192
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetRotatorValue, "SetRotatorValue" }, // 1288732477
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetStrValue, "SetStrValue" }, // 2553504075
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetTextValue, "SetTextValue" }, // 2227465826
		{ &Z_Construct_UFunction_UOperateVariableByReflectionBPLibrary_SetVectorValue, "SetVectorValue" }, // 3496003900
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperateVariableByReflectionBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOperateVariableByReflectionBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OperateVariableByReflection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperateVariableByReflectionBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperateVariableByReflectionBPLibrary_Statics::ClassParams = {
	&UOperateVariableByReflectionBPLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperateVariableByReflectionBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperateVariableByReflectionBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOperateVariableByReflectionBPLibrary()
{
	if (!Z_Registration_Info_UClass_UOperateVariableByReflectionBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperateVariableByReflectionBPLibrary.OuterSingleton, Z_Construct_UClass_UOperateVariableByReflectionBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOperateVariableByReflectionBPLibrary.OuterSingleton;
}
template<> OPERATEVARIABLEBYREFLECTION_API UClass* StaticClass<UOperateVariableByReflectionBPLibrary>()
{
	return UOperateVariableByReflectionBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOperateVariableByReflectionBPLibrary);
UOperateVariableByReflectionBPLibrary::~UOperateVariableByReflectionBPLibrary() {}
// End Class UOperateVariableByReflectionBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_4_Projects_R_Plugins_OperateVariableByReflection_Source_OperateVariableByReflection_Public_OperateVariableByReflectionBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOperateVariableByReflectionBPLibrary, UOperateVariableByReflectionBPLibrary::StaticClass, TEXT("UOperateVariableByReflectionBPLibrary"), &Z_Registration_Info_UClass_UOperateVariableByReflectionBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperateVariableByReflectionBPLibrary), 4280049376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_4_Projects_R_Plugins_OperateVariableByReflection_Source_OperateVariableByReflection_Public_OperateVariableByReflectionBPLibrary_h_1226785049(TEXT("/Script/OperateVariableByReflection"),
	Z_CompiledInDeferFile_FID_UE5_4_Projects_R_Plugins_OperateVariableByReflection_Source_OperateVariableByReflection_Public_OperateVariableByReflectionBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_4_Projects_R_Plugins_OperateVariableByReflection_Source_OperateVariableByReflection_Public_OperateVariableByReflectionBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
