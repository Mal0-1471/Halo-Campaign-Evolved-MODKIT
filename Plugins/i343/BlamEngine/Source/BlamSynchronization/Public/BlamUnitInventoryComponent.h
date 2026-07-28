#pragma once
#include "CoreMinimal.h"
#include "EBlamUnitEquipmentIndex.h"
#include "EBlamUnitWeaponIndex.h"
#include "BlamObjectTypeComponent.h"
#include "BlamUnitGrenadeType.h"
#include "EBlamPropertyChangeReason.h"
#include "BlamUnitInventoryComponent.generated.h"

class AActor;

UCLASS(Blueprintable, Const, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamUnitInventoryComponent : public UBlamObjectTypeComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWeaponChanged, EBlamUnitWeaponIndex, WeaponInventoryIndex, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGrenadeCountChanged, int32, GrenadeInventoryIndex, int32, DeltaCount, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquipmentChanged, EBlamUnitEquipmentIndex, EquipmentInventoryIndex, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCurrentGrenadeChanged, int32, PreviousGrenadeInventoryIndex, int32, GrenadeInventoryIndex, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponChanged OnWeaponChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentChanged OnEquipmentChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentGrenadeChanged OnCurrentGrenadeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGrenadeCountChanged OnGrenadeCountChanged;
    
    UBlamUnitInventoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetWeapon(EBlamUnitWeaponIndex WeaponInventoryIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBlamUnitGrenadeType GetGrenadeType(int32 GrenadeInventoryIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetEquipment(EBlamUnitEquipmentIndex EquipmentInventoryIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentGrenadeInventoryIndex() const;
    
};

