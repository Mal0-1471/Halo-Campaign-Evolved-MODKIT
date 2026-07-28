#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateWidgetStyle.h"
#include "HaloUIEditableTextBoxStyle.generated.h"

USTRUCT(BlueprintType)
struct HALOUI_API FHaloUIEditableTextBoxStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HintText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPassword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextOverflowPolicy OverflowPolicy;
    
    FHaloUIEditableTextBoxStyle();
};

