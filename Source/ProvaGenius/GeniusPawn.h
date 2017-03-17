// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "GeniusPawn.generated.h"

UCLASS()
class PROVAGENIUS_API AGeniusPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGeniusPawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
private:

	UPROPERTY(EditAnywhere)
		UCameraComponent* Camera;
	/*
	UPROPERTY(EditAnywhere)
		class AGeniusCircles* Red;
	UPROPERTY(EditAnywhere)
		class AGeniusCircles* Green;
		UPROPERTY(EditAnywhere)
		class AGeniusCircles* Blue;
	UPROPERTY(EditAnywhere)
		class AGeniusCircles* Yellow;
		*/
	TSubclassOf<class AGeniusCircles> Red;
	TSubclassOf<class AGeniusCircles> Green;
	TSubclassOf<class AGeniusCircles> Blue;
	TSubclassOf<class AGeniusCircles> Yellow;
	
	void RandPick();
	int Pick;
};
