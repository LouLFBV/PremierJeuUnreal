#include "InventoryWidget.h"
#include "InventoryComponent.h"
#include "InventorySlotWidget.h"
#include "Components/PanelWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "ItemData.h"

void UInventoryWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (DetailsPanel)
	{
		DetailsPanel->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void UInventoryWidget::InitializeWidget(UInventoryComponent* InInventory)
{
	if (!InInventory) return;

	TargetInventory = InInventory;

	TargetInventory->OnInventoryUpdated.RemoveDynamic(this, &UInventoryWidget::RefreshGrid);
	TargetInventory->OnInventoryUpdated.AddDynamic(this, &UInventoryWidget::RefreshGrid);

	RefreshGrid();
}

void UInventoryWidget::RefreshGrid()
{
	if (GEngine)
	{
		UE_LOG(LogTemp, Log, TEXT("Refreshing Inventory Grid"));
	}
	if (!TargetInventory || !SlotsContainer || !SlotWidgetClass) return;

	SlotsContainer->ClearChildren();

	const TArray<FInventorySlot>& Slots = TargetInventory->GetSlots();

	for (int32 i = 0; i < Slots.Num(); i++)
	{
		UInventorySlotWidget* NewSlot = CreateWidget<UInventorySlotWidget>(this, SlotWidgetClass);
		if (NewSlot)
		{
			NewSlot->UpdateSlot(Slots[i]);

			// Binding des événements de survol
			NewSlot->OnSlotHovered.AddDynamic(this, &UInventoryWidget::HandleSlotHovered);
			NewSlot->OnSlotUnhovered.AddDynamic(this, &UInventoryWidget::HandleSlotUnhovered);

			SlotsContainer->AddChild(NewSlot);
		}
	}
}

void UInventoryWidget::HandleSlotHovered(UItemDataAsset* ItemData)
{
	if (!ItemData) return;

	if (DetailName)
	{
		DetailName->SetText(ItemData->ItemData.Name);
	}

	if (DetailDescription)
	{
		DetailDescription->SetText(ItemData->ItemData.Description);
	}

	if (DetailType)
	{
		// Adapte la conversion du type/enum selon ton projet
		DetailType->SetText(FText::FromString(TEXT("Objet")));
	}

	if (DetailIcon)
	{
		if (UTexture2D* IconTexture = ItemData->ItemData.Icon)
		{
			DetailIcon->SetBrushFromTexture(IconTexture);
			DetailIcon->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		}
		else
		{
			DetailIcon->SetVisibility(ESlateVisibility::Collapsed);
		}
	}

	if (DetailsPanel)
	{
		DetailsPanel->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	}
}

void UInventoryWidget::HandleSlotUnhovered()
{
	if (DetailsPanel)
	{
		DetailsPanel->SetVisibility(ESlateVisibility::Collapsed);
	}
}