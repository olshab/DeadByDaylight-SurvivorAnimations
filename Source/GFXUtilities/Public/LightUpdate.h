#pragma once

#include "CoreMinimal.h"
#include "LightUpdate.generated.h"

class ULightComponent;

USTRUCT(BlueprintType)
struct FLightUpdate
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	ULightComponent* light;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float multiplier;

public:
	GFXUTILITIES_API FLightUpdate();
};

FORCEINLINE uint32 GetTypeHash(const FLightUpdate) { return 0; }
