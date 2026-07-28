#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HaloAudioModEventList.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API UHaloAudioModEventList : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> AkEventArray;
    
    UHaloAudioModEventList();

};

