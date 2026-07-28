#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "HaloOnlineGameSession.generated.h"

UCLASS(Blueprintable)
class HALOONLINEUTILS_API AHaloOnlineGameSession : public AGameSession {
    GENERATED_BODY()
public:
    AHaloOnlineGameSession(const FObjectInitializer& ObjectInitializer);

};

