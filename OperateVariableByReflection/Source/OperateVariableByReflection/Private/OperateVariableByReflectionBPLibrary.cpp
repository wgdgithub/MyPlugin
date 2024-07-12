
#include "OperateVariableByReflectionBPLibrary.h"

UOperateVariableByReflectionBPLibrary::UOperateVariableByReflectionBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UOperateVariableByReflectionBPLibrary::GetAllUClass(TArray<UObject*>& ResultClass)
{
	GetObjectsOfClass(UClass::StaticClass(), ResultClass);
}

void UOperateVariableByReflectionBPLibrary::GetAllEnum(TArray<UObject*>& ResultEnum)
{
	GetObjectsOfClass(UEnum::StaticClass(), ResultEnum);
}

void UOperateVariableByReflectionBPLibrary::GetAllStruct(TArray<UObject*>& ResultStruct)
{
	GetObjectsOfClass(UScriptStruct::StaticClass(), ResultStruct);
}

UObject* UOperateVariableByReflectionBPLibrary::GetClassObj(FString ClassName)
{
	return FindObject<UClass>(ANY_PACKAGE, *ClassName);
}

FString UOperateVariableByReflectionBPLibrary::GetStrValue(UObject* Obj, FName PropertyName)
{
	if(!Obj)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obj无效"));
		return FString();
	}
	UClass* Class = Obj->GetClass();
	FProperty* Property = Class->FindPropertyByName(PropertyName);

	if(!Property)
	{
		UE_LOG(LogTemp, Warning, TEXT("未找到属性%s"), *PropertyName.ToString());
		return FString();
	}
	
	if(Property->GetName() == PropertyName)
	{
		if(Property->IsA<FStrProperty>())
		{
			FStrProperty* StringProperty = CastField<FStrProperty>(Property);
			void* Address = StringProperty->ContainerPtrToValuePtr<void>(Obj);
			FString PropertyValue = StringProperty->GetPropertyValue(Address);
			return PropertyValue;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s属性不是FString类型"), *PropertyName.ToString());
			return FString();
		}
	}
	return FString();
}

bool UOperateVariableByReflectionBPLibrary::SetStrValue(UObject* Obj, FName PropertyName, FString NewValue)
{
	if(!Obj)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obj无效"));
		return false;
	}
	UClass* Class = Obj->GetClass();
	FProperty* Property = Class->FindPropertyByName(PropertyName);

	if(!Property)
	{
		UE_LOG(LogTemp, Warning, TEXT("未找到属性%s"), *PropertyName.ToString());
		return false;
	}
	
	if(Property->GetName() == PropertyName)
	{
		if(Property->IsA<FStrProperty>())
		{
			FStrProperty* StringProperty = CastField<FStrProperty>(Property);
			void* Address = StringProperty->ContainerPtrToValuePtr<void>(Obj);
			StringProperty->SetPropertyValue(Address, NewValue);
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s属性不是FString类型"), *PropertyName.ToString());
			return false;
		}
	}
	return false;
}

int UOperateVariableByReflectionBPLibrary::GetIntValue(UObject* Obj, FName PropertyName)
{
	if(!Obj)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obj无效"));
		return 0;
	}
	
	UClass* Class = Obj->GetClass();
	FProperty* Property = Class->FindPropertyByName(PropertyName);
	
	if(!Property)
	{
		UE_LOG(LogTemp, Warning, TEXT("未找到属性%s"), *PropertyName.ToString());
		return 0;
	}
	
	if(Property->GetName() == PropertyName)
	{
		if(Property->IsA<FIntProperty>())
		{
			FIntProperty* IntProperty = CastField<FIntProperty>(Property);
			void* Address = IntProperty->ContainerPtrToValuePtr<void>(Obj);
			int PropertyValue = IntProperty->GetPropertyValue(Address);
			return PropertyValue;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s属性不是int类型"), *PropertyName.ToString());
			return 0;
		}
	}
	return 0;
}

