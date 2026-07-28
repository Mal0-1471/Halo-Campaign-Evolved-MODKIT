#pragma once
#include "CoreMinimal.h"
#include "CommonDateTimeTextBlock.h"
#include "HaloUIButtonTextProperties.h"
#include "HaloUIButtonTextPropertiesOptional.h"
#include "HaloUITextStyleController.h"
#include "HaloUITextStyleControllerProperties.h"
#include "HaloUIDateTimeTextBlock.generated.h"

UCLASS(Blueprintable)
class HALOUI_API UHaloUIDateTimeTextBlock : public UCommonDateTimeTextBlock, public IHaloUITextStyleController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUITextStyleControllerProperties TextStyleControllerProperties;
    
public:

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void ApplyTextProperties(const FHaloUIButtonTextProperties& Properties) override PURE_VIRTUAL(ApplyTextProperties,);
    
    UFUNCTION(BlueprintCallable)
    void ApplyOptionalTextProperties(const FHaloUIButtonTextPropertiesOptional& Properties) override PURE_VIRTUAL(ApplyOptionalTextProperties,);
    
};

