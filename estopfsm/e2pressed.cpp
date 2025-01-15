//
// Created by Trung Dam on 03.12.24.
//

#include "e2pressed.h"
#include <iostream>
#include "e2pressedcl.h"
#include "bothpressed.h"
#include "resetFSM.h"
using namespace std;

TriggerProcessingState E2Pressed::estopPressed1() {
    cout << "E2Pressed::estopPressed1()" << endl;
    leavingState();
    new(this) BothPressed;
    return TriggerProcessingState::consumed;
}

TriggerProcessingState E2Pressed::estopUnpressed2() {
    cout << "E2Pressed::estopUnpressed2()" << endl;
    leavingState();
    new(this) ResetFSM;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState E2Pressed::connectionLost() {
    cout << "E2Pressed::connectionLost()" << endl;
    new(this) E2PressedCL;
    return TriggerProcessingState::consumed;
}

void E2Pressed::showState() {
    cout << "E2Pressed::showState()" << endl;
}
