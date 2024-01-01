#pragma once

#include "CoreMinimal.h"
#include "SimplygonPipelineSettings.h"
#include "BillboardCloudSettings.h"
#include "AttributeTessellationSettings.h"
#include "MappingImageSettings.h"
#include "BillboardCloudVegetationPipelineSettings.generated.h"

class USimplygonMaterialCaster;

USTRUCT(BlueprintType)
struct FBillboardCloudVegetationPipelineSettings: public FSimplygonPipelineSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBillboardCloudSettings BillboardCloudSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAttributeTessellationSettings AttributeTessellationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMappingImageSettings MappingImageSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USimplygonMaterialCaster*> MaterialPropertyCasters;

public:
	SIMPLYGONUOBJECTS_API FBillboardCloudVegetationPipelineSettings();
};

FORCEINLINE uint32 GetTypeHash(const FBillboardCloudVegetationPipelineSettings) { return 0; }
