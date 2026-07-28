#pragma once
#include "CoreMinimal.h"
#include "BlamDamageAftermathResult.h"
#include "BlamObjectComponent.h"
#include "BlamObjectDamageOwnerComponent.generated.h"

UCLASS(Blueprintable, Const, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamObjectDamageOwnerComponent : public UBlamObjectComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageAftermath, const FBlamDamageAftermathResult&, DamageAftermathResult);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageAftermath OnDamageDealt;
    
    UBlamObjectDamageOwnerComponent(const FObjectInitializer& ObjectInitializer);

};

