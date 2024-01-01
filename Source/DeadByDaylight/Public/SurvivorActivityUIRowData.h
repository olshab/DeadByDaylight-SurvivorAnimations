#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "DBDTunableRowBase.h"
#include "GameplayTagContainer.h"
#include "SurvivorActivityUIRowData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSurvivorActivityUIRowData: public FDBDTunableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag ActivityType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> IconAsset;

public:
	DEADBYDAYLIGHT_API FSurvivorActivityUIRowData();
};

FORCEINLINE uint32 GetTypeHash(const FSurvivorActivityUIRowData) { return 0; }
