#pragma once
#include "CoreMinimal.h"
#include "Misc/FrameNumber.h"
#include "Channels/MovieSceneChannelData.h"
#include "MovieSceneHaloAudioMusicKey.h"
#include "MovieSceneHaloAudioMusicChannel.generated.h"

USTRUCT(BlueprintType)
struct HALOAUDIOUNREAL_API FMovieSceneHaloAudioMusicChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneHaloAudioMusicKey> Values;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMovieSceneKeyHandleMap KeyHandles;
    
public:
    FMovieSceneHaloAudioMusicChannel();
};

