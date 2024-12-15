//
// Created by Trung Dam on 03.12.24.
//

#include "wait.h"
#include <iostream>

#include "r1pressed.h"
#include "r2pressed.h"
using namespace std;

TriggerProcessingState Wait::resetPressed1() {
    cout << "Wait::resetPressed1()" << endl;
    leavingState();
    new(this) R1Pressed;
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Wait::resetPressed2() {
    cout << "Wait::resetPressed2()" << endl;
    leavingState();
    new(this) R2Pressed;
    return TriggerProcessingState::consumed;
}

void Wait::showState() {
    cout << "Wait::showState()" << endl;
}
