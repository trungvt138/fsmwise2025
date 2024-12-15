//
// Created by Trung Dam on 03.12.24.
//

#include "basestateestop.h"

#include "../resetfsm/pseudostartreset.h"
#include <iostream>

#include "e1pressed.h"
#include "e2pressed.h"
using namespace std;

void BaseStateEstop::initSubFSM() {
    resetfsm = new PseudoStartReset();
    resetfsm->initSubFSM();
}
//TODO: implement estop states
void BaseStateEstop::enterViaPortE1() {
    cout << "Entering PseudoStart in BaseStateEstop" << endl;
    new(this) E1Pressed;
}

void BaseStateEstop::enterViaPortE2() {
    cout << "Entering PseudoStart in BaseStateEstop" << endl;
    new(this) E2Pressed;
}

void BaseStateEstop::enterViaPortCL() {
}

TriggerProcessingState BaseStateEstop::handleDefaultExit(const TriggerProcessingState &handled) {
    return TriggerProcessingState::pending;
}
