#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "BlamSaveGame.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamSaveGame : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedGameVersion;
    
public:
    UBlamSaveGame();

};

