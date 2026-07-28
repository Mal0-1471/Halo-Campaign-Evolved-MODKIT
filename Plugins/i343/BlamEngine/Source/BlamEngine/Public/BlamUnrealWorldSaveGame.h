#pragma once
#include "CoreMinimal.h"
#include "BlamSaveGame.h"
#include "BlamUnrealSavedState.h"
#include "BlamUnrealWorldSaveGame.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamUnrealWorldSaveGame : public UBlamSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamUnrealSavedState ActorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UBlamSaveGame*> UnrealSaveGameSystems;
    
    UBlamUnrealWorldSaveGame();

};

