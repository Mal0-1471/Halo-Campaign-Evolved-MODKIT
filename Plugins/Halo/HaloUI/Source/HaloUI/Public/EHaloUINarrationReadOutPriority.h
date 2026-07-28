#pragma once
#include "CoreMinimal.h"
#include "EHaloUINarrationReadOutPriority.generated.h"

UENUM(BlueprintType)
enum class EHaloUINarrationReadOutPriority : uint8 {
    Maximum,
    VeryHigh = 5,
    NavigationBar = 10,
    Title = 20,
    SubTitle = 30,
    Focus = 40,
    SubFocus01 = 50,
    SubFocus02 = 60,
    SubFocus03 = 70,
    SubFocus04 = 80,
    SubFocus05 = 90,
    Helpbar = 100,
    LowPri01 = 110,
    LowPri02 = 120,
    LowPri03 = 130,
    LowPri04 = 140,
    LowPri05 = 150,
    OnlineStatus = 180,
    LoadingStatus = 190,
    Chat = 200,
    Default = SubFocus01,
    Clear = 250,
    ClearAll,
};

