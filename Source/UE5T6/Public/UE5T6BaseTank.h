// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UE5T6BasePawn.h"
#include "UE5T6BaseTank.generated.h"

class UCameraComponent;
class USpringArmComponent;
/**
 * 
 */
UCLASS()
class UE5T6_API AUE5T6BaseTank : public AUE5T6BasePawn
{
    GENERATED_BODY()
public:
    AUE5T6BaseTank();

protected:
    virtual void BeginPlay() override;

    
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    
private:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", meta=(AllowPrivateAccess="true"))
    TObjectPtr<USpringArmComponent> SpringArmComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", meta=(AllowPrivateAccess="true"))
    TObjectPtr<UCameraComponent> CameraComponent;

    
};
