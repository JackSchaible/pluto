// (c) 2025 Cactus Studios, All Rights Reserved


#include "Pluto/UI/Helpers/Public/UMGWidgetHelper.h"

#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include "Components/Image.h"
#include "Components/SizeBox.h"
#include "Components/TextBlock.h"

UTextBlock* UUMGWidgetHelper::CreateTextBlock(UObject* WorldContextObject, const FText& InText)
{
	// Create the TextBlock using the provided outer. This ensures correct ownership and GC
	UTextBlock* NewTextBlock = NewObject<UTextBlock>(WorldContextObject, UTextBlock::StaticClass());

	if (NewTextBlock)
	{
		NewTextBlock->SetText(InText);
	}

	return NewTextBlock;
}

UHorizontalBox* UUMGWidgetHelper::CreateHorizontalBox(UObject* WorldContextObject)
{
	return NewObject<UHorizontalBox>(WorldContextObject, UHorizontalBox::StaticClass());
}

UButton* UUMGWidgetHelper::CreateButton(UObject* WorldContextObject)
{
	return NewObject<UButton>(WorldContextObject, UButton::StaticClass());
}

USizeBox* UUMGWidgetHelper::CreateSizeBox(UObject* WorldContextObject, UWidget* InContent)
{
	USizeBox* NewSizeBox = NewObject<USizeBox>(WorldContextObject, USizeBox::StaticClass());

	if (NewSizeBox && InContent)
	{
		NewSizeBox->AddChild(InContent);
	}

	return NewSizeBox;
}

UImage* UUMGWidgetHelper::CreateImage(UObject* WorldContextObject, UTexture2D* Texture)
{
	UImage* NewImage = NewObject<UImage>(WorldContextObject, UImage::StaticClass());
	if (NewImage && Texture)
	{
		NewImage->SetBrushFromTexture(Texture);
	}

	return NewImage;
}