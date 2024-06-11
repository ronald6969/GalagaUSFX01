// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAereaTransporte.h"
#include "NaveEnemiga.h"

// Sets default values
ANaveAereaTransporte::ANaveAereaTransporte()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/Nodriza1.Nodriza1'"));
    mallaNaveEnemiga->SetStaticMesh(AssetCapsula.Object);
}
 
void ANaveAereaTransporte::BeginPlay()
{
    Super::BeginPlay();
}

void ANaveAereaTransporte::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
}

