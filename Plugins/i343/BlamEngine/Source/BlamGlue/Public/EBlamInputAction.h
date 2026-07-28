#pragma once
#include "CoreMinimal.h"
#include "EBlamInputAction.generated.h"

UENUM(BlueprintType)
enum class EBlamInputAction : uint8 {
    Jump,
    SwitchGrenade,
    SwitchWeapon,
    ContextPrimary,
    MeleeAttack,
    CurrentEquipment,
    ThrowGrenade,
    FirePrimary,
    Crouch,
    ScopeZoom,
    DropWeapon,
    ScopeZoomRotateContextual,
    IntrinsicPrimaryEquipment,
    IntrinsicSecondaryEquipment,
    Sneak,
    FireSecondary,
    FireTertiary,
    VehicleTrickPrimary,
    VehicleTrickSecondary,
    ShowScoreboard,
    Reload,
    MoveForward,
    MoveBackward,
    MoveLeft,
    MoveRight,
    LookUp,
    LookDown,
    LookLeft,
    LookRight,
    ZoomIn,
    ZoomOut,
    OpenChat,
    PushToTalk,
    SeatSwitch,
    Num,
};

