#pragma once
#include "CoreMinimal.h"
#include "EBlamVehicleHumanTankTread.h"
#include "BlamHumanTankTread.h"
#include "BlamVehicleComponent.h"
#include "BlamVehicleWithEngineComponent.h"
#include "BlamVehicleHumanTankComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamVehicleHumanTankComponent : public UBlamVehicleWithEngineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlamVehicleComponent::FOnStop OnStop;
    
    UBlamVehicleHumanTankComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTreadGrind() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBlamHumanTankTread GetTread(EBlamVehicleHumanTankTread TreadIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEngineRPM() const;
    
};

