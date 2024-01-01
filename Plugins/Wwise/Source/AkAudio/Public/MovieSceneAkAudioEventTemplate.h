#pragma once

#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneAkAudioEventTemplate.generated.h"

class UMovieSceneAkAudioEventSection;

USTRUCT(BlueprintType)
struct FMovieSceneAkAudioEventTemplate: public FMovieSceneEvalTemplate
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UMovieSceneAkAudioEventSection* Section;

public:
	AKAUDIO_API FMovieSceneAkAudioEventTemplate();
};

FORCEINLINE uint32 GetTypeHash(const FMovieSceneAkAudioEventTemplate) { return 0; }
