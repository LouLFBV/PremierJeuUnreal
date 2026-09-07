#include "InventoryWidget.h"
#include "InventoryComponent.h"
#include "InventorySlotWidget.h"
#include "Components/PanelWidget.h"

void UInventoryWidget::InitializeWidget(UInventoryComponent* InInventory)
{
	if (!InInventory) return;

	TargetInventory = InInventory;
	TargetInventory->OnInventoryUpdated.AddDynamic(this, &UInventoryWidget::RefreshGrid);

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
			NewSlot->UpdateSlot(Slots[i]);
			SlotsContainer->AddChild(NewSlot);
		}
	}
}