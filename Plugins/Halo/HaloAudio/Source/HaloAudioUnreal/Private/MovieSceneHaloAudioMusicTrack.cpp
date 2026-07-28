#include "MovieSceneHaloAudioMusicTrack.h"
#include "Evaluation/MovieSceneEvalTemplate.h"

UMovieSceneHaloAudioMusicTrack::UMovieSceneHaloAudioMusicTrack() : UMovieSceneTrack(FObjectInitializer::Get()) {
}

FMovieSceneEvalTemplatePtr UMovieSceneHaloAudioMusicTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    return FMovieSceneEvalTemplatePtr();
}


