#include "WalletComponent.h"

UWalletComponent::UWalletComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UWalletComponent::AddCoins(int32 Amount)
{
	if (Amount == 0) return;

	CoinCount += Amount;

	// Notifier l'UI / HUD
	OnCoinsChanged.Broadcast(CoinCount);
}