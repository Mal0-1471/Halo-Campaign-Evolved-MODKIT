#pragma once
#include "CoreMinimal.h"
#include "EBlamVehicleHumanJeepAxle.h"
#include "BlamHumanJeepAxle.h"
#include "BlamVehicleComponent.h"
#include "BlamVehicleWithEngineComponent.h"
#include "BlamVehicleHumanJeepComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamVehicleHumanJeepComponent : public UBlamVehicleWithEngineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlamVehicleComponent::FOnBrake OnBrake;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlamVehicleComponent::FOnBrake OnEmergencyBrake;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlamVehicleComponent::FOnStop OnStop;
    
    UBlamVehicleHumanJeepComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmergencyBraking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBraking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEngineRPM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEngineCruising() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEngineAngularVelocityFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBlamHumanJeepAxle GetAxle(EBlamVehicleHumanJeepAxle AxleIndex) const;
    
};

