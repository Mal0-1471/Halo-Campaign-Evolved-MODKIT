#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "GameplayTagContainer.h"
#include "HaloUISubtitleSpeakerColor.generated.h"

USTRUCT(BlueprintType)
struct HALOUI_API FHaloUISubtitleSpeakerColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    FHaloUISubtitleSpeakerColor();
};

