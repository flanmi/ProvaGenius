// Fill out your copyright notice in the Description page of Project Settings.

#include "ProvaGenius.h"
#include "ProvaGeniusGameMode.h"
#include "GeniusPlayerController.h"


AProvaGeniusGameMode::AProvaGeniusGameMode() {
	PlayerControllerClass = AGeniusPlayerController::StaticClass();
}

