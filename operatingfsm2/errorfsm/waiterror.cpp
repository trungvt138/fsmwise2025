//
// Created by Trung Dam on 20.12.24.
//
#include "waiterror.h"
#include <iostream>

#include "handlingerror.h"
using namespace std;

void WaitError::exit() {
    action->lightResetOff1();
    action->lightResetOff2();
}

TriggerProcessingState WaitError::resetPressed1() {
    cout << "WaitError::resetPressed1" << endl;
    leavingState();
    new(this) HandlingError;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState WaitError::resetPressed2() {
    cout << "WaitError::resetPressed2" << endl;
    leavingState();
    new(this) HandlingError;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
