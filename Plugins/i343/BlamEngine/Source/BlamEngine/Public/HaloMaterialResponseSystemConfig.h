#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "Engine/DeveloperSettings.h"
#include "HaloMaterialResponseSystemConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class BLAMENGINE_API UHaloMaterialResponseSystemConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftClassPath> DefaultMaterialHandlers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath PhysicalSurfaceToGameplayTagTable;
    
    UHaloMaterialResponseSystemConfig();

};

