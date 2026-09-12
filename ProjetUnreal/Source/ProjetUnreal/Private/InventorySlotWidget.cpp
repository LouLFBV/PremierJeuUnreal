#include "InventorySlotWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "ItemData.h" 

void UInventorySlotWidget::UpdateSlot_Implementation(const FInventorySlot& SlotData)
{
	CachedItemData = SlotData.ItemData;

	if (SlotData.IsValid() && SlotData.ItemData)
	{
		if (ItemIcon)
		{
			UTexture2D* IconTexture = SlotData.ItemData->ItemData.Icon;
			if (IconTexture)
			{
				ItemIcon->SetBrushFromTexture(IconTexture);
				ItemIcon->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
			}
			else
			{
				ItemIcon->SetVisibility(ESlateVisibility::Collapsed);
			}
		}

		if (QuantityText)
		{
			if (SlotData.Quantity > 1)
			{
				QuantityText->SetText(FText::AsNumber(SlotData.Quantity));
				QuantityText->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
			}
			else
			{
				QuantityText->SetVisibility(ESlateVisibility::Collapsed);
			}
		}
	}
	else
	{
		if (ItemIcon)
		{
			ItemIcon->SetVisibility(ESlateVisibility::Collapsed);
		}
		if (QuantityText)
		{
			QuantityText->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}

void UInventorySlotWidget::NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseEnter(InGeometry, InMouseEvent);

	if (CachedItemData)
	{
		OnSlotHovered.Broadcast(CachedItemData);
	}
}

void UInventorySlotWidget::NativeOnMouseLeave(const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseLeave(InMouseEvent);

	OnSlotUnhovered.Broadcast();
}