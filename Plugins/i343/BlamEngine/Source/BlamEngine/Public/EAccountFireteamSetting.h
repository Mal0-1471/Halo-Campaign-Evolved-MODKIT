#pragma once
#include "CoreMinimal.h"
#include "EAccountFireteamSetting.generated.h"

UENUM(BlueprintType)
enum class EAccountFireteamSetting : uint8 {
    FriendsCanJoin,
    InviteOnly,
    Count,
};

