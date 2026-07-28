#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "HaloOnlineLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class HALOONLINEUTILS_API UHaloOnlineLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UHaloOnlineLocalPlayer();

};

