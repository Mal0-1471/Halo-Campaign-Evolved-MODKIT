#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BlamDebugRenderActor.generated.h"

class UBlamDebugMeshComponent;
class UFont;

UCLASS(Blueprintable)
class BLAMENGINE_API ABlamDebugRenderActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlamDebugMeshComponent* LineListComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlamDebugMeshComponent* TriangleListComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* DefaultFont;
    
public:
    ABlamDebugRenderActor(const FObjectInitializer& ObjectInitializer);

};

