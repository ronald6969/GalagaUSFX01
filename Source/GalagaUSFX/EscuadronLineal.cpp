 
#include "EscuadronLineal.h"
 
AEscuadronLineal::AEscuadronLineal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEscuadronLineal::BeginPlay()
{
	Super::BeginPlay(); 
}

// Called every frame
void AEscuadronLineal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

} 