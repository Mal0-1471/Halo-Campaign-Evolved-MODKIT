#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "HaloUIOptionalSound.h"
#include "HaloUIButtonStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class HALOUI_API UHaloUIButtonStyle : public UCommonButtonStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIOptionalSound NavigatedSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIOptionalSound HoveredSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIOptionalSound PressedSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIOptionalSound ClickedSoundOverride;
    
    UHaloUIButtonStyle();

};

