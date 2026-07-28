#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HaloUINarrationTextureData.generated.h"

class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class HALOUI_API UHaloUINarrationTextureData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* TextureRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NarrationText;
    
    UHaloUINarrationTextureData();

};

