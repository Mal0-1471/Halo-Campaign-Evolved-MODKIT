#pragma once
#include "CoreMinimal.h"
#include "CommonNumericTextBlock.h"
#include "CommonNumericTextBlock.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HaloUINumericTextBlockStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class HALOUI_API UHaloUINumericTextBlockStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseNumericType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonNumericType NumericType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseNumberFormattingOptions: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonNumberFormattingOptions NumberFormattingOptions;
    
    UHaloUINumericTextBlockStyle();

};

