//
// Created by Trung Dam on 12.12.24.
//

#include "fb2running.h"
#include <iostream>

#include "fb2runwait.h"
using namespace std;

void Running2::initSubFSM() {
    FB2RunBaseState::initSubFSM();
}

void Running2::entry() {
    FB2RunBaseState::entry();
}

void Running2::exit() {
    action->driveStop1();
}

void Running2::enterByDefaultEntryPoint() {
    entry();
    runningfsm->enterViaPseudoStart();
}

void Running2::enterByDeepHistoryEntryPoint() {
    entry();
    runningfsm->enterViaDeepHistory();
}

void Running2::leavingState() {
    FB2RunBaseState::leavingState();
}

TriggerProcessingState Running2::endRise2() {
    cout << "Running2::endRise2()" << endl;
    runningfsm->exit();
    leavingState();
    new(this) Fb2RunWait;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Running2::heightStart2() {
    return runningfsm->heightStart2();
}

TriggerProcessingState Running2::heightEnd2() {
    return runningfsm->heightEnd2();
}

TriggerProcessingState Running2::metalRise2() {
    return runningfsm->metalRise2();
}

TriggerProcessingState Running2::metalFall2() {
    return runningfsm->metalFall2();
}

TriggerProcessingState Running2::heightFlat() {
    return runningfsm->heightFlat();
}

TriggerProcessingState Running2::heightHigh() {
    return runningfsm->heightHigh();
}

TriggerProcessingState Running2::heightBore() {
    return runningfsm->heightBore();
}

TriggerProcessingState Running2::heightBelt() {
    return runningfsm->heightBelt();
}
