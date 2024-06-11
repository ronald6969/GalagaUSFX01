#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArmaLaser.generated.h"

UCLASS()
class GALAGAUSFX_API AArmaLaser : public AActor
{
    GENERATED_BODY()

public:
    AArmaLaser();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    void MoverProyLaser();

private:
    UPROPERTY(EditAnywhere)
    float VelocidadDisparo;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* ProyecLaser;
};