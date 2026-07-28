#pragma once
#include "CoreMinimal.h"
#include "BlamSaveGame.h"
#include "BlamSaveSlotSaveGame.generated.h"

class BLAMENGINE_API UBlamDataSaveGame;
class BLAMENGINE_API UBlamMetaDataSaveGame;
class BLAMENGINE_API UBlamUnrealWorldSaveGame;

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamSaveSlotSaveGame : public UBlamSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlamMetaDataSaveGame* MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlamDataSaveGame* BlamSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlamUnrealWorldSaveGame* UnrealWorldSaveGame;
    
    UBlamSaveSlotSaveGame();

};

