#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WalletComponent.generated.h"

// Délégué pour notifier le HUD quand le solde change
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCoinsChanged, int32, NewCoinCount);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROJETUNREAL_API UWalletComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UWalletComponent();

	/** Ajouter (ou retirer) des pièces */
	UFUNCTION(BlueprintCallable, Category = "Wallet")
	void AddCoins(int32 Amount);

	/** Récupérer le nombre de pièces actuel */
	UFUNCTION(BlueprintPure, Category = "Wallet")
	int32 GetCoins() const { return CoinCount; }

	/** Événement pour mettre à jour l'UI */
	UPROPERTY(BlueprintAssignable, Category = "Wallet")
	FOnCoinsChanged OnCoinsChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wallet", meta = (AllowPrivateAccess = "true"))
	int32 CoinCount = 0;
};