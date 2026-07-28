#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "Engine/DeveloperSettings.h"
#include "EBlamEngineBuildConfiguration.h"
#include "BlamEnginePluginSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class BLAMENGINE_API UBlamEnginePluginSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath BlamEngineFolder;
    
private:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamEngineBuildConfiguration BuildConfiguration;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamEngineBuildConfiguration BuildConfigurationToolsDll;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableBlamEngine;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDesireClangHaloSimulationDll;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTagIoIHandler;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEditorEnableTagSystemShellSmokeTestsOnStartup;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEditorSynchronization;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSynchronizedObjectsInOutliner;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumSaveSlots;
    
    UBlamEnginePluginSettings();

};

