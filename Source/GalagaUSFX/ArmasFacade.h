// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArmasFacade.generated.h"

UCLASS()
class GALAGAUSFX_API AArmasFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmasFacade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
    virtual void Tick(float DeltaTime) override;

    /*void AsignarArma(ANaveEnemiga* Nave, int32 TipoArma);
    void Normal(ANaveEnemiga* Nave);
    void Laser(ANaveEnemiga* Nave);
    void Metralleta(ANaveEnemiga* Nave);*/

private:
  /*  TSubclassOf<class AArmaNormal> ArmaNormal;
    TSubclassOf<class AArmaLaser> ArmaLaser;
    TSubclassOf<class AArmaMetralleta> ArmaMetralleta;*/
};
