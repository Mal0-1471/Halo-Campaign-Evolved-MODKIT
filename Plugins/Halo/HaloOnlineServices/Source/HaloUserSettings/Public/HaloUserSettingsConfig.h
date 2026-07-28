#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "HaloUserSettingsConfig.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=HaloUserSettings)
class HALOUSERSETTINGS_API UHaloUserSettingsConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> NamedValuesTable;
    
    UHaloUserSettingsConfig();

};

