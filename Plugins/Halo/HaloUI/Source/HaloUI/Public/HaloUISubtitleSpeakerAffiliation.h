#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HaloUISubtitleSpeakerAffiliation.generated.h"

USTRUCT(BlueprintType)
struct HALOUI_API FHaloUISubtitleSpeakerAffiliation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    FHaloUISubtitleSpeakerAffiliation();
};

