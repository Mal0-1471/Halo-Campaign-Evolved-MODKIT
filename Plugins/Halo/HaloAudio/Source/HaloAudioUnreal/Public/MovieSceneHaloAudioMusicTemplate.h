#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneHaloAudioMusicTemplate.generated.h"

class UMovieSceneHaloAudioMusicSection;

USTRUCT(BlueprintType)
struct FMovieSceneHaloAudioMusicTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneHaloAudioMusicSection* Section;
    
    HALOAUDIOUNREAL_API FMovieSceneHaloAudioMusicTemplate();
};

