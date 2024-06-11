#include "ArmaMetralleta.h"

// Sets default values
AArmaMetralleta::AArmaMetralleta()
{
    PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/BulletEnemyLevel2.BulletEnemyLevel2'"));

    ProyecMetralleta = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
    ProyecMetralleta->SetStaticMesh(ProjectileMeshAsset.Object);
    ProyecMetralleta->SetupAttachment(RootComponent);
    VelocidadDisparo = 1200;
}

// Called when the game starts or when spawned
void AArmaMetralleta::BeginPlay()
{
    Super::BeginPlay();
}

void AArmaMetralleta::MoverProyMetralleta()
{
    FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * VelocidadDisparo * GetWorld()->GetDeltaSeconds();
    SetActorLocation(NewLocation);
}

void AArmaMetralleta::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    MoverProyMetralleta();
}