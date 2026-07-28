#include "MovieSceneHaloAudioSoundTrack.h"
#include "Evaluation/MovieSceneEvalTemplate.h"

UMovieSceneHaloAudioSoundTrack::UMovieSceneHaloAudioSoundTrack() : UMovieSceneTrack(FObjectInitializer::Get()) {
}

FMovieSceneEvalTemplatePtr UMovieSceneHaloAudioSoundTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    return FMovieSceneEvalTemplatePtr();
}


