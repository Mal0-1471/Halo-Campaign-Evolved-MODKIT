#pragma once
#include "CoreMinimal.h"
#include "HaloUIButtonStyle.h"
#include "HaloUIOptionalSound.h"
#include "HaloUITreeHeaderButtonStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class HALOUI_API UHaloUITreeHeaderButtonStyle : public UHaloUIButtonStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIOptionalSound ExpandSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIOptionalSound CollapseSoundOverride;
    
    UHaloUITreeHeaderButtonStyle();

};

