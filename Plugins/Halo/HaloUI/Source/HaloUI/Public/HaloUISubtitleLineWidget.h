#pragma once
#include "CoreMinimal.h"
#include "HaloUIUserWidget.h"
#include "HaloUISubtitleLineWidget.generated.h"

class UHaloUIRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HALOUI_API UHaloUISubtitleLineWidget : public UHaloUIUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloUIRichTextBlock* TextBlock;
    
public:
    UHaloUISubtitleLineWidget();

};

