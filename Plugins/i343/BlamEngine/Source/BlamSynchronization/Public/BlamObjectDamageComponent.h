#pragma once
#include "CoreMinimal.h"
#include "BlamDamageAftermathResult.h"
#include "BlamObjectComponent.h"
#include "EBlamPropertyChangeReason.h"
#include "BlamObjectDamageComponent.generated.h"

UCLASS(Blueprintable, Const, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamObjectDamageComponent : public UBlamObjectComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnShieldVitalityChanged, float, OldShieldVitality, float, NewShieldVitality, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnShieldDepletedChanged, bool, bIsDepleted, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShieldDepleted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRechargeProgress, float, DeltaVitality, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRechargeCompleted, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRechargeBegan, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDead, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamaged, float, DeltaDamage);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageAftermath, const FBlamDamageAftermathResult&, DamageAftermathResult);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnBodyVitalityChanged, float, OldBodyVitality, float, NewBodyVitality, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysShowHitMarkers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShieldDepleted OnShieldDepleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBodyVitalityChanged OnBodyVitalityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShieldVitalityChanged OnShieldVitalityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShieldDepletedChanged OnShieldDepletedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDead OnDead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDead OnResurrect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamaged OnBodyDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamaged OnShieldDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRechargeBegan OnBodyRechargeBegan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRechargeBegan OnShieldRechargeBegan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRechargeProgress OnShieldRechargeProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRechargeCompleted OnBodyRechargeCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRechargeCompleted OnShieldRechargeCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageAftermath OnDamageAftermath;
    
    UBlamObjectDamageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShieldDepleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOvershield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShieldVitality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShieldStunSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRecentShieldDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRecentBodyDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOvershieldAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentShieldDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentBodyDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBodyVitality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBodyStunSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActiveShieldVitality() const;
    
};

