#include "InventoryWidget.h"
#include "InventoryComponent.h"
#include "InventorySlotWidget.h"
#include "Components/PanelWidget.h"

void UInventoryWidget::InitializeWidget(UInventoryComponent* InInventory)
{
	if (!InInventory) return;

	TargetInventory = InInventory;
	TargetInventory->OnInventoryUpdated.AddDynamic(this, &UInventoryWidget::RefreshGrid);

	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Inventory Widget Initialized"));
	}
	RefreshGrid();
}

void UInventoryWidget::RefreshGrid()
{
	if (!TargetInventory) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ERREUR : TargetInventory est NULL !"));
	if (!SlotsContainer) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ERREUR : SlotsContainer est NULL !"));
	if (!SlotWidgetClass) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ERREUR : SlotWidgetClass est NULL !"));

	if (!TargetInventory || !SlotsContainer || !SlotWidgetClass) return;

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Clearing Slots Container"));
	}
	SlotsContainer->ClearChildren();

	const TArray<FInventorySlot>& Slots = TargetInventory->GetSlots();

	for (int32 i = 0; i < Slots.Num(); i++)
	{
		UInventorySlotWidget* NewSlot = CreateWidget<UInventorySlotWidget>(this, SlotWidgetClass);
		if (NewSlot)
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Adding Slot %d: %s x%d"), i, *Slots[i].ItemData->GetName(), Slots[i].Quantity));
			}
			NewSlot->UpdateSlot(Slots[i]);
			SlotsContainer->AddChild(NewSlot);
		}
		else
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Failed to create slot widget for index %d"), i));
			}
		}
	}
}