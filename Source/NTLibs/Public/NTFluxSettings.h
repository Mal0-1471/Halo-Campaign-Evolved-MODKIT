#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NTFluxSettingsEntry.h"
#include "NTFluxSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class NTLIBS_API UNTFluxSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNTFluxSettingsEntry> Entries;
    
    UNTFluxSettings();

};

