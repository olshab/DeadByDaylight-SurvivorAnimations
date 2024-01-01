#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "K28LockerTeleportSwapInteraction.generated.h"

class UActorComponent;
class ASlasherPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK28LockerTeleportSwapInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_RequestTeleportToTarget(ASlasherPlayer* killer, UActorComponent* teleportTarget);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RefuseTeleportationRequest();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ConfirmTeleportationRequest(ASlasherPlayer* killer, UActorComponent* teleportTarget);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_CompleteTeleportation();

public:
	UK28LockerTeleportSwapInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK28LockerTeleportSwapInteraction) { return 0; }
