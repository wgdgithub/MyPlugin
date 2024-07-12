#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "OperateVariableByReflectionBPLibrary.generated.h"

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
class UOperateVariableByReflectionBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, Category = "WGDReflection|All")
	static void GetAllUClass(TArray<UObject*>& ResultClass);

	UFUNCTION(BlueprintCallable, Category = "WGDReflection|All")
	static void GetAllEnum(TArray<UObject*>& ResultEnum);

	UFUNCTION(BlueprintCallable, Category = "WGDReflection|All")
	static void GetAllStruct(TArray<UObject*>& ResultStruct);
	
	
	//蓝图类需要在名称后加上 "_C"
	UFUNCTION(BlueprintCallable, Category = "WGDReflection|GetObj")
	static UObject* GetClassObj(FString ClassName);

	//获取对象的属性值并修改
	UFUNCTION(BlueprintCallable, Category = "WGDReflection|StringType")
	static FString GetStrValue(UObject* Obj, FName PropertyName);

	UFUNCTION(BlueprintCallable, Category = "WGDReflection|StringType")
	static bool SetStrValue(UObject* Obj, FName PropertyName, FString NewValue);
	
	UFUNCTION(BlueprintCallable, Category = "WGDReflection|IntType")
	static int GetIntValue(UObject* Obj, FName PropertyName);

	UFUNCTION(BlueprintCallable, Category = "WGDReflection|IntType")
	static bool SetIntValue(UObject* Obj, FName PropertyName, int NewValue);
	
	UFUNCTION(BlueprintCallable, Category = "WGDReflection|FloatType")
	static float GetFloatValue(UObject* Obj, FName PropertyName);

	UFUNCTION(BlueprintCallable, Category = "WGDReflection|FloatType")
	static bool SetFloatValue(UObject* Obj, FName PropertyName, float NewValue);
	
	UFUNCTION(BlueprintCallable, Category = "WGDReflection|BoolType")
	static bool GetBoolValue(UObject* Obj, FName PropertyName);

	UFUNCTION(BlueprintCallable, Category = "WGDReflection|BoolType")
	static bool SetBoolValue(UObject* Obj, FName PropertyName, bool NewValue);

	UFUNCTION(BlueprintCallable, Category = "WGDReflection|NameType")
	static FName GetNameValue(UObject* Obj, FName PropertyName);

	UFUNCTION(BlueprintCallable, Category = "WGDReflection|NameType")
	static bool SetNameValue(UObject* Obj, FName PropertyName, FName NewValue);

	UFUNCTION(BlueprintCallable, Category = "WGDReflection|TextType")
	static FText GetTextValue(UObject* Obj, FName PropertyName);

	UFUNCTION(BlueprintCallable, Category = "WGDReflection|TextType")
	static bool SetTextValue(UObject* Obj, FName PropertyName, FText NewValue);

	UFUNCTION(BlueprintCallable, Category = "WGDReflection|VectorType")
	static FVector GetVectorValue(UObject* Obj, FName PropertyName);

	UFUNCTION(BlueprintCallable, Category = "WGDReflection|VectorType")
	static bool SetVectorValue(UObject* Obj, FName PropertyName, FVector NewValue);

	UFUNCTION(BlueprintCallable, Category = "WGDReflection|RotatorType")
	static FRotator GetRotatorValue(UObject* Obj, FName PropertyName);

	UFUNCTION(BlueprintCallable, Category = "WGDReflection|RotatorType")
	static bool SetRotatorValue(UObject* Obj, FName PropertyName, FRotator NewValue);
	
	UFUNCTION(BlueprintCallable, Category = "WGDReflection|Func")
	static void CallObjNoParamNoResultFunByName(UObject* Obj, FName FunctionName);
};
