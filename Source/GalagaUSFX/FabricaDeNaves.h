#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FabricaDeNaves.generated.h"


class ANaveEnemiga;
class ANaveEnemigaCaza;
class ANaveEnemigaTransporte;
class ANaveAereaCaza;
class ANaveAereaTransporte;
UCLASS()
class GALAGAUSFX_API AFabricaDeNaves : public AActor
{
    GENERATED_BODY()
public:
    virtual void BeginPlay() override;/*
  TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
    TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
    TArray<ANaveAereaCaza*> TANavesEnemigasAereaCaza;
    TArray<ANaveAereaTransporte*> TANavesEnemigasAereaTransporte;*/



    AFabricaDeNaves();
    virtual void Tick(float DeltaTime) override;
    static ANaveEnemiga* CrearNave(FString TipoNave, UWorld*World, FVector ubicacion);
};