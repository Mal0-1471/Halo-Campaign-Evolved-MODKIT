#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Test_ActorComponent1.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTest_ActorComponent1 : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsThisComponentAwesome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WhichNumberIsThree;
    
    UTest_ActorComponent1(const FObjectInitializer& ObjectInitializer);

};

