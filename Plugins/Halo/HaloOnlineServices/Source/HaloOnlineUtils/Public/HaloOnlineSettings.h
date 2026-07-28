#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "HaloOnlineSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=HaloOnlineServices)
class HALOONLINEUTILS_API UHaloOnlineSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AbbreviatedTitleId;
    
    UHaloOnlineSettings();

};

