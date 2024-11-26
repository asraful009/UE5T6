// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "UE5T6BasePawn.generated.h"

class UCapsuleComponent;
class UStaticMeshComponent;
class USceneComponent;

UCLASS()
class UE5T6_API AUE5T6BasePawn : public APawn
{
    GENERATED_BODY()

public:
    // Sets default values for this pawn's properties
    AUE5T6BasePawn();

    

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", meta=(AllowPrivateAccess="true"))
    TObjectPtr<UCapsuleComponent> CapsuleComponent;
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", meta=(AllowPrivateAccess="true"))
    TObjectPtr<UStaticMeshComponent> BaseMesh;
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", meta=(AllowPrivateAccess="true"))
    TObjectPtr<UStaticMeshComponent> TurretMesh;
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", meta=(AllowPrivateAccess="true"))
    TObjectPtr<USceneComponent> ProjectileSpawnPoint;
    
};
