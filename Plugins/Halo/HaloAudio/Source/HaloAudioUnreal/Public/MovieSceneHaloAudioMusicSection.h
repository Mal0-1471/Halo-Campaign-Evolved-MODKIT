#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneHaloAudioMusicChannel.h"
#include "MovieSceneHaloAudioMusicSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneHaloAudioMusicSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneHaloAudioMusicChannel MusicControlChannel;
    
    UMovieSceneHaloAudioMusicSection();

};

