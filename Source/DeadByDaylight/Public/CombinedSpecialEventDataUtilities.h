#pragma once

#include "CoreMinimal.h"
#include "CombinedSpecialEventData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CombinedSpecialEventDataUtilities.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UCombinedSpecialEventDataUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static FName GetSpecialMusicState(const FCombinedSpecialEventData& data);

public:
	UCombinedSpecialEventDataUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UCombinedSpecialEventDataUtilities) { return 0; }
