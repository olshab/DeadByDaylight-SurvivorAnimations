#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NetSynchedClock.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class NETWORKUTILITIES_API UNetSynchedClock : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _serverTimeUpdateDelay;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_RequestServerTime();

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_ReportServerTime(float serverTime);

public:
	UNetSynchedClock();
};

FORCEINLINE uint32 GetTypeHash(const UNetSynchedClock) { return 0; }
