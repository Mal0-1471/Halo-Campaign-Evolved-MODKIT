#pragma once
#include "CoreMinimal.h"
#include "BlamVehicleComponent.h"
#include "BlamVehicleHumanPlaneComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamVehicleHumanPlaneComponent : public UBlamVehicleComponent {
    GENERATED_BODY()
public:
    UBlamVehicleHumanPlaneComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTurnAbsolute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThrust() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEngineRPM() const;
    
};

