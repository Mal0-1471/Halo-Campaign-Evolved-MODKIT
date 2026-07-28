#pragma once
#include "CoreMinimal.h"
#include "BlamVehicleFighterComponent.h"
#include "BlamVehicleSpaceFighterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamVehicleSpaceFighterComponent : public UBlamVehicleFighterComponent {
    GENERATED_BODY()
public:
    UBlamVehicleSpaceFighterComponent(const FObjectInitializer& ObjectInitializer);

};

