#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BlamIncidentNameToMissionCompletionProgress.h"
#include "BlamIncidentNameToProgressMap.h"
#include "Templates/SubclassOf.h"
#include "BlamProgressDataAsset.generated.h"

class BLAMENGINE_API UBlamProgressLocalPlayerSaveGame;

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamProgressDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProgressSaveSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBlamProgressLocalPlayerSaveGame> ProgressSaveGameClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamIncidentNameToProgressMap IncidentToGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamIncidentNameToMissionCompletionProgress MissionCompletionProgress;
    
    UBlamProgressDataAsset();

};

