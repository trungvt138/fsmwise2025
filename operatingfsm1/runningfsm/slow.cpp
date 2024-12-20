//
// Created by Trung Dam on 12.12.24.
//

#include "slow.h"
#include <iostream>

#include "fast.h"
using namespace std;

void Slow::entry() {
    action->driveSlowOn1();
}

void Slow::exit() {
    action->driveSlowOff1();
}

void Slow::enterByDefaultEntryPoint() {
    entry();
    slowfsm->enterViaPseudoStart();
}

void Slow::enterByDeepHistoryEntryPoint() {
    entry();
}

void Slow::leavingState() {
    exit();
}

void Slow::showState() {
    RunningBaseState::showState();
}

TriggerProcessingState Slow::handleDefaultExit(TriggerProcessingState state) {
    if (state == TriggerProcessingState::endstatereached) {
        slowfsm->exit();
        leavingState();
        new(this) Fast;
        enterByDefaultEntryPoint();
    }
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Slow::heightFlat() {
    return handleDefaultExit(slowfsm->heightFlat());
}

TriggerProcessingState Slow::heightHigh() {
    return handleDefaultExit(slowfsm->heightHigh());
}

TriggerProcessingState Slow::heightBore() {
    return handleDefaultExit(slowfsm->heightBore());
}

TriggerProcessingState Slow::heightBelt() {
    return handleDefaultExit(slowfsm->heightBelt());;
}
