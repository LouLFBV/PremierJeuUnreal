#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryTypes.h"
#include "InventorySlotWidget.generated.h"

class UImage;
class UTextBlock;
class UItemData; 

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlotHovered, UItemDataAsset*, ItemData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSlotUnhovered);

UCLASS()
class PROJETUNREAL_API UInventorySlotWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, Category = "Inventory UI|Events")
	FOnSlotHovered OnSlotHovered;

	UPROPERTY(BlueprintAssignable, Category = "Inventory UI|Events")
	FOnSlotUnhovered OnSlotUnhovered;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Inventory UI")
	void UpdateSlot(const FInventorySlot& SlotData);
	virtual void UpdateSlot_Implementation(const FInventorySlot& SlotData);

protected:
	virtual void NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnMouseLeave(const FPointerEvent& InMouseEvent) override;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UImage> ItemIcon;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> QuantityText;

private:
	UPROPERTY()
	TObjectPtr<UItemDataAsset> CachedItemData;
};