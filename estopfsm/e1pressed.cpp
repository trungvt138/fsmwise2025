//
// Created by Trung Dam on 03.12.24.
//

#include "e1pressed.h"
#include <iostream>

#include "bothpressed.h"
#include "resetFSM.h"
using namespace std;

TriggerProcessingState E1Pressed::estopPressed2() {
    cout << "E1Pressed::estopPressed2()" << endl;
    leavingState();
    new(this) BothPressed;
    return TriggerProcessingState::consumed;
}

TriggerProcessingState E1Pressed::estopUnpressed1() {
    cout << "E1Pressed::estopUnpressed1()" << endl;
    leavingState();
    new(this) ResetFSM;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

void E1Pressed::showState() {
    cout << "E1Pressed::showState()" << endl;
}
