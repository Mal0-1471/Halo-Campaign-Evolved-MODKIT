#pragma once
#include "CoreMinimal.h"
#include "ImGuiColorRGBA.generated.h"

USTRUCT(BlueprintType)
struct FImGuiColorRGBA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float G;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float A;
    
    HALOIMGUIUTILS_API FImGuiColorRGBA();
};

