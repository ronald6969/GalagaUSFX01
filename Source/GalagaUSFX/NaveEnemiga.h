#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

class UstaticMeshComponent;

UCLASS(abstract)
class GALAGAUSFX_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemiga;

protected:
	float velocidad;
	float velocidadDisparo;
	float resistencia;
	float danoProducido;
	float valorDestruccion;
	float experiencia;
	float energia;
	FString nombre;
	FVector posicion;
	bool movimiento;
	bool ActDisp;
	float tiempoDisparo;
public:
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetVelocidadDisparo() const { return velocidadDisparo; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE float GetValorDestruccion() const { return valorDestruccion; }
	FORCEINLINE float GetExperiencia() const { return experiencia; }
	FORCEINLINE float GetEnergia() const { return energia; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE bool GetMovimiento() const { return movimiento; }
	FORCEINLINE bool GetActDisp() const { return ActDisp; }
	FORCEINLINE void SetActDisp(bool _ActDisp) { ActDisp = _ActDisp; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }


	FORCEINLINE void SetVelocidadDisparo(float _velocidadDisparo) { velocidadDisparo = _velocidadDisparo; }
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetValorDestruccion(float _valorDestruccion) { valorDestruccion = _valorDestruccion; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }

	FORCEINLINE void SetExperiencia(float _experiencia) { experiencia = _experiencia; }
	FORCEINLINE void SetEnergia(float _energia) { energia = _energia; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void SetMovimiento(bool _movimiento) { movimiento = _movimiento; }
	FTimerHandle Timer_fin;
public:
	// Sets default values for this actor's properties
	ANaveEnemiga();
	//void Disparar();
	//void SetArma(class AArmaNormal* NuevaArma);
	//void SetArma(class AArmaLaser* NuevaArma);
	//void SetArma(class AArmaMetralleta* NuevaArma);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override; 
	void TReset_Proj();
protected:
	void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover, );
	FTimerHandle TimeDisparo;
private:
	AActor* ArmaActual;
};
