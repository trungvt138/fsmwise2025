//
// Created by Trung Dam on 18.12.24.
//

#include "bothpressedcl.h"
#include <iostream>

#include "bothpressed.h"
#include "connectionlost.h"
#include "e1pressed.h"
#include "e1pressedcl.h"
using namespace std;

TriggerProcessingState BothPressedCL::estopUnpressed1() {
    cout << "BothPressedCL::estopUnpressed1()" << endl;
    new(this) ConnectionLost;
    return TriggerProcessingState::consumed;
}

TriggerProcessingState BothPressedCL::connectionBack() {
    cout << "BothPressedCL::connectionBack()" << endl;
    if (data->isE2PressedAfterCL()) {
        new(this) BothPressed;
    } else {
        new(this) E1Pressed;
    }
    return BaseStateEstop::connectionBack();
}
