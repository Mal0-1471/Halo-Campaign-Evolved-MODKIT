#pragma once
#include "CoreMinimal.h"
#include "Engine/DPICustomScalingRule.h"
#include "HaloUIDPICustomScalingRule.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UHaloUIDPICustomScalingRule : public UDPICustomScalingRule {
    GENERATED_BODY()
public:
    UHaloUIDPICustomScalingRule();

};

