//
// Created by Trung Dam on 03.12.24.
//

#include "bothpressed.h"
#include <iostream>

#include "bothpressedcl.h"
#include "e1pressed.h"
#include "e2pressed.h"
using namespace std;

TriggerProcessingState BothPressed::estopUnpressed1() {
    cout << "BothPressed::estopUnpressed1()" << endl;
    leavingState();
    new(this) E2Pressed;
    return TriggerProcessingState::consumed;
}

TriggerProcessingState BothPressed::estopUnpressed2() {
    cout << "BothPressed::estopUnpressed2()" << endl;
    leavingState();
    new(this) E1Pressed;
    return TriggerProcessingState::consumed;
}

TriggerProcessingState BothPressed::connectionLost() {
    cout << "BothPressed::connectionLost()" << endl;
    new(this) BothPressedCL;
    return TriggerProcessingState::consumed;
}

void BothPressed::showState() {
    cout << "BothPressed::showState()" << endl;
}
