//
// Created by Trung Dam on 18.12.24.
//

#include "e1pressedcl.h"
#include <iostream>
#include "bothpressedcl.h"
#include "bothpressed.h"
#include "connectionlost.h"
#include "e1pressed.h"
using namespace std;

TriggerProcessingState E1PressedCL::estopUnpressed1() {
    cout << "E1PressedCL::estopUnpressed1()" << endl;
    new(this) ConnectionLost;
    return TriggerProcessingState::consumed;
}

TriggerProcessingState E1PressedCL::estopPressed2() {
    cout << "E1PressedCL::estopPressed2()" << endl;
    new(this) BothPressedCL;
    return TriggerProcessingState::consumed;
}

TriggerProcessingState E1PressedCL::connectionBack() {
    cout << "E1PressedCL::connectionBack()" << endl;
    new(this) E1Pressed;
    return TriggerProcessingState::consumed;
}
