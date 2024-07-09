#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Async/AsyncWork.h"
#include "Async/Async.h"
#include "Async/TaskGraphInterfaces.h"
#include "RWTxtBPLibrary.generated.h"


UCLASS()
class URWTxtBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, Category = "WGD_RWTxt")
	static FString ReadTxt(FString FileName);

	UFUNCTION(BlueprintCallable, Category = "WGD_RWTxt")
	static TArray<FString> ReadTxtByLine(FString FileName);

	UFUNCTION(BlueprintCallable, Category = "WGD_RWTxt")
	static bool WriteTxt(FString WriteContent, FString Path, bool bLineFeed);
	
	UFUNCTION(BlueprintCallable, Category = "WGD_RWTxt")
	static bool ReWriteTxt(FString WriteContent, FString Path);

};
