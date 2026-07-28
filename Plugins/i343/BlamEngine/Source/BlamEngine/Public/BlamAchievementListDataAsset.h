#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BlamAchievementDefinition.h"
#include "BlamAchievementListDataAsset.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamAchievementListDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamAchievementDefinition> Achievements;
    
public:
    UBlamAchievementListDataAsset();

};

