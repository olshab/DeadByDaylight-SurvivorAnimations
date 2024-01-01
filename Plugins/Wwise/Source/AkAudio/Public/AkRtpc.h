#pragma once

#include "CoreMinimal.h"
#include "AkAudioType.h"
#include "AkRtpc.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkRtpc : public UAkAudioType
{
	GENERATED_BODY()

public:
	UAkRtpc();
};

FORCEINLINE uint32 GetTypeHash(const UAkRtpc) { return 0; }
