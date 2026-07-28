#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/GameStateComponent.h"
#include "BlamSkullsGameStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamSkullsGameStateComponent : public UGameStateComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSkullsRemoved, const FGameplayTagContainer&, SkullsRemoved);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSkullsAdded, const FGameplayTagContainer&, SkullsAdded);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActiveSkulls;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkullsAdded OnSkullsAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkullsRemoved OnSkullsRemoved;
    
    UBlamSkullsGameStateComponent(const FObjectInitializer& ObjectInitializer);

};

