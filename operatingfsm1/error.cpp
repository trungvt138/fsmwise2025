//
// Created by Trung Dam on 20.12.24.
//

#include "error.h"
#include <iostream>
#include "../mainfsm/operating.h"

#include "fb1.h"
using namespace std;

void Error::entry() {
    actions->lightRedBlinkFast1();
    actions->lightGreenOff1();
    //actions->lightRedBlinkFast2();
    actions->driveStopOn1();
    actions->lightResetOn1();
}

void Error::exit() {
    actions->lightRedOff1();
    actions->driveStopOff1();
    actions->lightStartOff1();
}

TriggerProcessingState Error::handleDefaultExit(TriggerProcessingState state) {
    if (state == TriggerProcessingState::endstatereached) {
        errorFSM->exit();
        leavingState();
        new(this) FB1;
        enterByDeepHistoryEntryPoint();
    }
    return TriggerProcessingState::consumed;
}

void Error::enterViaErrNewWS() {
    cout << "enterViaErrNewWS" << endl;
    cout << "Error WS auf FB1 neu aufgetaucht" << endl;
    entry();
    errorFSM->enterViaPseudoStart();
}

void Error::enterViaErrLostWS() {
    cout << "enterViaErrLostWS" << endl;
    cout << "Error WS auf FB1 verschwunden" << endl;
    entry();
    errorFSM->enterViaPseudoStart();
}

void Error::enterViaErrSlideFull() {
    cout << "enterViaErrSlideFull" << endl;
    cout << "Error Slide von FB1 voll" << endl;
    entry();
    errorFSM->enterViaPseudoStart();
}

TriggerProcessingState Error::startShortPressed1() {
    return handleDefaultExit(errorFSM->startShortPressed1());
}


TriggerProcessingState Error::resetPressed1() {
    return errorFSM->resetPressed1();
}
