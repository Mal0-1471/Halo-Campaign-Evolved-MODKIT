#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Styling/SlateTypes.h"
#include "HaloUIScrollBarStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class HALOUI_API UHaloUIScrollBarStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBarStyle ScrollBarStyleData;
    
    UHaloUIScrollBarStyle();

};

