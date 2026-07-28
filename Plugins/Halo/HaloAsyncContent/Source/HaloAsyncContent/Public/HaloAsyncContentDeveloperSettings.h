#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "HaloAsyncContentDeveloperSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=HaloAsyncContent)
class HALOASYNCCONTENT_API UHaloAsyncContentDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataTable>> AlwaysLoadedUIContent;
    
    UHaloAsyncContentDeveloperSettings();

};

