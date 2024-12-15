//
// Created by Trung Dam on 03.12.24.
//

#include "resetFSM.h"

#include "pseudoendestop.h"
#include <iostream>

#include "e1pressed.h"
#include "e2pressed.h"
using namespace std;

TriggerProcessingState ResetFSM::handleDefaultExit() {
    TriggerProcessingState processing_state = TriggerProcessingState::pending;
    if (resetfsm->isPseudoEndState()) {
        leavingState();
        new(this) PseudoEndEstop;
        enterByDefaultEntryPoint();
        processing_state = TriggerProcessingState::endstatereached;
    }
    return processing_state;
}

void ResetFSM::enterByDefaultEntryPoint() {
    entry();
    resetfsm->enterViaPseudoStart();
}

void ResetFSM::showState() {
    cout << "ResetFSM::showState()" << endl;
}

TriggerProcessingState ResetFSM::resetPressed1() {
    cout << "ResetFSM::resetPressed1()" << endl;
    resetfsm->resetPressed1();
    return handleDefaultExit();
}

TriggerProcessingState ResetFSM::resetPressed2() {
    cout << "ResetFSM::resetPressed2()" << endl;
    resetfsm->resetPressed2();
    return handleDefaultExit();
}

TriggerProcessingState ResetFSM::estopPressed1() {
    cout << "ResetFSM::estopPressed1()" << endl;
    leavingState();
    new(this) E1Pressed;
    return TriggerProcessingState::consumed;
}

TriggerProcessingState ResetFSM::estopPressed2() {
    cout << "ResetFSM::stopPressed2()" << endl;
    leavingState();
    new(this) E2Pressed;
    return TriggerProcessingState::consumed;
}
