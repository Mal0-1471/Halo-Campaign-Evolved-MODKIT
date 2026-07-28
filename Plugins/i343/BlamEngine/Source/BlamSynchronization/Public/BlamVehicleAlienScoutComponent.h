#pragma once
#include "CoreMinimal.h"
#include "BlamVehicleComponent.h"
#include "BlamVehicleAlienScoutComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamVehicleAlienScoutComponent : public UBlamVehicleComponent {
    GENERATED_BODY()
public:
    UBlamVehicleAlienScoutComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWingtipContrail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGearPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnginePower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAntiGravityStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAntiGravityEnginePosition() const;
    
};

