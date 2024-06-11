#include "FabricaDeNaves.h"
#include "NaveTerrestreCaza.h"
#include "NaveAereaCaza.h"
#include "NaveAereaTransporte.h"
#include "NaveEnemigaAerea.h"
#include "Engine/World.h"

AFabricaDeNaves::AFabricaDeNaves()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AFabricaDeNaves::Tick(float DeltaTime)
{
}
 
void AFabricaDeNaves::BeginPlay()
{
    Super::BeginPlay();
}

ANaveEnemiga* AFabricaDeNaves::CrearNave(const FString TipoNave, UWorld* World, FVector ubicacion)
{

    FRotator RotacionNave = FRotator(0.0f, 0.0f, 0.0f);
    /*  TArray<TSubclassOf<ANaveEnemiga*>> NavesTerrestres;
      TArray<TSubclassOf<ANaveEnemiga*>> NavesAereas;
      TArray<TSubclassOf<ANaveEnemiga*>> NavesTransporte;
      TArray<TSubclassOf<ANaveEnemiga*>> NavesCaza;*/ 
    if (TipoNave == "NaveTerrestreCaza")
    {  
        return    World->SpawnActor<ANaveTerrestreCaza>(ubicacion, RotacionNave); 
		
    } 
    else if (TipoNave == "NaveAereaCaza")
    { 
		ubicacion.X += 100.0f;
        return World->SpawnActor<ANaveAereaCaza>(ubicacion, RotacionNave); 
    }
    else if (TipoNave == "NaveAereaTransporte") { 
        return World->SpawnActor<ANaveAereaTransporte>(ubicacion, RotacionNave); 
    }
    return nullptr;
}
