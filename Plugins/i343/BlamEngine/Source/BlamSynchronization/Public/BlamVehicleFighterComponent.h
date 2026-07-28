#pragma once
#include "CoreMinimal.h"
#include "BlamVehicleComponent.h"
#include "BlamVehicleFighterComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamVehicleFighterComponent : public UBlamVehicleComponent {
    GENERATED_BODY()
public:
    UBlamVehicleFighterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWingtipContrail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThrust() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEngineRPM() const;
    
};

