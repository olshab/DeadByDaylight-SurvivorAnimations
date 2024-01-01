#pragma once

#include "CoreMinimal.h"
#include "SaveDataBase.generated.h"

USTRUCT(BlueprintType)
struct FSaveDataBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, SaveGame)
	int32 VersionNumber;

public:
	DEADBYDAYLIGHT_API FSaveDataBase();
};

FORCEINLINE uint32 GetTypeHash(const FSaveDataBase) { return 0; }