bool UOperateVariableByReflectionBPLibrary::SetIntValue(UObject* Obj, FName PropertyName, int NewValue)
{
	if(!Obj)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obj无效"));
		return false;
	}
	UClass* Class = Obj->GetClass();
	FProperty* Property = Class->FindPropertyByName(PropertyName);

	if(!Property)
	{
		UE_LOG(LogTemp, Warning, TEXT("未找到属性%s"), *PropertyName.ToString());
		return false;
	}
	
	if(Property->GetName() == PropertyName)
	{
		if(Property->IsA<FIntProperty>())
		{
			FIntProperty* IntProperty = CastField<FIntProperty>(Property);
			void* Address = IntProperty->ContainerPtrToValuePtr<void>(Obj);
			IntProperty->SetPropertyValue(Address, NewValue);
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s属性不是int类型"), *PropertyName.ToString());
			return false;
		}
	}
	return false;
}

float UOperateVariableByReflectionBPLibrary::GetFloatValue(UObject* Obj, FName PropertyName)
{
	if(!Obj)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obj无效"));
		return 0.f;
	}
	
	UClass* Class = Obj->GetClass();
	FProperty* Property = Class->FindPropertyByName(PropertyName);
	
	if(!Property)
	{
		UE_LOG(LogTemp, Warning, TEXT("未找到属性%s"), *PropertyName.ToString());
		return 0;
	}
	
	if(Property->GetName() == PropertyName)
	{
		if(Property->IsA<FFloatProperty>())
		{
			FFloatProperty* FloatProperty = CastField<FFloatProperty>(Property);
			void* Address = FloatProperty->ContainerPtrToValuePtr<void>(Obj);
			float PropertyValue = FloatProperty->GetPropertyValue(Address);
			return PropertyValue;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s属性不是float类型"), *PropertyName.ToString());
			return 0.f;
		}
	}
	return 0.f;
}

bool UOperateVariableByReflectionBPLibrary::SetFloatValue(UObject* Obj, FName PropertyName, float NewValue)
{
	if(!Obj)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obj无效"));
		return false;
	}
	UClass* Class = Obj->GetClass();
	FProperty* Property = Class->FindPropertyByName(PropertyName);

	if(!Property)
	{
		UE_LOG(LogTemp, Warning, TEXT("未找到属性%s"), *PropertyName.ToString());
		return false;
	}
	
	if(Property->GetName() == PropertyName)
	{
		if(Property->IsA<FFloatProperty>())
		{
			FFloatProperty* FloatProperty = CastField<FFloatProperty>(Property);
			void* Address = FloatProperty->ContainerPtrToValuePtr<void>(Obj);
			FloatProperty->SetPropertyValue(Address, NewValue);
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s属性不是float类型"), *PropertyName.ToString());
			return false;
		}
	}
	return false;
}

bool UOperateVariableByReflectionBPLibrary::GetBoolValue(UObject* Obj, FName PropertyName)
{
	if(!Obj)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obj无效"));
		return false;
	}
	
	UClass* Class = Obj->GetClass();
	FProperty* Property = Class->FindPropertyByName(PropertyName);
	
	if(!Property)
	{
		UE_LOG(LogTemp, Warning, TEXT("未找到属性%s"), *PropertyName.ToString());
		return false;
	}
	
	if(Property->GetName() == PropertyName)
	{
		if(Property->IsA<FBoolProperty>())
		{
			FBoolProperty* BoolProperty = CastField<FBoolProperty>(Property);
			void* Address = BoolProperty->ContainerPtrToValuePtr<void>(Obj);
			bool PropertyValue = BoolProperty->GetPropertyValue(Address);
			return PropertyValue;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s属性不是bool类型"), *PropertyName.ToString());
			return false;
		}
	}
	return false;
}

bool UOperateVariableByReflectionBPLibrary::SetBoolValue(UObject* Obj, FName PropertyName, bool NewValue)
{
	if(!Obj)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obj无效"));
		return false;
	}
	UClass* Class = Obj->GetClass();
	FProperty* Property = Class->FindPropertyByName(PropertyName);

	if(!Property)
	{
		UE_LOG(LogTemp, Warning, TEXT("未找到属性%s"), *PropertyName.ToString());
		return false;
	}
	
	if(Property->GetName() == PropertyName)
	{
		if(Property->IsA<FBoolProperty>())
		{
			FBoolProperty* BoolProperty = CastField<FBoolProperty>(Property);
			void* Address = BoolProperty->ContainerPtrToValuePtr<void>(Obj);
			BoolProperty->SetPropertyValue(Address, NewValue);
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s属性不是bool类型"), *PropertyName.ToString());
			return false;
		}
	}
	return false;
}

