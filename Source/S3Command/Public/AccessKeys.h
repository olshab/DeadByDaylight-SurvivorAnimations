#pragma once

#include "CoreMinimal.h"
#include "AccessKey.h"
#include "UObject/NoExportTypes.h"
#include "AccessKeys.generated.h"

UCLASS(Blueprintable)
class S3COMMAND_API UAccessKeys : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FAccessKey> AccessKeys;

public:
	UAccessKeys();
};

FORCEINLINE uint32 GetTypeHash(const UAccessKeys) { return 0; }
