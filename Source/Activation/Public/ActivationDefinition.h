#pragma once

#include "CoreMinimal.h"
#include "EActivationStrategy.h"
#include "GameplayTagContainer.h"
#include "ActivationDefinition.generated.h"

USTRUCT(BlueprintType)
struct FActivationDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EActivationStrategy _activationStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _activationTags;

public:
	ACTIVATION_API FActivationDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FActivationDefinition) { return 0; }
