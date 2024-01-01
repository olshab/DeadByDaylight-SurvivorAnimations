#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Cinematic.h"
#include "CinematicManager.generated.h"

class UBackendCinematicContainer;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UCinematicManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FCinematic> _cinematicQueue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBackendCinematicContainer* _backendContainer;

private:
	UFUNCTION(BlueprintCallable)
	void SetVideoThumbnailProperties(FCinematic& cinematic);

public:
	UFUNCTION(BlueprintCallable)
	void PlaySingle(const FCinematic& cinematic);

	UFUNCTION(BlueprintCallable)
	void PlayMultiple(const TArray<FCinematic>& cinematics);

	UFUNCTION(BlueprintPure)
	bool HasCinematicToPlay() const;

	UFUNCTION(BlueprintCallable)
	FCinematic GetNextCinematicToPlay();

	UFUNCTION(BlueprintCallable)
	void CancelAllCinematicToPlay();

public:
	UCinematicManager();
};

FORCEINLINE uint32 GetTypeHash(const UCinematicManager) { return 0; }
