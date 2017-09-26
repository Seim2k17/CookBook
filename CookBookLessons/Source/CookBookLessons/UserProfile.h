// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//genrated.h include must be included as the last element in the include list !
#include "UserProfile.generated.h"

/**
 * UCLASS macro option sets this C++ calss to be Blueprintable within the UE4 Editor
 */
UCLASS(Blueprintable, BlueprintType)
class COOKBOOKLESSONS_API UUserProfile : public UObject
{
	GENERATED_BODY()

public:
	UUserProfile();

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
		float Armor;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Stats)
		float HpMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
		FString Name;
	//Displays any UClasses deriving from AActor in a dropwdown menu in Blueprints
	TSubclassOf<UObject> UClassOfPlayer;
	
	
};
