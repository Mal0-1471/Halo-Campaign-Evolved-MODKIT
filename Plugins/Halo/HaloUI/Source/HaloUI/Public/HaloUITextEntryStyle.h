#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Styling/SlateTypes.h"
#include "HaloUIEditableTextBoxStyle.h"
#include "HaloUITextEntryStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class HALOUI_API UHaloUITextEntryStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableTextBoxStyle TextEntryStyleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIEditableTextBoxStyle HaloUITextEntryStyleData;
    
    UHaloUITextEntryStyle();

};

