#pragma once
#include "CoreMinimal.h"
#include "EBlamCameraPerspective.h"
#include "EBlamFirstPersonWeaponOverlay.h"
#include "EBlamFirstPersonWeaponState.h"
#include "HaloModularPawn.h"
#include "BlamPawn.generated.h"

class UBlamMeshSynchronizationComponent;
class UBlamSkeletonSynchronizationComponent;
class UCameraComponent;


UCLASS(Blueprintable)
class BLAMENGINE_API ABlamPawn : public AHaloModularPawn {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnitChanged, AActor*, PreviousUnitActor, AActor*, UnitActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnStateChanged, EBlamFirstPersonWeaponState, PreviousState, FName, PreviousAnimationName, EBlamFirstPersonWeaponState, NewState, FName, NewAnimationName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnOverlayChanged, EBlamFirstPersonWeaponOverlay, PreviousOverlay, FName, PreviousAnimationName, EBlamFirstPersonWeaponOverlay, NewOverlay, FName, NewAnimationName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMovingChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCameraPerspectiveChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateChanged OnFirstPersonStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverlayChanged OnFirstPersonOverlayChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnitChanged OnUnitChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovingChanged OnMovingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraPerspectiveChanged OnCameraPerspectiveChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamFirstPersonWeaponState FirstPersonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FirstPersonStateAnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamFirstPersonWeaponOverlay FirstPersonOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FirstPersonOverlayAnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamCameraPerspective CurrentBlamCameraPerspective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerCrouchLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlamMeshSynchronizationComponent* ArmsMeshSynchronizationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlamMeshSynchronizationComponent* LegsMeshSynchronizationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlamSkeletonSynchronizationComponent* SkeletonSynchronizationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FirstPersonWeaponSocketAttachmentName;
    
public:
    ABlamPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GetPawnViewModeAndWeaponActors(EBlamCameraPerspective& OutViewMode, AActor*& ThirdPersonWeapon, AActor*& FirstPersonWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetEquippedWeaponClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBlamObjectActor() const;
    
};

