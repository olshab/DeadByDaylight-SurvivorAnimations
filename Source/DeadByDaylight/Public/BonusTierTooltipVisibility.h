#pragma once

#include "CoreMinimal.h"
#include "BonusTierTooltipVisibility.generated.h"

USTRUCT(BlueprintType)
struct FBonusTierTooltipVisibility
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString archiveId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isVisible;

public:
	DEADBYDAYLIGHT_API FBonusTierTooltipVisibility();
};

FORCEINLINE uint32 GetTypeHash(const FBonusTierTooltipVisibility) { return 0; }
