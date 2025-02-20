// (c) 2025 Cactus Studios, All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include "Components/Image.h"
#include "Components/SizeBox.h"
#include "Components/TextBlock.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UMGWidgetHelper.generated.h"

// Forward declarations for UMG components. class UTextBlock; class UHorizontalBox; class UButton; class USizeBox; class UImage;

/**
 * A utility library to create native UMG components dynamically.
 */
UCLASS()
class PLUTO_API UUMGWidgetHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	// Create a TextBlock with custom text
	UFUNCTION(BlueprintCallable, Category = "UMG|Dynamic", meta = (WorldContext = "WorldContextObject"))
	static UTextBlock* CreateTextBlock(UObject* WorldContextObject, const FText& InText);

	UFUNCTION(BlueprintCallable, Category = "UMG|Dynamic", meta = (WorldContext = "WorldContextObject"))
	static UHorizontalBox* CreateHorizontalBox(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "UMG|Dynamic", meta = (WorldContext = "WorldContextObject"))
	static UButton* CreateButton(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "UMG|Dynamic", meta = (WorldContext = "WorldContextObject"))
	static USizeBox* CreateSizeBox(UObject* WorldContextObject, UWidget* InContent);

	UFUNCTION(BlueprintCallable, Category = "UMG|Dynamic", meta = (WorldContext = "WorldContextObject"))
	static UImage* CreateImage(UObject* WorldContextObject, UTexture2D* Texture);
};
