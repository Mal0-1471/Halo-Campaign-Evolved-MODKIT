#pragma once
#include "CoreMinimal.h"
#include "BlamVehicleFighterComponent.h"
#include "BlamVehicleAlienFighterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamVehicleAlienFighterComponent : public UBlamVehicleFighterComponent {
    GENERATED_BODY()
public:
    UBlamVehicleAlienFighterComponent(const FObjectInitializer& ObjectInitializer);

};

