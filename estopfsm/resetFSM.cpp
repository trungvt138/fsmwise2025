//
// Created by Trung Dam on 03.12.24.
//

#include "resetFSM.h"

#include "pseudoendestop.h"
#include <iostream>

#include "connectionlost.h"
#include "e1pressed.h"
#include "e2pressed.h"
using namespace std;

TriggerProcessingState ResetFSM::handleDefaultExit(TriggerProcessingState state) {
    if (state == TriggerProcessingState::endstatereached) {
        leavingState();
        new(this) PseudoEndEstop;
        enterByDefaultEntryPoint();
    }
    return state;
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
    return handleDefaultExit(resetfsm->resetPressed1());
}

TriggerProcessingState ResetFSM::resetPressed2() {
    cout << "ResetFSM::resetPressed2()" << endl;
    return handleDefaultExit(resetfsm->resetPressed2());
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

TriggerProcessingState ResetFSM::connectionLost() {
    cout << "ResetFSM::connectionLost()" << endl;
    leavingState();
    new(this) ConnectionLost;
    return TriggerProcessingState::consumed;
}
