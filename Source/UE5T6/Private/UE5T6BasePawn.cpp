// Fill out your copyright notice in the Description page of Project Settings.


#include "UE5T6BasePawn.h"

// Sets default values
AUE5T6BasePawn::AUE5T6BasePawn()
{
    // Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUE5T6BasePawn::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AUE5T6BasePawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AUE5T6BasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

}

