//
// Created by Trung Dam on 02.12.24.
//

#include "contextdata.h"

bool ContextData::isFB1Clear() {
    return fb1_clr;
}

void ContextData::setFB1Clear(bool val) {
    fb1_clr = val;
}

bool ContextData::isFB2Clear() {
    return fb2_clr;
}

void ContextData::setFB2Clear(bool val) {
    fb2_clr = val;
}

bool ContextData::isE2PressedAfterCL() {
    return isE2Pressed;
}

void ContextData::setE2PressedAfterCL(bool val) {
    isE2Pressed = val;
}

