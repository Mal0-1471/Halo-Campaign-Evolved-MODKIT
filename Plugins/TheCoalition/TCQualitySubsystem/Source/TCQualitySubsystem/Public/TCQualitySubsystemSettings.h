#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "QualityConstraintKey.h"
#include "QualityDefault.h"
#include "QualityDefinitionFile.h"
#include "TCQualitySubsystemSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UTCQualitySubsystemSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQualityDefinitionFile> XboxQualityDefinitionFiles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQualityDefinitionFile> PS5QualityDefinitionFiles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQualityDefinitionFile> PCQualityDefinitionFiles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQualityDefault> QualityDefaults;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQualityConstraintKey> AllowedKeys;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnforceTemplateUse;
    
    UTCQualitySubsystemSettings();

};

