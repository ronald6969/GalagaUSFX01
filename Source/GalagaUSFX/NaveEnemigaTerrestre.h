// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "proyectil.h"
#include "ArmaNormal.h"
#include "NaveEnemigaTerrestre.generated.h"

UCLASS()
class GALAGAUSFX_API ANaveEnemigaTerrestre : public ANaveEnemiga
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveEnemigaTerrestre();
	int cadencia;
protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float vida;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Mover(float DeltaTime); 
	void Disparar();
	void Disparar1(); 
};
