#pragma once
#include "CoreMinimal.h"
#include "CommonBorder.h"
#include "Templates/SubclassOf.h"
#include "HaloUIBorder.generated.h"

class UCommonBorderStyle;

UCLASS(Blueprintable)
class UHaloUIBorder : public UCommonBorder {
    GENERATED_BODY()
public:
    UHaloUIBorder();

    UFUNCTION(BlueprintCallable)
    void SetSelectedBorderStyle(TSubclassOf<UCommonBorderStyle> OverrideStyle, TSubclassOf<UCommonBorderStyle> BaseStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetBorderStyle(TSubclassOf<UCommonBorderStyle> NewStyle);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<UCommonBorderStyle> SelectBorderStyle(TSubclassOf<UCommonBorderStyle> OverrideStyle, TSubclassOf<UCommonBorderStyle> BaseStyle);
    
};

