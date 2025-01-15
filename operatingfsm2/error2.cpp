//
// Created by Trung Dam on 20.12.24.
//

#include "error2.h"
#include <iostream>
#include "../mainfsm/operating.h"
#include "fb2.h"
using namespace std;

void Error2::entry() {
    //actions->lightRedBlinkFast1();
	actions->lightGreenOff2();
    actions->lightRedBlinkFast2();
    actions->driveStopOn2();
    actions->lightResetOn2();
}

void Error2::exit() {
    actions->lightRedOff2();
    actions->lightStartOff2();
    actions->driveStopOff2();
}

TriggerProcessingState Error2::handleDefaultExit(TriggerProcessingState state) {
    if (state == TriggerProcessingState::endstatereached) {
        errorFSM2->exit();
        leavingState();
        new(this) FB2;
        enterByDeepHistoryEntryPoint();
    }
    return TriggerProcessingState::consumed;
}

void Error2::enterViaErrNewWS() {
    cout << "enterViaErrNewWS" << endl;
    cout << "Error WS auf FB2 neu aufgetaucht" << endl;
    entry();
    errorFSM2->enterViaPseudoStart();
}

void Error2::enterViaErrLostWS() {
    cout << "enterViaErrLostWS" << endl;
    cout << "Error WS auf FB1 verschwunden" << endl;
    entry();
    errorFSM2->enterViaPseudoStart();
}

void Error2::enterViaErrSlideFull() {
    cout << "enterViaErrSlideFull" << endl;
    cout << "Error Slide 2 voll" << endl;
    entry();
    errorFSM2->enterViaPseudoStart();
}

TriggerProcessingState Error2::startShortPressed2() {
    return handleDefaultExit(errorFSM2->startShortPressed2());
}

TriggerProcessingState Error2::resetPressed2() {
    return errorFSM2->resetPressed2();
}
