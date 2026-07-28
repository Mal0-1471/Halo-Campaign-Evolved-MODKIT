#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Test_ActorComponent2.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTest_ActorComponent2 : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GreatBool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuchNumber;
    
    UTest_ActorComponent2(const FObjectInitializer& ObjectInitializer);

};

