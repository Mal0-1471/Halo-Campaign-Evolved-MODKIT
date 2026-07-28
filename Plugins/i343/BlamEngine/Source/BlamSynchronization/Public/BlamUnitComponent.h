#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BlamObjectTypeComponent.h"
#include "BlamUnitSeatState.h"
#include "EBlamPropertyChangeReason.h"
#include "BlamUnitComponent.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable, Const, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamUnitComponent : public UBlamObjectTypeComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnZoomLevelChanged_BP, int32, PreviousZoomLevel, int32, NewZoomLevel, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSeatOccupancyChanged_BP, bool, bOccupied, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnSeatActorOccupancyChanged_BP, int32, SeatIndex, AActor*, PreviousSeatedUnitActor, AActor*, NewSeatedUnitActor, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPropertyChanged_BP, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayerDatumIndexChanged_BP, int32, PreviousPlayerDatumIndex, int32, NewPlayerDatumIndex, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnIsSeatedInParentChanged_BP, int32, PreviousParentSeatIndex, int32, NewParentSeatIndex, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnBoostPowerChanged_BP, float, BoostPower, float, BoostPowerDelta, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnAimingVelocityFractionChanged_BP, float, AimingVelocityFractionDelta, float, HorizontalVelocityFractionDelta, float, VerticalVelocityFractionDelta, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActiveCamouflage_BP, bool, bActivated, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPropertyChanged_BP OnIsControlledByAnyPlayerChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDatumIndexChanged_BP OnControllingPlayerDatumIndexChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDatumIndexChanged_BP OnLastControllingPlayerDatumIndexChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSeatOccupancyChanged_BP OnDriverSeatOccupancyChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSeatOccupancyChanged_BP OnGunnerSeatOccupancyChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZoomLevelChanged_BP OnZoomLevelChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAimingVelocityFractionChanged_BP OnAimingVelocityFractionChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveCamouflage_BP OnActiveCamouflage_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsSeatedInParentChanged_BP OnIsSeatedInParentChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSeatActorOccupancyChanged_BP OnSeatActorOccupancyChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoostPowerChanged_BP OnBoostPowerChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPropertyChanged_BP OnControllingPlayerPawnChanged_BP;
    
public:
    UBlamUnitComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* TryAndGetControllingPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ThrottleInReverse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThrowingGrenadeOrShooting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSeatedInParent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGunnerSeatOccupied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDriverSeatOccupied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControlledByAnyPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveCamouflageActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInfiniteGrenades() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBoost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetZoomMagnification() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetZoomLevelFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetZoomLevelAbsolute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVerticalAimingVelocityFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetThrottle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBlamUnitSeatState> GetSeatStates() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetParentWeaponDatumIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetParentSeatIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOpenAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextEmptySeatIndex(int32 SeatIndexCursor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastControllingPlayerDatumIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHorizontalAimingVelocityFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGunnerSeatPower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEmp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDriverSeatPower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCrouch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetControllingPlayerDatumIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClosedAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoostRecharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoostPower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimingVelocityFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActiveCamouflageIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAbsoluteForwardThrottle() const;
    
};

