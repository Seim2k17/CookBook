// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UserProfile.h"
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class COOKBOOKLESSONS_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AMyGameMode();
	void BeginPlay();


public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UClassNames)
		TSubclassOf<UUserProfile> UPBlueprintClassName;
	

};
