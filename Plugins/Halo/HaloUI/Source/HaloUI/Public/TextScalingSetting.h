#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TextScalingRange.h"
#include "TextScalingSetting.generated.h"

USTRUCT(BlueprintType)
struct HALOUI_API FTextScalingSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SettingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextScalingRange> Ranges;
    
    FTextScalingSetting();
};

