#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DBDTunableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct FDBDTunableRowHandle
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDataTableRowHandle _dataTableRowHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _defaultValue;

public:
	DATATABLEUTILITIES_API FDBDTunableRowHandle();
};

FORCEINLINE uint32 GetTypeHash(const FDBDTunableRowHandle) { return 0; }
