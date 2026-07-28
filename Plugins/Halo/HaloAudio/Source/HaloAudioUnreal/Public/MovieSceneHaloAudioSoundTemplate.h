#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneHaloAudioSoundTemplate.generated.h"

class UMovieSceneHaloAudioSoundSection;

USTRUCT(BlueprintType)
struct FMovieSceneHaloAudioSoundTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneHaloAudioSoundSection* Section;
    
    HALOAUDIOUNREAL_API FMovieSceneHaloAudioSoundTemplate();
};

