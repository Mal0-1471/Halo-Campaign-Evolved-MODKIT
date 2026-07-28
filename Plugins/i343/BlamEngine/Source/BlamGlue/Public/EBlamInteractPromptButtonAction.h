#pragma once
#include "CoreMinimal.h"
#include "EBlamInteractPromptButtonAction.generated.h"

UENUM(BlueprintType)
enum class EBlamInteractPromptButtonAction : uint8 {
    None,
    ContextPrimary,
    ContextSecondary,
    Reload,
    SwitchWeapon,
    MeleeAttack,
    ThrowGrenade,
    Count,
};

