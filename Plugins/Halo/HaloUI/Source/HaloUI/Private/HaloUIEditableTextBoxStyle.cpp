#include "HaloUIEditableTextBoxStyle.h"

FHaloUIEditableTextBoxStyle::FHaloUIEditableTextBoxStyle() {
    this->IsPassword = false;
    this->Justification = ETextJustify::Left;
    this->OverflowPolicy = ETextOverflowPolicy::Clip;
}

