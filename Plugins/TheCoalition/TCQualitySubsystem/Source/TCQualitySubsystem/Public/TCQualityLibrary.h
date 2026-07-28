#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/ViewportSplitScreen.h"
#include "QualityConstraint.h"
#include "TCQualityLibrary.generated.h"

UCLASS(Blueprintable)
class UTCQualityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTCQualityLibrary();

    UFUNCTION(BlueprintCallable)
    static void WriteUserQualitySetting(const FString& Category, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static FString ReadUserQualitySetting(const FString& Category, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ESplitScreenType::Type> GetSplitScreenType();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetQualityPresets();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FQualityConstraint> GetConstraintsForQualityPreset(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAllowedValuesForConstraint(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAllowedConstraints();
    
};

