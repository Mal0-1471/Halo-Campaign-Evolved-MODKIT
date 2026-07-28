#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rendering/RenderingCommon.h"
#include "HaloColorBlindBPLibrary.generated.h"

UCLASS(Blueprintable)
class UHaloColorBlindBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHaloColorBlindBPLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateColorBlindMode(EColorVisionDeficiency InMode, float InStrength, float InBrightness, float InContrast);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorBlindStrength(float InStrength);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorBlindMode(EColorVisionDeficiency InMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorBlindContrast(float InContrast);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorBlindBrightness(float InBrightness);
    
    UFUNCTION(BlueprintCallable)
    static void GetColorBlindParameters(float& OutStrength, float& OutBrightness, float& OutContrast);
    
    UFUNCTION(BlueprintCallable)
    static EColorVisionDeficiency GetColorBlindMode();
    
};

