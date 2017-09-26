// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorTest.generated.h"

UCLASS(Blueprintable, BlueprintType)
class COOKBOOKLESSONS_API AMyActorTest : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyActorTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UFUNCTION(BlueprintReadOnly)
	void PrintName();

	UPROPERTY(Editanywhere, BlueprintReadWrite, Category = Stats)
		float Armor = 1.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Life)
		float HP = 10.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
		FString Name = "Dude7";

	//Displays any UClasses deriving from AActor in a dropwdown menu in Blueprints; no more in 4.16 ?
	TSubclassOf<UObject> UClassOfPlayer;

	//Displays string names of UCLASSes that derive from the GameMode C++ BaseClass; 
	UPROPERTY(EditAnywhere, meta = (MetaClass = "GameMode") , Category = Unit)
		FStringClassReference UClassGameMode;

};
