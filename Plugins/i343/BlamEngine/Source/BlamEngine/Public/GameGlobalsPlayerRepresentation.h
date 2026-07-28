#pragma once
#include "CoreMinimal.h"
#include "PlayerRepresentationFlags.h"
#include "GameGlobalsPlayerRepresentation.generated.h"

class BLAMENGINE_API UBlamBaseSoundTagDataAsset;
class BLAMENGINE_API UBlamChudDefinitionTagDataAsset;
class BLAMENGINE_API UBlamEquipmentTagDataAsset;
class BLAMENGINE_API UBlamRenderModelTagDataAsset;
class BLAMENGINE_API UBlamUnitTagDataAsset;

USTRUCT(BlueprintType)
struct BLAMENGINE_API FGameGlobalsPlayerRepresentation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRepresentationFlags Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamChudDefinitionTagDataAsset> ChudReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamRenderModelTagDataAsset> FirstPersonHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamRenderModelTagDataAsset> FirstPersonBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamUnitTagDataAsset> ThirdPersonUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ThirdPersonVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamEquipmentTagDataAsset> IntrinsicEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamBaseSoundTagDataAsset> BinocularsZoomInSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamBaseSoundTagDataAsset> BinocularsZoomOutSounds;
    
    FGameGlobalsPlayerRepresentation();
};