FName UOperateVariableByReflectionBPLibrary::GetNameValue(UObject* Obj, FName PropertyName)
{
	if(!Obj)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obj无效"));
		return FName();
	}
	UClass* Class = Obj->GetClass();
	FProperty* Property = Class->FindPropertyByName(PropertyName);

	if(!Property)
	{
		UE_LOG(LogTemp, Warning, TEXT("未找到属性%s"), *PropertyName.ToString());
		return FName();
	}
	
	if(Property->GetName() == PropertyName)
	{
		if(Property->IsA<FNameProperty>())
		{
			FNameProperty* NameProperty = CastField<FNameProperty>(Property);
			void* Address = NameProperty->ContainerPtrToValuePtr<void>(Obj);
			FName PropertyValue = NameProperty->GetPropertyValue(Address);
			return PropertyValue;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s属性不是FName类型"), *PropertyName.ToString());
			return FName();
		}
	}
	return FName();
}

bool UOperateVariableByReflectionBPLibrary::SetNameValue(UObject* Obj, FName PropertyName, FName NewValue)
{
	if(!Obj)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obj无效"));
		return false;
	}
	UClass* Class = Obj->GetClass();
	FProperty* Property = Class->FindPropertyByName(PropertyName);

	if(!Property)
	{
		UE_LOG(LogTemp, Warning, TEXT("未找到属性%s"), *PropertyName.ToString());
		return false;
	}
	
	if(Property->GetName() == PropertyName)
	{
		if(Property->IsA<FNameProperty>())
		{
			FNameProperty* NameProperty = CastField<FNameProperty>(Property);
			void* Address = NameProperty->ContainerPtrToValuePtr<void>(Obj);
			NameProperty->SetPropertyValue(Address, NewValue);
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s属性不是FName类型"), *PropertyName.ToString());
			return false;
		}
	}
	return false;
}

FText UOperateVariableByReflectionBPLibrary::GetTextValue(UObject* Obj, FName PropertyName)
{
	if(!Obj)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obj无效"));
		return FText();
	}
	UClass* Class = Obj->GetClass();
	FProperty* Property = Class->FindPropertyByName(PropertyName);

	if(!Property)
	{
		UE_LOG(LogTemp, Warning, TEXT("未找到属性%s"), *PropertyName.ToString());
		return FText();
	}
	
	if(Property->GetName() == PropertyName)
	{
		if(Property->IsA<FTextProperty>())
		{
			FTextProperty* TextProperty = CastField<FTextProperty>(Property);
			void* Address = TextProperty->ContainerPtrToValuePtr<void>(Obj);
			FText PropertyValue = TextProperty->GetPropertyValue(Address);
			return PropertyValue;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s属性不是FText类型"), *PropertyName.ToString());
			return FText();
		}
	}
	return FText();
}

bool UOperateVariableByReflectionBPLibrary::SetTextValue(UObject* Obj, FName PropertyName, FText NewValue)
{
	if(!Obj)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obj无效"));
		return false;
	}
	UClass* Class = Obj->GetClass();
	FProperty* Property = Class->FindPropertyByName(PropertyName);

	if(!Property)
	{
		UE_LOG(LogTemp, Warning, TEXT("未找到属性%s"), *PropertyName.ToString());
		return false;
	}
	
	if(Property->GetName() == PropertyName)
	{
		if(Property->IsA<FTextProperty>())
		{
			FTextProperty* TextProperty = CastField<FTextProperty>(Property);
			void* Address = TextProperty->ContainerPtrToValuePtr<void>(Obj);
			TextProperty->SetPropertyValue(Address, NewValue);
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s属性不是FText类型"), *PropertyName.ToString());
			return false;
		}
	}
	return false;
}

