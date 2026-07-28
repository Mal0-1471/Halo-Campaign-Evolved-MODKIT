#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "BlamPhysicsBodyProperties.h"
#include "BlamPhysicsAssetUserData.generated.h"

class UBlamModelRegionStringTable;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UBlamPhysicsAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlamModelRegionStringTable* ModelRegionStringTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamPhysicsBodyProperties> PhysicsBodies;
    
    UBlamPhysicsAssetUserData();

};

