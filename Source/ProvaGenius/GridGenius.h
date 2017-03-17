// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "GridGenius.generated.h"

UCLASS()
class PROVAGENIUS_API AGridGenius : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGridGenius();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	




private:
	
	UPROPERTY(EditAnywhere)
		USceneComponent* Root;


	TSubclassOf<class AGeniusCircles> Red;
	TSubclassOf<class AGeniusCircles> Green;
	TSubclassOf<class AGeniusCircles> Blue;
	TSubclassOf<class AGeniusCircles> Yellow;
	
};
