#pragma once
#include "CoreMinimal.h"
#include "BlamObjectTypeComponent.h"
#include "EBlamPropertyChangeReason.h"
#include "BlamEquipmentComponent.generated.h"

class UPrimaryDataAsset;

UCLASS(Blueprintable, Const, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamEquipmentComponent : public UBlamObjectTypeComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWarmedUp, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStrengthDepleted, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeactivated, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActiveFractionChanged, float, DeltaActiveFraction, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActivated, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivated OnActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWarmedUp OnWarmedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeactivated OnDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStrengthDepleted OnStrengthDepleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveFractionChanged OnActiveFractionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrimaryDataAsset* EquipmentDataAsset;
    
    UBlamEquipmentComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SuppressesWeaponUsage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SuppressesMelee() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SuppressesGrenadeUsage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SuppressesDeviceInteraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SuppessesAllActions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWarmingUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIntrinsic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSecondsSinceActivation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergyBurned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChargesRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActiveFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DesiresThirdPersonCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DesiresSoundDucking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DesiresHiddenReticle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanNotBePickedUpByPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BlocksTracking() const;
    
};

