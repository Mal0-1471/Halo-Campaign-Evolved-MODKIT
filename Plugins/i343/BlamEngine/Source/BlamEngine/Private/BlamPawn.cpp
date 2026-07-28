#include "BlamPawn.h"
#include "BlamMeshSynchronizationComponent.h"
#include "BlamSkeletonSynchronizationComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"

ABlamPawn::ABlamPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->FirstPersonState = EBlamFirstPersonWeaponState::None;
    this->FirstPersonOverlay = EBlamFirstPersonWeaponOverlay::None;
    this->bPlayerIsMoving = false;
    this->CurrentBlamCameraPerspective = EBlamCameraPerspective::None;
    this->PlayerCrouchLevel = 0.00f;
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->DefaultSceneComponent = (USceneComponent*)RootComponent;
    this->ArmsMeshSynchronizationComponent = CreateDefaultSubobject<UBlamMeshSynchronizationComponent>(TEXT("ArmsMeshSynchronizationComponent"));
    this->LegsMeshSynchronizationComponent = CreateDefaultSubobject<UBlamMeshSynchronizationComponent>(TEXT("LegsMeshSynchronizationComponent"));
    this->SkeletonSynchronizationComponent = CreateDefaultSubobject<UBlamSkeletonSynchronizationComponent>(TEXT("SkeletonSynchronizationComponent"));
}

void ABlamPawn::GetPawnViewModeAndWeaponActors(EBlamCameraPerspective& OutViewMode, AActor*& ThirdPersonWeapon, AActor*& FirstPersonWeapon) {
}

UClass* ABlamPawn::GetEquippedWeaponClass() const {
    return NULL;
}

AActor* ABlamPawn::GetBlamObjectActor() const {
    return NULL;
}


