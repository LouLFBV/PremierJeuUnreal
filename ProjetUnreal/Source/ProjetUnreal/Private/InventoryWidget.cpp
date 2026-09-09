#include "InventoryWidget.h"
#include "InventoryComponent.h"
#include "InventorySlotWidget.h"
#include "Components/PanelWidget.h"

void UInventoryWidget::InitializeWidget(UInventoryComponent* InInventory)
{
	if (!InInventory) return;

	TargetInventory = InInventory;

	// Évite les doublons de binding
	TargetInventory->OnInventoryUpdated.RemoveDynamic(this, &UInventoryWidget::RefreshGrid);
	TargetInventory->OnInventoryUpdated.AddDynamic(this, &UInventoryWidget::RefreshGrid);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Inventory Widget Initialized"));
	}
	RefreshGrid();
}

void UInventoryWidget::RefreshGrid()
{
	if (!TargetInventory || !SlotsContainer || !SlotWidgetClass) return;

	SlotsContainer->ClearChildren();

	const TArray<FInventorySlot>& Slots = TargetInventory->GetSlots();

	for (int32 i = 0; i < Slots.Num(); i++)
	{
		UInventorySlotWidget* NewSlot = CreateWidget<UInventorySlotWidget>(this, SlotWidgetClass);
		if (NewSlot)
		{
			// Sécurisation de l'accès à ItemData
			FString ItemName = Slots[i].ItemData ? Slots[i].ItemData->GetName() : TEXT("Empty");

			NewSlot->UpdateSlot(Slots[i]);
			SlotsContainer->AddChild(NewSlot);
		}
	}
}