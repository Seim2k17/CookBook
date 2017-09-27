#pragma once
#include "Engine.h"
#include "ColoredTexture2.generated.h"

USTRUCT()
struct COOKBOOKLESSONS_API FColoredTexture2
{

	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
		UTexture* Texture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
		FLinearColor Color;
};
