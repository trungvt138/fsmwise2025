//
// Created by Trung Dam on 08.12.24.
//

#include "idle.h"
#include <iostream>

#include "calibrating.h"
#include "operating.h"
using namespace std;

void Idle::entry() {
    actions->lightStartOn1();
    actions->lightStartOn2();
    actions->lightResetOn1();
    actions->lightResetOn2();
}

void Idle::exit() {
    actions->lightStartOff1();
    actions->lightStartOff2();
}

TriggerProcessingState Idle::startShortPressed1() {
    leavingState();
    new(this) Operating;
    enterByDeepHistoryEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Idle::startShortPressed2() {
    leavingState();
    new(this) Operating;
    enterByDeepHistoryEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Idle::startLongPressed1() {
    leavingState();
    new(this) Calibrating;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Idle::startLongPressed2() {
    leavingState();
    new(this) Calibrating;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

void Idle::resetDeepHistory() {
    //TODO: Implement this after Operating
}

void Idle::showState() {
    cout << endl << "*** Fb1RunIdle ***" << endl;
}
