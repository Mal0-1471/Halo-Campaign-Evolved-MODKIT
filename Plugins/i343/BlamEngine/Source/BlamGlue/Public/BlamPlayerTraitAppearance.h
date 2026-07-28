#pragma once
#include "CoreMinimal.h"
#include "EBlamActiveCamoSetting.h"
#include "BlamPlayerTraitAppearance.generated.h"

USTRUCT(BlueprintType)
struct BLAMGLUE_API FBlamPlayerTraitAppearance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamActiveCamoSetting ActiveCamoSetting;
    
    FBlamPlayerTraitAppearance();
};

