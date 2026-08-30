#include "Weapon.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"

AWeapon::AWeapon()
{
	PrimaryActorTick.bCanEverTick = false;

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	RootComponent = WeaponMesh;

	Hitbox = CreateDefaultSubobject<UBoxComponent>(TEXT("Hitbox"));
	Hitbox->SetupAttachment(WeaponMesh);

	// Désactivé par défaut (QueryOnly = détection sans physique solide)
	Hitbox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Hitbox->SetCollisionResponseToAllChannels(ECR_Overlap);
}

void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	Hitbox->OnComponentBeginOverlap.AddDynamic(this, &AWeapon::OnHitboxOverlap);

	
}

void AWeapon::ToggleHitbox(bool bEnable)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("ToggleHitbox: %s"), bEnable ? TEXT("Enabled") : TEXT("Disabled")));
	if (bEnable)
	{
		AlreadyHitActors.Empty(); // Réinitialise la liste à chaque nouveau coup
		Hitbox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	}
	else
	{
		Hitbox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void AWeapon::OnHitboxOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AActor* CharacterOwner = GetOwner();

	// 1. Évite d'ignorer la cible si elle n'existe pas, si c'est le porteur de l'arme, ou si elle a déjà été touchée
	if (!OtherActor || OtherActor == CharacterOwner || AlreadyHitActors.Contains(OtherActor))
	{
		return;
	}

	// 2. Enregistre la cible
	AlreadyHitActors.Add(OtherActor);

	// 3. Inflige les dégâts via le système natif d'Unreal
	AController* InstigatorController = CharacterOwner ? CharacterOwner->GetInstigatorController() : nullptr;

	if (OtherActor && OtherActor != GetOwner())
	{
		// Inflige 25 de dégâts à l'Actor touché
		UGameplayStatics::ApplyDamage(
			OtherActor,
			25.0f,                      // Valeur des dégâts
			GetInstigatorController(), // Contrôleur qui attaque
			this,                      // L'arme cause les dégâts
			UDamageType::StaticClass()
		);
	}

	// 4. Spawn de l'effet de sang au point d'impact
	if (BloodEffect)
	{
		FVector HitLocation = OtherActor->GetActorLocation();
		if (SweepResult.bBlockingHit)
		{
			HitLocation = SweepResult.ImpactPoint;
		}
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), BloodEffect, HitLocation);
	}
}