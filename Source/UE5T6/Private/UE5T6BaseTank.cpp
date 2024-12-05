// Fill out your copyright notice in the Description page of Project Settings.


#include "UE5T6BaseTank.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

AUE5T6BaseTank::AUE5T6BaseTank()
{
    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
    SpringArmComponent->SetupAttachment(RootComponent);
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
    CameraComponent->SetupAttachment(SpringArmComponent);
}

void AUE5T6BaseTank::BeginPlay()
{
    Super::BeginPlay();
}

void AUE5T6BaseTank::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    
}
