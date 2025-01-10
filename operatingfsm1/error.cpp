//
// Created by Trung Dam on 20.12.24.
//

#include "error.h"
#include <iostream>

#include "fb1.h"
using namespace std;

void Error::entry() {
    actions->lightRedBlinkFast1();
    actions->lightRedBlinkFast2();
    actions->driveStopOn1();
    actions->driveStopOn2();
    actions->lightResetOn1();
    actions->lightResetOn2();
}

void Error::exit() {
    actions->lightRedOff1();
    actions->lightRedOff2();
    actions->driveStopOff1();
    actions->driveStopOff2();
    actions->lightStartOff1();
    actions->lightStartOff2();
}

TriggerProcessingState Error::handleDefaultExit(TriggerProcessingState state) {
    if (state == TriggerProcessingState::endstatereached) {
        errorFSM->exit();
        leavingState();
        new(this) FB1;
        enterByDefaultEntryPoint();
    }
    return TriggerProcessingState::consumed;
}

void Error::enterViaErrNewWS() {
    entry();
    cout << "enterViaErrNewWS" << endl;
    errorFSM->enterViaPseudoStart();
}

void Error::enterViaErrLostWS() {
    entry();
    cout << "enterViaErrLostWS" << endl;
    errorFSM->enterViaPseudoStart();
}

void Error::enterViaErrSlideFull() {
    entry();
    cout << "enterViaErrSlideFull" << endl;
    errorFSM->enterViaPseudoStart();
}

TriggerProcessingState Error::startShortPressed1() {
    return handleDefaultExit(errorFSM->startShortPressed1());
}

TriggerProcessingState Error::startShortPressed2() {
    return handleDefaultExit(errorFSM->startShortPressed2());
}

TriggerProcessingState Error::resetPressed1() {
    return errorFSM->resetPressed1();
}

TriggerProcessingState Error::resetPressed2() {
    return errorFSM->resetPressed2();
}
