#pragma once
#include "CoreMinimal.h"
#include "HaloUIButtonStyle.h"
#include "HaloUIOptionalSound.h"
#include "HaloUIToggleButtonStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class HALOUI_API UHaloUIToggleButtonStyle : public UHaloUIButtonStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIOptionalSound ToggleOnSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIOptionalSound ToggleOffSoundOverride;
    
    UHaloUIToggleButtonStyle();

};

