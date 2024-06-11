
#include "NaveEnemigaTerrestre.h" 
// Sets default values
ANaveEnemigaTerrestre::ANaveEnemigaTerrestre()
{
	vida = 100;
    velocidad = 100.0f;
    cadencia = 2.0f;
    ActDisp = true;
}

// Called when the game starts or when spawned
void ANaveEnemigaTerrestre::BeginPlay()
{
	Super::BeginPlay(); 
}

// Called every frame
void ANaveEnemigaTerrestre::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);  
}
void ANaveEnemigaTerrestre::Mover(float DeltaTime)
{
    static float TiempoInicio = GetWorld()->GetTimeSeconds();
    FVector NewLocation = GetActorLocation();
    float TiempoTranscurrido = GetWorld()->GetTimeSeconds() - TiempoInicio;
    float fase1Duracion = 2.0f;
    float fase2Duracion = 2.0f;
    float cicloDuracion = fase1Duracion + fase2Duracion;
    float tiempoEnCiclo = fmod(TiempoTranscurrido, cicloDuracion);
    float DesplazamientoHorizontal = velocidad * DeltaTime;
    if (tiempoEnCiclo < fase1Duracion)
    {
        if (static_cast<int>(TiempoTranscurrido / cicloDuracion) % 2 == 0)
        {
            NewLocation.Y -= DesplazamientoHorizontal;
        }
        else
        {

            NewLocation.Y += DesplazamientoHorizontal;
        }
    }
    else
    {
        DesplazamientoHorizontal = velocidad * DeltaTime;
        float DesplazamientoVertical = velocidad * DeltaTime;
        if (static_cast<int>(TiempoTranscurrido / cicloDuracion) % 2 == 0)
        {
            NewLocation.X -= DesplazamientoVertical;
            NewLocation.Y -= DesplazamientoHorizontal;
        }
        else
        {
            NewLocation.X -= DesplazamientoVertical;
            NewLocation.Y += DesplazamientoHorizontal;
        }
    }
    SetActorLocation(NewLocation);
    }
void ANaveEnemigaTerrestre::Disparar()
{

	FVector SpawnPLocation = GetActorLocation() + (GetActorForwardVector() * 1);
	if (ActDisp == true)
	{
		UWorld* World = GetWorld();
		if (World)
		{
			Aproyectil* NewProj = World->SpawnActor<Aproyectil>(SpawnPLocation, FRotator::ZeroRotator);
		}
        GetWorld()->GetTimerManager().SetTimer(TimeDisparo, this, &ANaveEnemiga::TReset_Proj, cadencia);
		ActDisp = false; 
	}
}
void ANaveEnemigaTerrestre::Disparar1()
{
    if (ActDisp)
    {
        FVector SpawnPLocation = GetActorLocation() + (GetActorForwardVector() * 1);
        UWorld* World = GetWorld();
        if (World)
        {
            AArmaNormal* NewProj = World->SpawnActor<AArmaNormal>(SpawnPLocation, FRotator::ZeroRotator);
        }
        GetWorld()->GetTimerManager().SetTimer(TimeDisparo, this, &ANaveEnemiga::TReset_Proj, cadencia);
        ActDisp = false;
    }
}  