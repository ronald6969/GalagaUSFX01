// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArmaNormal.generated.h"

UCLASS()
class GALAGAUSFX_API AArmaNormal : public AActor
{
	GENERATED_BODY()
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	float VelocidadDisparo;
	void MoverProy1();
	UStaticMeshComponent* ProyecEnemy1;
public:	
	// Sets default values for this actor's properties
	AArmaNormal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	virtual void Tick(float DeltaTime) override;
	
};
