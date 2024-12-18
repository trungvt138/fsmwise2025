//
// Created by Trung Dam on 18.12.24.
//

#include "connectionlost.h"
#include <iostream>

#include "e1pressedcl.h"
#include "e2pressed.h"
#include "resetFSM.h"
using namespace std;

TriggerProcessingState ConnectionLost::estopPressed1() {
    cout << "ConnectionLost::estopPressed1" << endl;
    new(this) E1PressedCL;
    return TriggerProcessingState::consumed;
}

TriggerProcessingState ConnectionLost::connectionBack() {
    cout << "ConnectionLost::connectionBack" << endl;
    if (data->isE2PressedAfterCL()) {
        new(this) E2Pressed;
    }
    else {
        new(this) ResetFSM;
        enterByDefaultEntryPoint();
    }
    return TriggerProcessingState::consumed;
}
