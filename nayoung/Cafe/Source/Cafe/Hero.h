// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Hero.generated.h"

UCLASS()
class CAFE_API AHero : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(VIsibleAnywhere, blueprintReadOnly, Category = "EnhancedInput", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputMappingContext> DefaultMappingContext;
	UPROPERTY(VisibleAnywhere, blueprintReadOnly, Category = "EnhancedInput", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputAction> MoveAction;

public:
	// Sets default values for this character's properties
	AHero();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
