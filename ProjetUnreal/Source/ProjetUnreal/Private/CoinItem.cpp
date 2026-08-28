#include "CoinItem.h"
#include "Components/SphereComponent.h"
#include "PaperFlipbookComponent.h"
#include "WalletComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

ACoinItem::ACoinItem()
{
	PrimaryActorTick.bCanEverTick = true;

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
	if (!OtherActor) return;

	if (UWalletComponent* Wallet = OtherActor->FindComponentByClass<UWalletComponent>())
	{
		Wallet->AddCoins(CoinValue);

		if (PickupSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, PickupSound, GetActorLocation());
		}
		Destroy();
	}
}

void ACoinItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (APlayerCameraManager* CamManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0))
	{
		FVector CameraLocation = CamManager->GetCameraLocation();
		FVector CoinLocation = GetActorLocation();

		FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(CoinLocation, CameraLocation);

		// On isole uniquement le Yaw et on applique le décalage d'axe (-90.0f ou +90.0f)
		FRotator SpriteRotation = FRotator(0.0f, LookAtRotation.Yaw - 90.0f, 0.0f);

		CoinSprite->SetWorldRotation(SpriteRotation);
	}
}