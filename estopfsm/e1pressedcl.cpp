//
// Created by Trung Dam on 18.12.24.
//

#include "e1pressedcl.h"
#include <iostream>

#include "bothpressed.h"
#include "connectionlost.h"
#include "e1pressed.h"
using namespace std;

TriggerProcessingState E1PressedCL::estopUnpressed1() {
    cout << "E1PressedCL::estopUnpressed1()" << endl;
    new(this) ConnectionLost;
    return TriggerProcessingState::consumed;
}

TriggerProcessingState E1PressedCL::connectionBack() {
    cout << "E1PressedCL::connectionBack()" << endl;
    if (data->isE2PressedAfterCL()) {
        new(this) BothPressed;
    } else {
        new(this) E1Pressed;
    }
    return TriggerProcessingState::consumed;
}
