#include "NaveTerrestreTransporte.h" 

ANaveTerrestreTransporte::ANaveTerrestreTransporte()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/Nodriza2.Nodriza2'"));
    mallaNaveEnemiga->SetStaticMesh(AssetCapsula.Object);
}
void ANaveTerrestreTransporte::BeginPlay()
{
    Super::BeginPlay();
}

void ANaveTerrestreTransporte::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
}