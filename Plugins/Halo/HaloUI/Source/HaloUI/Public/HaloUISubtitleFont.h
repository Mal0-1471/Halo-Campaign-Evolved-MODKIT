#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HaloUISubtitleFont.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct HALOUI_API FHaloUISubtitleFont {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* FontObject;
    
    FHaloUISubtitleFont();
};

