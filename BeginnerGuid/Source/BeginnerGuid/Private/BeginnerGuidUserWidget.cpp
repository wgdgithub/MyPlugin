#include "BeginnerGuidUserWidget.h"

#include "FileMediaSource.h"
#include "MediaPlayer.h"
#include "Animation/WidgetAnimation.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/BackgroundBlur.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Components/Image.h"
#include "Components/Overlay.h"
#include "Components/ProgressBar.h"
#include "Components/RichTextBlock.h"
#include "Components/TextBlock.h"

void UBeginnerGuidWidget::NativeConstruct()
{
	Super::NativeConstruct();

	SetVisibility(ESlateVisibility::Collapsed);
	BoxOverlay->SetVisibility(ESlateVisibility::Collapsed);

	Blur->SetVisibility(ESlateVisibility::Collapsed);
	GuidCanvasPanel->SetVisibility(ESlateVisibility::Collapsed);

	ConfirmButton->OnPressed.AddDynamic(this, &UBeginnerGuidWidget::HoldingStarted);
	ConfirmButton->OnReleased.AddDynamic(this, &UBeginnerGuidWidget::HoldingCanceled);
}

void UBeginnerGuidWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (!bTick)
	{
		return;
	}

	HoldingLerpAlpha += (HoldingLerpAlpha > 0 || HoldingProgressBarChangeRate > 0) * HoldingProgressBarChangeRate * InDeltaTime;
	ConfirmationProgressBar->SetPercent(HoldingLerpAlpha);

	if (HoldingLerpAlpha >= 1)
	{
		HideMessage();
		bTick = false;
	}
}

void UBeginnerGuidWidget::HoldingStarted()
{
	if (!bIsVideoGuidOpen)
	{
		return;
	}
	HoldingProgressBarChangeRate = 1 / HoldNeedTime;
	bTick = true;
}

void UBeginnerGuidWidget::HoldingCanceled()
{
	HoldingProgressBarChangeRate = -2;

}


void UBeginnerGuidWidget::ShowMessage(FText InContent)
{
	SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	MessageText->SetRenderOpacity(0.f);
	MessageText->SetAutoWrapText(false);
	MessageText->SetText(InContent);

	GetWorld()->GetTimerManager().SetTimer(*(new FTimerHandle()), [this]()
		{
			if (!IsValidLowLevel()) return;
			MessageText->SetRenderOpacity(1);
			MessageText->SetAutoWrapText(true);
		},
		0.1f, false);

	if (!bIsMessageVisible)
	{
		PlayAnimation(ShowMessageAnim);
	}
	bIsMessageVisible = true;
	GetWorld()->GetTimerManager().ClearTimer(CollapserTimerHandle);
}

void UBeginnerGuidWidget::HideMessage()
{
	if (CurrentGuidType == EGuidType::Video && !bIsVideoGuidOpen || CurrentGuidType == EGuidType::Message && !bIsMessageVisible)
	{
		return;
	}

	UWidgetAnimation* AnimToPlay = CurrentGuidType == EGuidType::Message ? HideMessageAnim : HideVideoAnim;

	if (IsAnimationPlaying(AnimToPlay))
	{
		return;
	}

	PlayAnimation(AnimToPlay);

	float AnimLength = AnimToPlay->GetEndTime();

	if (bIsVideoGuidOpen + bIsMessageVisible == 2)
	{
		UWidgetAnimation* OtherAnimToPlay = CurrentGuidType == EGuidType::Message ? HideVideoAnim : HideMessageAnim;
		PlayAnimation(OtherAnimToPlay);

		if (OtherAnimToPlay->GetEndTime() > AnimLength)
		{
			AnimLength = OtherAnimToPlay->GetEndTime();
		}
	}

	GetWorld()->GetTimerManager().SetTimer(CollapserTimerHandle, [this]()
		{
			SetVisibility(ESlateVisibility::Collapsed);
		},
		AnimLength + 0.5f, false);

	if (bIsVideoGuidOpen)
	{
		APlayerController* PlayerController = GetOwningPlayer();
		PlayerController->SetPause(false);
		PlayerController->SetShowMouseCursor(false);
		UWidgetBlueprintLibrary::SetInputMode_GameOnly(PlayerController);
	}

	bIsVideoGuidOpen = false;
	bIsMessageVisible = false;
}

void UBeginnerGuidWidget::UpdateMessageText(FText NewContent)
{
	if (MessageText->GetText().ToString().Len() == NewContent.ToString().Len())
	{
		FText::FromString(NewContent.ToString() + TEXT(" "));
	}
	MessageText->SetText(NewContent);
}

void UBeginnerGuidWidget::ShowVideoGuid(FName InTitle, FText InContent, UObject* InMedia)
{
	if (!VideoMedia || !MediaPlayer)
	{
		UE_LOG(LogTemp, Error, TEXT("Set the VideoMedia and MediaPlayer of %s widget blueprnt"), *GetName());
		return;
	}
	SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	APlayerController* PlayerController = GetOwningPlayer();
	PlayerController->SetPause(true);
	PlayerController->SetShowMouseCursor(true);
	UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(PlayerController);

	VideoGuidText->SetText(InContent);
	TitleText->SetText(FText::FromName(InTitle));

	if (InMedia)
	{
		if (InMedia->GetClass()->IsChildOf<UFileMediaSource>())
		{
			MediaPlayer->OpenSource(Cast<UFileMediaSource>(InMedia));
			VideoMedia->SetBrushFromMaterial(MediaMaterial);
		}
		else
		{
			VideoMedia->SetBrushResourceObject(InMedia);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("You forgot to set the video media %s"), *InTitle.ToString());
	}

	CurrentGuidType = EGuidType::Video;

	if (!bIsVideoGuidOpen)
	{
		PlayAnimation(ShowVideoAnim);
	}

	HoldingLerpAlpha = 0.f;
	ConfirmationProgressBar->SetPercent(0.f);
	bIsVideoGuidOpen = true;
	GetWorld()->GetTimerManager().ClearTimer(CollapserTimerHandle);
}

void UBeginnerGuidWidget::UpdateVideoText(FText NewContent)
{
	if (TitleText->GetText().ToString().Len() == NewContent.ToString().Len())
	{
		FText::FromString(NewContent.ToString() + TEXT(" "));
	}
	TitleText->SetText(NewContent);
}

