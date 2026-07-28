#pragma once
#include "CoreMinimal.h"
#include "HaloUIOptionalSound.generated.h"

class UHaloUISoundBase;

USTRUCT(BlueprintType)
struct HALOUI_API FHaloUIOptionalSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloUISoundBase* Sound;
    
    FHaloUIOptionalSound();
};

