#include "ArmasFacade.h"
#include "NaveEnemiga.h"  
#include "ArmaNormal.h"
#include "ArmaLaser.h"
#include "ArmaMetralleta.h"
#include "Engine/World.h"


AArmasFacade::AArmasFacade()
{
    PrimaryActorTick.bCanEverTick = true; 
    /*ArmaNormal = AArmaNormal::StaticClass();
    ArmaLaser = AArmaLaser::StaticClass();
    ArmaMetralleta = AArmaMetralleta::StaticClass();*/
}

void AArmasFacade::BeginPlay()
{
    Super::BeginPlay();
}

void AArmasFacade::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

//void AArmasFacade::AsignarArma(ANaveEnemiga* Nave, int32 TipoArma)
//{
//    switch (TipoArma)
//    {
//    case 1:
//        Metralleta(Nave);
//        break;
//    case 2:
//        Laser(Nave);
//        break;
//    case 3:
//        Metralleta(Nave);
//        break;
//    default:
//        break;
//    }
//}
//
//void AArmasFacade::Normal(ANaveEnemiga* Nave)
//{
//    if (Nave)
//    {
//        AArmaNormal* Arma = GetWorld()->SpawnActor<AArmaNormal>(ArmaNormal);
//        Nave->SetArma(Arma);
//    }
//}
//void AArmasFacade::Laser(ANaveEnemiga* Nave)
//{
//    if (Nave)
//    {
//        AArmaLaser* Arma = GetWorld()->SpawnActor<AArmaLaser>(ArmaLaser);
//        Nave->SetArma(Arma);
//    }
//}
//
//void AArmasFacade::Metralleta(ANaveEnemiga* Nave)
//{
//    if (Nave)
//    {
//        AArmaMetralleta* Arma = GetWorld()->SpawnActor<AArmaMetralleta>(ArmaMetralleta);
//        Nave->SetArma(Arma);
//    }
//}