#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryWidget.generated.h"

class UInventoryComponent;
class UInventorySlotWidget;
class UPanelWidget;
class UItemDataAsset;
class UImage;
class UTextBlock;
class UWidget;

UCLASS()
class PROJETUNREAL_API UInventoryWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Inventory UI")
	void InitializeWidget(UInventoryComponent* InInventory);

	UFUNCTION(BlueprintCallable, Category = "Inventory UI")
	void RefreshGrid();

protected:
	virtual void NativeConstruct() override;

	UFUNCTION()
	void HandleSlotHovered(UItemDataAsset* ItemData);

	UFUNCTION()
	void HandleSlotUnhovered();

	UPROPERTY(EditDefaultsOnly, Category = "Inventory UI")
	TSubclassOf<UInventorySlotWidget> SlotWidgetClass;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UPanelWidget> SlotsContainer;

	// Éléments du panneau d'informations
	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UWidget> DetailsPanel;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UImage> DetailIcon;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> DetailName;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> DetailType;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> DetailDescription;

private:
	UPROPERTY()
	TObjectPtr<UInventoryComponent> TargetInventory;
};