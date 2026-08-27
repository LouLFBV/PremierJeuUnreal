#include "CoinItem.h"
#include "Components/SphereComponent.h"
#include "PaperFlipbookComponent.h"
#include "WalletComponent.h"
#include "Kismet/GameplayStatics.h" // Nécessaire pour PlaySoundAtLocation

ACoinItem::ACoinItem()
{
	PrimaryActorTick.bCanEverTick = false;

	// 1. Déclencheur Sphere Trigger
	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = SphereCollision;
	SphereCollision->SetSphereRadius(50.0f);
	SphereCollision->SetCollisionProfileName(TEXT("Trigger"));

	// 2. Sprite animé 2D (Flipbook)
	CoinSprite = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("CoinSprite"));
	CoinSprite->SetupAttachment(RootComponent);

	// 3. Liaison de l'événement de collision
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &ACoinItem::OnOverlapBegin);
}

void ACoinItem::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Cherche si l'acteur qui touche la pièce possède un WalletComponent
	if (UWalletComponent* Wallet = OtherActor->FindComponentByClass<UWalletComponent>())
	{
		Wallet->AddCoins(CoinValue);
		// Jouer le son à la position exacte de la pièce
		if (PickupSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, PickupSound, GetActorLocation());
		}
		Destroy(); // Détruit la pièce
	}
}