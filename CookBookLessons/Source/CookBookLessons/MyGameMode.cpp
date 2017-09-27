// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameMode.h"
#include "Engine.h"
#include "UserProfile.h"

AMyGameMode::AMyGameMode() 
{

}

void AMyGameMode::BeginPlay()
{
	AMyGameMode *gm = Cast<AMyGameMode>(GetWorld()->GetAuthGameMode());
	if (gm)
	{
		/** ConstructObject is a factory (ask the factory to make you the object, you don´t construct it yourself */
		UUserProfile* object = ConstructObject<UUserProfile>(gm->UPBlueprintClassName);
		UE_LOG(LogTemp, Warning, TEXT("Armor: , %d") , object->Armor);
		/**  removes the object via Unreal garbage collection (do not use delete() !*/
		object->ConditionalBeginDestroy();
		object = nullptr;
	}
}
