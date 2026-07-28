#pragma once
#include "CoreMinimal.h"
#include "HaloUIButtonTextProperties.h"
#include "HaloUIButtonTextPropertiesOptional.generated.h"

USTRUCT(BlueprintType)
struct FHaloUIButtonTextPropertiesOptional : public FHaloUIButtonTextProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyButtonCanUpdateTextStyle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyHorizontalAlignment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyVerticalAlignment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyTextJustification: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyTextTransformPolicy: 1;
    
    HALOUI_API FHaloUIButtonTextPropertiesOptional();
};

