//
// Created by Trung Dam on 20.12.24.
//

#include "error2.h"
#include <iostream>

#include "fb2.h"
using namespace std;

void Error2::entry() {
    actions->lightRedBlinkFast1();
    actions->lightRedBlinkFast2();
    actions->driveStopOn1();
    actions->driveStopOn2();
    actions->lightResetOn1();
    actions->lightResetOn2();
}

void Error2::exit() {
    actions->lightRedOff1();
    actions->lightRedOff2();
    actions->lightStartOff1();
    actions->lightStartOff2();
    actions->driveStopOff1();
    actions->driveStopOff2();
}

TriggerProcessingState Error2::handleDefaultExit(TriggerProcessingState state) {
    if (state == TriggerProcessingState::endstatereached) {
        errorFSM2->exit();
        leavingState();
        new(this) FB2;
        enterByDefaultEntryPoint();
    }
    return TriggerProcessingState::consumed;
}

void Error2::enterViaErrNewWS() {
    entry();
    cout << "enterViaErrNewWS" << endl;
    errorFSM2->enterViaPseudoStart();
}

void Error2::enterViaErrLostWS() {
    entry();
    cout << "enterViaErrLostWS" << endl;
    errorFSM2->enterViaPseudoStart();
}

void Error2::enterViaErrSlideFull() {
    entry();
    cout << "enterViaErrSlideFull" << endl;
    errorFSM2->enterViaPseudoStart();
}

TriggerProcessingState Error2::startShortPressed1() {
    return handleDefaultExit(errorFSM2->startShortPressed1());
}

TriggerProcessingState Error2::startShortPressed2() {
    return handleDefaultExit(errorFSM2->startShortPressed2());
}

TriggerProcessingState Error2::resetPressed1() {
    return errorFSM2->resetPressed1();
}

TriggerProcessingState Error2::resetPressed2() {
    return errorFSM2->resetPressed2();
}
