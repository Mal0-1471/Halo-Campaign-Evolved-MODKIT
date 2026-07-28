#pragma once
#include "CoreMinimal.h"
#include "EBlamInputAction.h"
#include "EBlamInputDeviceType.h"
#include "EBlamKeyBindingSlot.h"
#include "InputCoreTypes.h"
#include "BlamCustomMapping.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FBlamCustomMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamInputAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamKeyBindingSlot BindingSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamInputDeviceType InputDevice;
    
     FBlamCustomMapping();
};

