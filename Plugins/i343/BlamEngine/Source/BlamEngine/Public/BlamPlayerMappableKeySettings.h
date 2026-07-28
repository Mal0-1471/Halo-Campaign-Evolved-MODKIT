#pragma once
#include "CoreMinimal.h"
#include "EBlamInputDeviceType.h"
#include "EBlamKeyBindingSlot.h"
#include "PlayerMappableKeySettings.h"
#include "BlamPlayerMappableKeySettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BLAMENGINE_API UBlamPlayerMappableKeySettings : public UPlayerMappableKeySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamInputDeviceType InputDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamKeyBindingSlot BindingSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnore;
    
    UBlamPlayerMappableKeySettings();

};