FVector UOperateVariableByReflectionBPLibrary::GetVectorValue(UObject* Obj, FName PropertyName)
{
	if(!Obj)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obj无效"));
		return FVector::ZeroVector;
	}
	
	UClass* Class = Obj->GetClass();
	FProperty* Property = Class->FindPropertyByName(PropertyName);

	if(!Property)
	{
		UE_LOG(LogTemp, Warning, TEXT("未找到属性%s"), *PropertyName.ToString());
		return FVector::ZeroVector;
	}
	
	if(Property->GetName() == PropertyName)
	{
		if(Property->IsA<FStructProperty>())
		{
			FStructProperty* VectorProperty = CastField<FStructProperty>(Property);
			void* Address = VectorProperty->ContainerPtrToValuePtr<void>(Obj);
			FVector* VectorValue = static_cast<FVector*>(Address);
			return *VectorValue;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s属性不是FVector类型"), *PropertyName.ToString());
			return FVector::ZeroVector;
		}
	}
	return FVector::ZeroVector;
}

bool UOperateVariableByReflectionBPLibrary::SetVectorValue(UObject* Obj, FName PropertyName, FVector NewValue)
{
	if(!Obj)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obj无效"));
		return false;
	}
	UClass* Class = Obj->GetClass();
	FProperty* Property = Class->FindPropertyByName(PropertyName);

	if(!Property)
	{
		UE_LOG(LogTemp, Warning, TEXT("未找到属性%s"), *PropertyName.ToString());
		return false;
	}
	
	if(Property->GetName() == PropertyName)
	{
		if(Property->IsA<FStructProperty>())
		{
			FStructProperty* VectorProperty = CastField<FStructProperty>(Property);
			void* Address = VectorProperty->ContainerPtrToValuePtr<void>(Obj);
			FVector* VectorValue = static_cast<FVector*>(Address);
			*VectorValue = NewValue;
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s属性不是FVector类型"), *PropertyName.ToString());
			return false;
		}
	}
	return false;
}

FRotator UOperateVariableByReflectionBPLibrary::GetRotatorValue(UObject* Obj, FName PropertyName)
{
	if(!Obj)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obj无效"));
		return FRotator::ZeroRotator;
	}
	
	UClass* Class = Obj->GetClass();
	FProperty* Property = Class->FindPropertyByName(PropertyName);

	if(!Property)
	{
		UE_LOG(LogTemp, Warning, TEXT("未找到属性%s"), *PropertyName.ToString());
		return FRotator::ZeroRotator;
	}
	
	if(Property->GetName() == PropertyName)
	{
		if(Property->IsA<FStructProperty>())
		{
			FStructProperty* RotatorProperty = CastField<FStructProperty>(Property);
			void* Address = RotatorProperty->ContainerPtrToValuePtr<void>(Obj);
			FRotator* RotatorValue = static_cast<FRotator*>(Address);
			return *RotatorValue;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s属性不是FRotator类型"), *PropertyName.ToString());
			return FRotator::ZeroRotator;
		}
	}
	return FRotator::ZeroRotator;
}

bool UOperateVariableByReflectionBPLibrary::SetRotatorValue(UObject* Obj, FName PropertyName, FRotator NewValue)
{
	if(!Obj)
	{
		UE_LOG(LogTemp, Warning, TEXT("Obj无效"));
		return false;
	}
	UClass* Class = Obj->GetClass();
	FProperty* Property = Class->FindPropertyByName(PropertyName);

	if(!Property)
	{
		UE_LOG(LogTemp, Warning, TEXT("未找到属性%s"), *PropertyName.ToString());
		return false;
	}
	
	if(Property->GetName() == PropertyName)
	{
		if(Property->IsA<FStructProperty>())
		{
			FStructProperty* RotatorProperty = CastField<FStructProperty>(Property);
			void* Address = RotatorProperty->ContainerPtrToValuePtr<void>(Obj);
			FRotator* RotatorValue = static_cast<FRotator*>(Address);
			*RotatorValue = NewValue;
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s属性不是FRotator类型"), *PropertyName.ToString());
			return false;
		}
	}
	return false;
}

void UOperateVariableByReflectionBPLibrary::CallObjNoParamNoResultFunByName(UObject* Obj, FName FunctionName)
{
	UClass* Class = Obj->GetClass();
	UFunction* Function = Class->FindFunctionByName(FunctionName);
	if(Function->NumParms > 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("此函数只调用无参函数"));  
		return; 
	}
	Obj->ProcessEvent(Function, nullptr);
}


