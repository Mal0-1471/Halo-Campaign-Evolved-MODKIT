#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HaloUISubtitleFontWeight.generated.h"

USTRUCT(BlueprintType)
struct HALOUI_API FHaloUISubtitleFontWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FHaloUISubtitleFontWeight();
};

