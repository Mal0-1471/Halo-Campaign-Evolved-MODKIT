#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "QualityConstraint.h"
#include "QualityConstraintKey.h"
#include "QualityDefinitionFile.h"
#include "QualityPreset.h"
#include "TCQualitySubsystem.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TCQUALITYSUBSYSTEM_API UTCQualitySubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UTCQualitySubsystem();

    UFUNCTION(BlueprintCallable)
    void RequestQualityChange(const TArray<FQualityConstraint>& GameConstraints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FQualityPreset> GetQualityPresets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FQualityDefinitionFile> GetQualityFilesForPlatform(const FString& PlatformName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FQualityDefinitionFile> GetQualityFiles(bool bGetForAllPlatforms);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentQualityGroupName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FQualityConstraintKey> GetAllowedConstraints();
    
    UFUNCTION(BlueprintCallable)
    void ApplyQualityPreset(const FString& QualityPresetName);
    
    UFUNCTION(BlueprintCallable)
    void ApplyQualityGroup(const FString& GroupName);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPCDefaultQualityGroup();
    
};

