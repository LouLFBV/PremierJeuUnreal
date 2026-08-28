#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoinItem.generated.h"

class USphereComponent;
class UPaperFlipbookComponent;
class USoundBase;

UCLASS()
class PROJETUNREAL_API ACoinItem : public AActor
{
	GENERATED_BODY()

public:
	ACoinItem();

	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<USphereComponent> SphereCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UPaperFlipbookComponent> CoinSprite;

	/** Quantité de pièces accordée */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Coin")
	int32 CoinValue = 1;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	/** Effet sonore joué au ramassage */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Coin|Audio")
	TObjectPtr<USoundBase> PickupSound;
};