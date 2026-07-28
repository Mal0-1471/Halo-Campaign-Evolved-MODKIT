#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateTypes.h"
#include "Types/SlateEnums.h"
#include "Templates/SubclassOf.h"
#include "HaloUIButtonTextProperties.generated.h"

class UCommonTextStyle;
class UHaloUIButtonStateStyleGroup;

USTRUCT(BlueprintType)
struct FHaloUIButtonTextProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> TextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bButtonCanUpdateTextStyle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHaloUIButtonStateStyleGroup> ButtonStateStyleGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextJustify::Type> TextJustification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextTransformPolicy TextTransformPolicy;
    
    HALOUI_API FHaloUIButtonTextProperties();
};

