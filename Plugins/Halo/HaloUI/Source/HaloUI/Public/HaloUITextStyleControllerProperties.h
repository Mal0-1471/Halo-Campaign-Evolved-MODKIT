#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HaloUITextStyleControllerProperties.generated.h"

class UHaloUIButtonStateStyleGroup;

USTRUCT(BlueprintType)
struct FHaloUITextStyleControllerProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bButtonCanUpdateTextStyle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHaloUIButtonStateStyleGroup> ButtonStateTextStyleGroup;
    
    HALOUI_API FHaloUITextStyleControllerProperties();
};

