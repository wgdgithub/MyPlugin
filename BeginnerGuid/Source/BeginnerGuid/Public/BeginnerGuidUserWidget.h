#pragma once

#include "CoreMinimal.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "BeginnerGuidUserWidget.generated.h"

class UMediaPlayer;
class UButton;
class UProgressBar;
class UImage;
class UTextBlock;
class UBackgroundBlur;
class UCanvasPanel;
class UOverlay;
class URichTextBlock;

UENUM(BlueprintType)
enum class EGuidType : uint8
{
	Message,
	Video
};


UCLASS(Abstract)
class BEGINNERGUID_API UBeginnerGuidWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	/** Text Guid */
	UFUNCTION(BlueprintCallable, Category = "TextGuid")
	void ShowMessage(FText InContent);

	UFUNCTION(BlueprintCallable, Category = "TextGuid")
	void HideMessage();

	UFUNCTION(BlueprintCallable, Category = "TextGuid")
	void UpdateMessageText(FText NewContent);
	/** ~ End Text Guid */

	/** Video Guid */
	UFUNCTION(BlueprintCallable, Category = "VideoGuid")
	void ShowVideoGuid(FName InTitle, FText InContent, UObject* InMedia);

	UFUNCTION(BlueprintCallable, Category = "VideoGuid")
	void UpdateVideoText(FText NewContent);

	UFUNCTION(BlueprintCallable, Category = "VideoGuid")
	void SetupVideo(float InHoldTime) { HoldNeedTime = InHoldTime; };


	/** ~End Video Guid */

protected:

	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	/** Text Guid */
	UPROPERTY(BlueprintReadWrite, Category = "TextGuid", meta = (BindWidget))
	URichTextBlock* MessageText;

	UPROPERTY(BlueprintReadWrite, Category = "TextGuid", meta = (BindWidget))
	UOverlay* BoxOverlay;

	UPROPERTY(BlueprintReadWrite, Transient, Category = "TextGuidAnimations", meta = (BindWidgetAnim))
	UWidgetAnimation* ShowMessageAnim;

	UPROPERTY(BlueprintReadWrite, Transient, Category = "TextGuidAnimations", meta = (BindWidgetAnim))
	UWidgetAnimation* HideMessageAnim;
	/** ~ End Text Guid */

	/** Video Guid */
	UPROPERTY(BlueprintReadWrite, Category = "VideoGuid", meta = (BindWidget))
	UCanvasPanel* GuidCanvasPanel;

	UPROPERTY(BlueprintReadWrite, Category = "VideoGuid", meta = (BindWidget))
	UBackgroundBlur* Blur;

	UPROPERTY(BlueprintReadWrite, Category = "VideoGuid", meta = (BindWidget))
	URichTextBlock* VideoGuidText;

	UPROPERTY(BlueprintReadWrite, Category = "VideoGuid", meta = (BindWidget))
	UTextBlock* TitleText;

	UPROPERTY(BlueprintReadWrite, Category = "VideoGuid", meta = (BindWidget))
	UImage* VideoMedia;

	UPROPERTY(BlueprintReadWrite, Category = "VideoGuid", meta = (BindWidget))
	UProgressBar* ConfirmationProgressBar;

	UPROPERTY(BlueprintReadWrite, Category = "VideoGuid", meta = (BindWidget))
	UButton* ConfirmButton;

	UPROPERTY(BlueprintReadWrite, Transient, Category = "VideoGuidAnimations", meta = (BindWidgetAnim))
	UWidgetAnimation* ShowVideoAnim;

	UPROPERTY(BlueprintReadWrite, Transient, Category = "VideoGuidAnimations", meta = (BindWidgetAnim))
	UWidgetAnimation* HideVideoAnim;

	UPROPERTY(EditAnywhere, Category = "VideoGuidSettings")
	UMaterialInstance* MediaMaterial;

	UPROPERTY(EditAnywhere, Category = "VideoGuidSettings")
	UMediaPlayer* MediaPlayer;
	/** ~End Video Guid */

	UPROPERTY(BlueprintReadWrite, Category = "GuidType")
	EGuidType CurrentGuidType;



private:
	/** Text Guid */
	bool bIsMessageVisible = false;
	FTimerHandle CollapserTimerHandle;
	/** ~ End Text Guid */

	/** Video Guid */
	float HoldNeedTime = 2.f;
	float HoldingProgressBarChangeRate;
	float HoldingLerpAlpha = 0;
	bool bIsVideoGuidOpen = false;
	bool bTick = false;

	UFUNCTION()
	void HoldingStarted();

	UFUNCTION()
	void HoldingCanceled();
	/** ~End Video Guid */
};


