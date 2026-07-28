#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "BlamDeveloperSettings.generated.h"

class BLAMENGINE_API UBlamAchievementListDataAsset;
class BLAMENGINE_API UBlamPlayerModelCustomizationGlobalsTagDataAsset;
class BLAMENGINE_API UBlamProgressDataAsset;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class BLAMENGINE_API UBlamDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamPlayerModelCustomizationGlobalsTagDataAsset> CustomizationGlobalsTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamProgressDataAsset> ProgressDataAsset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamAchievementListDataAsset> AchievementListDataAsset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InitialInstalledScenarioNames;
    
    UBlamDeveloperSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LevelIsReadyToAttemptLoading(const FName StartingScenarioName) const;
    
};

