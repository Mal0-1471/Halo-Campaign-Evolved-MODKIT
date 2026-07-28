#pragma once
#include "CoreMinimal.h"
#include "BlamVehicleImpactData.h"
#include "BlamVehicleFrictionPointData.generated.h"

USTRUCT(BlueprintType)
struct FBlamVehicleFrictionPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<FBlamVehicleImpactData> ImpactData;
    
    BLAMSYNCHRONIZATION_API FBlamVehicleFrictionPointData();
};

