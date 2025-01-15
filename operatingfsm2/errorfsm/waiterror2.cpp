//
// Created by Trung Dam on 20.12.24.
//
#include "waiterror2.h"
#include <iostream>

#include "handlingerror2.h"
using namespace std;

void WaitError2::exit() {
    //action->lightResetOff1();
    action->lightResetOff2();
}

TriggerProcessingState WaitError2::resetPressed1() {
    cout << "WaitError::resetPressed1" << endl;
    leavingState();
    new(this) HandlingError2;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState WaitError2::resetPressed2() {
    cout << "WaitError::resetPressed2" << endl;
    leavingState();
    new(this) HandlingError2;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
