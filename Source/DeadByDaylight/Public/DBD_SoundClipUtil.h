#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "MapMeshToAkAudioEvent.h"
#include "MapSoundsToAvoid.h"
#include "DBD_SoundClipUtil.generated.h"

class AActor;
class UStaticMeshComponent;
class UAkAudioEvent;
class UPrimitiveComponent;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBD_SoundClipUtil : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMapMeshToAkAudioEvent> AudioMap;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<FName, FMapMeshToAkAudioEvent> _audioEventMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FMapSoundsToAvoid> _objectsWhoHavePlayedASound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<UAkAudioEvent*, float> _nextSoundPlayTime;

protected:
	UFUNCTION()
	void OnCharacterEnterSoundRegion(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable)
	UAkAudioEvent* GetAudioEventForMesh(UStaticMeshComponent* usm);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSoundTriggered(AActor* actor);

public:
	UDBD_SoundClipUtil();
};

FORCEINLINE uint32 GetTypeHash(const UDBD_SoundClipUtil) { return 0; }
