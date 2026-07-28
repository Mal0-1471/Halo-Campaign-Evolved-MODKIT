#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HaloUIButtonTextProperties.h"
#include "HaloUIButtonTextPropertiesOptional.h"
#include "HaloUITextStyleController.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UHaloUITextStyleController : public UInterface {
    GENERATED_BODY()
};

class IHaloUITextStyleController : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void ApplyTextProperties(const FHaloUIButtonTextProperties& Properties) PURE_VIRTUAL(ApplyTextProperties,);
    
    UFUNCTION(BlueprintCallable)
    virtual void ApplyOptionalTextProperties(const FHaloUIButtonTextPropertiesOptional& Properties) PURE_VIRTUAL(ApplyOptionalTextProperties,);
    
};

