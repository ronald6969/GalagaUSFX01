#include "NaveTerrestreCaza.h"   
ANaveTerrestreCaza::ANaveTerrestreCaza()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/EnemyLevel2.EnemyLevel2'"));
    mallaNaveEnemiga->SetStaticMesh(AssetCapsula.Object);
}
void ANaveTerrestreCaza::BeginPlay()
{
    Super::BeginPlay();
}

void ANaveTerrestreCaza::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);  
    Disparar1();
}   
//void ANaveTerrestreCaza::AumentoDeVida()
//{
//	vida = 400;
//}
//void ANaveTerrestreCaza::AumentoDeVelocidad()
//{
//	velocidad = 120.0f;
//}
//void ANaveTerrestreCaza::AumentoCadenciaDisparo()
//{
//	cadencia = 1.0f;
//}
//void ANaveTerrestreCaza::AumentoDeTropas()
//{ 
//}