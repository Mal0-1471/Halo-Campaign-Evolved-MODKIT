#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "MovieSceneHaloAudioSoundTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneHaloAudioSoundTrack : public UMovieSceneTrack, public IMovieSceneTrackTemplateProducer 
{
    GENERATED_BODY()
public:

    UMovieSceneHaloAudioSoundTrack();

private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;

protected:

    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;

};

