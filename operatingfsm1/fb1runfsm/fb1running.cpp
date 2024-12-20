//
// Created by Trung Dam on 12.12.24.
//

#include "fb1running.h"
#include <iostream>

#include "fb1runwait.h"
using namespace std;

void Running::initSubFSM() {
    FB1RunBaseState::initSubFSM();
}

void Running::entry() {
    FB1RunBaseState::entry();
}

void Running::exit() {
    action->driveStop1();
}

void Running::enterByDefaultEntryPoint() {
    entry();
    runningfsm->enterViaPseudoStart();
}

void Running::enterByDeepHistoryEntryPoint() {
    entry();
    runningfsm->enterViaDeepHistory();
}

void Running::leavingState() {
    FB1RunBaseState::leavingState();
}

TriggerProcessingState Running::endRise1() {
    cout << "Running::endRise1()" << endl;
    runningfsm->exit();
    leavingState();
    new(this) Fb1RunWait;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Running::heightStart1() {
    return runningfsm->heightStart1();
}

TriggerProcessingState Running::heightEnd1() {
    return runningfsm->heightEnd1();
}

TriggerProcessingState Running::metalRise1() {
    return runningfsm->metalRise1();
}

TriggerProcessingState Running::metalFall1() {
    return runningfsm->metalFall1();
}

TriggerProcessingState Running::heightFlat() {
    return runningfsm->heightFlat();
}

TriggerProcessingState Running::heightHigh() {
    return runningfsm->heightHigh();
}

TriggerProcessingState Running::heightBore() {
    return runningfsm->heightBore();
}

TriggerProcessingState Running::heightBelt() {
    return runningfsm->heightBelt();
}
