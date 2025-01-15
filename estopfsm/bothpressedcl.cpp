//
// Created by Trung Dam on 18.12.24.
//

#include "bothpressedcl.h"
#include <iostream>

#include "bothpressed.h"
#include "connectionlost.h"
#include "e1pressed.h"
#include "e1pressedcl.h"
#include "e2pressedcl.h"
using namespace std;

TriggerProcessingState BothPressedCL::estopUnpressed1() {
    cout << "BothPressedCL::estopUnpressed1()" << endl;
    new(this) E2PressedCL;
    return TriggerProcessingState::consumed;
}

TriggerProcessingState BothPressedCL::estopUnpressed2() {
    cout << "BothPressedCL::estopUnpressed2()" << endl;
    new(this) E1PressedCL;
    return TriggerProcessingState::consumed;
}

TriggerProcessingState BothPressedCL::connectionBack() {
    cout << "BothPressedCL::connectionBack()" << endl;
    new(this) BothPressed;
    return TriggerProcessingState::consumed;
}
