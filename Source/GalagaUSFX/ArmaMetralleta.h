#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArmaMetralleta.generated.h"

UCLASS()
class GALAGAUSFX_API AArmaMetralleta : public AActor
{
    GENERATED_BODY()

public:
    AArmaMetralleta();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    void MoverProyMetralleta();

private:
    UPROPERTY(EditAnywhere)
    float VelocidadDisparo;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* ProyecMetralleta;
};