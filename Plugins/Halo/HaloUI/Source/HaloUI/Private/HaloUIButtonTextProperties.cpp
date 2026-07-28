#include "HaloUIButtonTextProperties.h"

FHaloUIButtonTextProperties::FHaloUIButtonTextProperties() {
    this->TextStyle = NULL;
    this->bButtonCanUpdateTextStyle = false;
    this->ButtonStateStyleGroup = NULL;
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->TextJustification = ETextJustify::Left;
    this->TextTransformPolicy = ETextTransformPolicy::None;
}

