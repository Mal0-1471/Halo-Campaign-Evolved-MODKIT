#pragma once
#include "CoreMinimal.h"
#include "EBlamWeaponBarrel.h"
#include "EBlamWeaponBarrelState.h"
#include "EBlamWeaponMagazine.h"
#include "EBlamWeaponTrigger.h"
#include "BlamObjectTypeComponent.h"
#include "BlamWeaponBarrel.h"
#include "BlamWeaponMagazine.h"
#include "BlamWeaponTracking.h"
#include "BlamWeaponTrigger.h"
#include "EBlamPropertyChangeReason.h"
#include "EWeaponStructGetResult.h"
#include "BlamWeaponComponent.generated.h"

class AActor;
class UBlamHapticsEventTriggerBase;
class UBlamHapticsEventTriggerVibration;
class UBlamWeaponComponent;
class UPrimaryDataAsset;

UCLASS(Blueprintable, Const, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamWeaponComponent : public UBlamObjectTypeComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVentingChanged_BP, float, DeltaVentingProgress, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnRoundsInventoryChanged_BP, EBlamWeaponMagazine, MagazineIndex, int32, DeltaRounds, EBlamPropertyChangeReason, BlamPropertyChangeReason, bool, IsInitialized);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRoundsChanged_BP, EBlamWeaponMagazine, MagazineIndex, int32, DeltaRounds, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnReloadChanged_BP, EBlamWeaponMagazine, MagazineIndex, float, DeltaReloadTimer, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRecoveryPercentageChanged_BP, EBlamWeaponBarrel, BarrelIndex, float, DeltaRecoveryPercentage, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPropertyChanged_BP, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPowerChanged_BP, float, DeltaPower, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOverheatChanged_BP, float, DeltaOverheated, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHeatChanged_BP, float, DeltaHeat, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnErrorChanged_BP, EBlamWeaponBarrel, BarrelIndex, float, DeltaError, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnChargeChanged_BP, EBlamWeaponTrigger, TriggerIndex, float, DeltaChargedFraction, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBatteryChanged_BP, float, DeltaBattery, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnBarrelStateChanged_BP, const UBlamWeaponComponent*, WeaponComponent, EBlamWeaponBarrel, BarrelIndex, EBlamWeaponBarrelState, BarrelState, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnBarrelSecondsPerRoundChanged_BP, EBlamWeaponBarrel, BarrelIndex, float, SecondsPerRound, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBarrelFireFinished_BP, EBlamWeaponBarrel, BarrelIndex, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBarrelFire_BP, EBlamWeaponBarrel, BarrelIndex, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideWeaponOnZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysAppearFirstPersonWhenZoomed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowGhostReticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowLockOnReticle;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHeatChanged_BP OnHeatChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverheatChanged_BP OnOverheatChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVentingChanged_BP OnVentingChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPowerChanged_BP OnPowerChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBatteryChanged_BP OnBatteryChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPropertyChanged_BP OnReadyChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPropertyChanged_BP OnStowedChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPropertyChanged_BP OnTurnedOnChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRoundsChanged_BP OnRoundsLoadedChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRoundsInventoryChanged_BP OnRoundsInventoryChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReloadChanged_BP OnReloadChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnErrorChanged_BP OnErrorChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecoveryPercentageChanged_BP OnRecoveryPercentageChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChargeChanged_BP OnChargeChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBarrelFire_BP OnBarrelFire_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBarrelFireFinished_BP OnBarrelFireFinished_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBarrelStateChanged_BP OnBarrelStateChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBarrelSecondsPerRoundChanged_BP OnBarrelSecondsPerRoundChanged_BP;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrimaryDataAsset* WeaponDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlamHapticsEventTriggerVibration* BarrelFireTriggerVibrationHapticsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlamHapticsEventTriggerBase* BarrelFireTriggerResistanceHapticsEvent;
    
    UBlamWeaponComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* TryAndGetFirstPersonActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVenting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTurningOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTurnedOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverheated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLatchAutofireCharged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAlternateState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBatteryWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBatteryEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTrigger(EBlamWeaponTrigger TriggerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMagazine(EBlamWeaponMagazine MagazineIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInfiniteAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBottomlessClip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBarrel(EBlamWeaponBarrel BarrelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVentingProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTriggerCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FBlamWeaponTrigger GetTrigger(EBlamWeaponTrigger TriggerIndex, EWeaponStructGetResult& GetResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBlamWeaponTracking GetTracking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTetherFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverheatedAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMagazineCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FBlamWeaponMagazine GetMagazine(EBlamWeaponMagazine MagazineIndex, EWeaponStructGetResult& GetResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattery() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBarrelSpin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBarrelCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FBlamWeaponBarrel GetBarrel(EBlamWeaponBarrel BarrelIndex, EWeaponStructGetResult& GetResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTrack() const;
    
};

