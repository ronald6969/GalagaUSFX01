#include "NaveEnemiga.h"
#include "ArmaNormal.h"
#include "ArmaLaser.h"
#include "ArmaMetralleta.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

ANaveEnemiga::ANaveEnemiga()
{
	PrimaryActorTick.bCanEverTick = true;
	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	//mallaNaveEnemiga->SetStaticMesh(malla.Object);
	mallaNaveEnemiga->SetupAttachment(RootComponent);
	RootComponent = mallaNaveEnemiga;
	//velocidad = 500;
	//tiempoDisparo = 2.0f;
	FVector Posicion = FVector(400, 0, 150);
	FRotator Rotacion = FRotator(0, 180, 0);
    ArmaActual = nullptr;
}

void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void ANaveEnemiga::BeginPlay() {
	Super::BeginPlay();
} 
void ANaveEnemiga::TReset_Proj()
{
		ActDisp = true;
}
//void ANaveEnemiga::Disparar()
//{
//    if (ArmaActual)
//    {
//        if (AArmaNormal* Arma = Cast<AArmaNormal>(ArmaActual))
//        {
//            Arma->MoverProy1();
//        }
//        else if (AArmaLaser* Arma = Cast<AArmaLaser>(ArmaActual))
//        {
//            Arma->MoverProyLaser();
//        }
//        else if (AArmaMetralleta* Arma = Cast<AArmaMetralleta>(ArmaActual))
//        {
//            Arma->MoverProyMetralleta();
//        }
//    }
//}

//void ANaveEnemiga::SetArma(AArmaNormal* NuevaArma)
//{
//    if (ArmaActual)
//    {
//        ArmaActual->Destroy();
//    }
//    ArmaActual = NuevaArma;
//}
//
//void ANaveEnemiga::SetArma(AArmaLaser* NuevaArma)
//{
//    if (ArmaActual)
//    {
//        ArmaActual->Destroy();
//    }
//    ArmaActual = NuevaArma;
//}
//
//void ANaveEnemiga::SetArma(AArmaMetralleta* NuevaArma)
//{
//    if (ArmaActual)
//    {
//        ArmaActual->Destroy();
//    }
//    ArmaActual = NuevaArma;
//}
