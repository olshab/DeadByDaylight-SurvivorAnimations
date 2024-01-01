#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "CharacterInfoScreen.generated.h"

UCLASS(Blueprintable)
class UCharacterInfoScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnBackButtonClick();

public:
	UCharacterInfoScreen();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterInfoScreen) { return 0; }
