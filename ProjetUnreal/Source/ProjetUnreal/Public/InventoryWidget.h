#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryWidget.generated.h"

class UInventoryComponent;
class UInventorySlotWidget;
class UPanelWidget;

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
	UPROPERTY(EditDefaultsOnly, Category = "Inventory UI")
	TSubclassOf<UInventorySlotWidget> SlotWidgetClass;

	// Conteneur UMG (WrapBox ou UniformGridPanel)
	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UPanelWidget> SlotsContainer;

private:
	UPROPERTY()
	TObjectPtr<UInventoryComponent> TargetInventory;
};