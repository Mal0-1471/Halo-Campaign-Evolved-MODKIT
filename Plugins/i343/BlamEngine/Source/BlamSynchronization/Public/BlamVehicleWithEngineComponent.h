#pragma once
#include "CoreMinimal.h"
#include "EBlamVehicleGear.h"
#include "BlamVehicleComponent.h"
#include "EBlamPropertyChangeReason.h"
#include "BlamVehicleWithEngineComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamVehicleWithEngineComponent : public UBlamVehicleComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGearShift, EBlamVehicleGear, PreviousGear, EBlamVehicleGear, NewGear, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGearShift OnGearShift;
    
    UBlamVehicleWithEngineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGearCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlamVehicleGear GetGear() const;
    
};

