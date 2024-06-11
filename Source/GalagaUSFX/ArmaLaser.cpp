#include "ArmaLaser.h"

// Sets default values
AArmaLaser::AArmaLaser()
{
    PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/BulletEnemyLevel2.BulletEnemyLevel2'"));

    ProyecLaser = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
    ProyecLaser->SetStaticMesh(ProjectileMeshAsset.Object);
    ProyecLaser->SetupAttachment(RootComponent);
    VelocidadDisparo = 1500;
}

// Called when the game starts or when spawned
void AArmaLaser::BeginPlay()
{
    Super::BeginPlay();
}

void AArmaLaser::MoverProyLaser()
{
    FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * VelocidadDisparo * GetWorld()->GetDeltaSeconds();
    SetActorLocation(NewLocation);
}

void AArmaLaser::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    MoverProyLaser();
}

