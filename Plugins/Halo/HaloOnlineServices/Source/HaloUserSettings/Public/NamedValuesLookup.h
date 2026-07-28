#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NamedValuesLookup.generated.h"

UCLASS(Blueprintable)
class HALOUSERSETTINGS_API UNamedValuesLookup : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNamedValuesLookup();

    UFUNCTION(BlueprintCallable)
    static FString GetStringValue(FName ValueCategory, FName ValidatedValueName);
    
    UFUNCTION(BlueprintCallable)
    static FText GetLabel(FName ValueCategory, FName ValidatedValueName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetIntValue(FName ValueCategory, FName ValidatedValueName);
    
    UFUNCTION(BlueprintCallable)
    static float GetFloatValue(FName ValueCategory, FName ValidatedValueName);
    
    UFUNCTION(BlueprintCallable)
    static FColor GetColorValue(FName ValueCategory, FName ValidatedValueName);
    
};

