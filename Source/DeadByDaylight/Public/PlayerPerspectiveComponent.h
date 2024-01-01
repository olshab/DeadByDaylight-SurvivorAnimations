#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerPerspectiveComponent.generated.h"

class APawn;
class AController;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerPerspectiveComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void UpdateLocallyObserved();

	UFUNCTION(BlueprintCallable)
	void OnPawnControllerChanged(APawn* pawn, AController* oldController, AController* newController);

public:
	UFUNCTION(BlueprintPure)
	bool IsLocallyObserved() const;

public:
	UPlayerPerspectiveComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerPerspectiveComponent) { return 0; }
