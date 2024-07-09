#include "RWTxtBPLibrary.h"

#include "RWTxt.h"

URWTxtBPLibrary::URWTxtBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FString URWTxtBPLibrary::ReadTxt(const FString FileName)
{
	FString ResultString;
	FFileHelper::LoadFileToString(ResultString, *(FPaths::ProjectContentDir() + FileName));
	
	return ResultString;
}

TArray<FString> URWTxtBPLibrary::ReadTxtByLine(const FString FileName)
{
	FString TextPath = FPaths::ProjectContentDir() + FileName;
	TextPath = FPaths::ConvertRelativePathToFull(TextPath);
	if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*TextPath))
	{
		TArray<FString> TextData;
		FFileHelper::LoadFileToStringArray(TextData, *TextPath);
		return TextData;
	}
	
	return TArray<FString>();
}

bool URWTxtBPLibrary::WriteTxt(FString WriteContent, const FString Path, const bool bLineFeed)
{
	const bool bResult = FFileHelper::SaveStringToFile(
		bLineFeed ? WriteContent + "\n" : WriteContent,
		*(FPaths::ProjectContentDir() + Path),
		FFileHelper::EEncodingOptions::AutoDetect,
		&IFileManager::Get(),
		EFileWrite::FILEWRITE_Append);
	return bResult;
}

bool URWTxtBPLibrary::ReWriteTxt(FString WriteContent, const FString Path)
{
	const bool bResult = FFileHelper::SaveStringToFile(WriteContent, *(FPaths::ProjectContentDir() + Path));
	return bResult;
}


