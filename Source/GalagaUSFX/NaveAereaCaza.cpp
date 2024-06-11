#include "NaveAereaCaza.h"   

ANaveAereaCaza::ANaveAereaCaza()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/EnemyLevel1.EnemyLevel1'"));
    mallaNaveEnemiga->SetStaticMesh(AssetCapsula.Object);
}
void ANaveAereaCaza::BeginPlay()
{
    Super::BeginPlay();
    //GetWorld()->GetTimerManager().SetTimer(TimeDisparo, this, &ANaveAereaCaza::Disparar, 2.0f, true); 
}

void ANaveAereaCaza::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);   
	Disparar();
}


