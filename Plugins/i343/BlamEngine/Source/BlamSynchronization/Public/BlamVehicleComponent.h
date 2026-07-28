#pragma once
#include "CoreMinimal.h"
#include "BlamObjectTypeComponent.h"
#include "BlamVehicleImpactData.h"
#include "BlamVehicleImpactDataDelta.h"
#include "EBlamPropertyChangeReason.h"
#include "BlamVehicleComponent.generated.h"

class UPrimaryDataAsset;

UCLASS(Blueprintable, Const, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamVehicleComponent : public UBlamObjectTypeComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTrickingChanged, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStop, bool, bStopped, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFrictionPointImpactStopped, int32, FrictionPointIndex, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFrictionPointImpactStarted, int32, FrictionPointIndex, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFrictionPointImpactChanged, int32, FrictionPointIndex, FBlamVehicleImpactDataDelta, ImpactDelta, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBrake, bool, bEngaged, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAirborneChanged, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrimaryDataAsset* VehicleUIDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowStateInHud;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAirborneChanged OnAirborneChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrickingChanged OnTrickingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFrictionPointImpactStarted OnFrictionPointImpactStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFrictionPointImpactChanged OnFrictionPointImpactChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFrictionPointImpactStopped OnFrictionPointImpactStopped;
    
    UBlamVehicleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTricking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAirborne() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasImpactDataForFrictionPoint(int32 FrictionPointIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVelocityMagnitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrimaryGunObjectDatumIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedRoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBlamVehicleImpactData GetImpactDataForFrictionPoint(int32 FrictionPointIndex) const;
    
};

