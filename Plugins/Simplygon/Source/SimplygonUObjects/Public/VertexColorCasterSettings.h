#pragma once

#include "CoreMinimal.h"
#include "EOpacityChannelComponent.h"
#include "EOutputDDSCompressionType.h"
#include "EOutputPixelFormat.h"
#include "EDitherType.h"
#include "EFillMode.h"
#include "EOutputImageFileFormat.h"
#include "VertexColorCasterSettings.generated.h"

USTRUCT(BlueprintType)
struct FVertexColorCasterSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MaterialChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OpacityChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOpacityChannelComponent OpacityChannelComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDitherType DitherType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFillMode FillMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Dilation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseMultisampling : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOutputPixelFormat OutputPixelFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOutputImageFileFormat OutputImageFileFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOutputDDSCompressionType OutputDDSCompressionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OutputColorLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OutputColorName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ColorSpaceEdgeThreshold;

public:
	SIMPLYGONUOBJECTS_API FVertexColorCasterSettings();
};

FORCEINLINE uint32 GetTypeHash(const FVertexColorCasterSettings) { return 0; }
