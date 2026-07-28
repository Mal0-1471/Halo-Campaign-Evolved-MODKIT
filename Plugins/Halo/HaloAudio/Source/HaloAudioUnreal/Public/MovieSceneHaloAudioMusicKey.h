#pragma once
#include "CoreMinimal.h"
#include "MovieSceneHaloAudioMusicKey.generated.h"

class UHaloAudioMusicControl;

USTRUCT(BlueprintType)
struct FMovieSceneHaloAudioMusicKey {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloAudioMusicControl* MusicControl;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ChannelIds;
    
    HALOAUDIOUNREAL_API FMovieSceneHaloAudioMusicKey();
};

