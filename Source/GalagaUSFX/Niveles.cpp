// Fill out your copyright notice in the Description page of Project Settings.


#include "Niveles.h"
#include "builderNull.h"
#include "NaveEnemiga.h"
#include "IImplementacion.h"

// Sets default values
ANiveles::ANiveles()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANiveles::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANiveles::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ANiveles::Naves(AActor* _Nave)
{
	Nave = Cast<IIImplementacion>(_Nave);
}
void ANiveles::Nivel1()
{ 
 
}
void ANiveles::Nivel2()
{ 
}