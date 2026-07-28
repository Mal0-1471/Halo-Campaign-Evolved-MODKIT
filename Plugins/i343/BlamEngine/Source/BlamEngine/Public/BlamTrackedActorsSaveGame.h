#pragma once
#include "CoreMinimal.h"
#include "BlamSaveGame.h"
#include "BlamTrackedActorsSaveGame.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamTrackedActorsSaveGame : public UBlamSaveGame {
    GENERATED_BODY()
public:
    UBlamTrackedActorsSaveGame();

};

