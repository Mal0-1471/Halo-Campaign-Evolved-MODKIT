#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HaloQRCodeGenFunctionLibrary.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class HALOQRCODEGENERATOR_API UHaloQRCodeGenFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHaloQRCodeGenFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static UTexture2D* GenerateQRCode(const FString& Text);
    
};

