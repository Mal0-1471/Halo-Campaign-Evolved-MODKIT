#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "HaloMaterialResponseWorldSubsystem.generated.h"

class BLAMENGINE_API UDataTable;
class BLAMENGINE_API UHaloMaterialResponseHandler;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class BLAMENGINE_API UHaloMaterialResponseWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UHaloMaterialResponseHandler*> RegisteredHandlers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* PhysicalMaterialNameToGameplayTagDataTable;
    
public:
    UHaloMaterialResponseWorldSubsystem();

};

