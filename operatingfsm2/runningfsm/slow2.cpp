//
// Created by Trung Dam on 12.12.24.
//

#include "slow2.h"
#include <iostream>

#include "fast2.h"
using namespace std;

void Slow2::entry() {
    action->driveSlowOn2();
}

void Slow2::exit() {
    action->driveSlowOff2();
}

void Slow2::enterByDefaultEntryPoint() {
    entry();
    slowfsm->enterViaPseudoStart();
}

void Slow2::enterByDeepHistoryEntryPoint() {
    entry();
}

void Slow2::leavingState() {
    exit();
}

void Slow2::showState() {
    RunningBaseState2::showState();
}

TriggerProcessingState Slow2::handleDefaultExit(TriggerProcessingState state) {
    if (state == TriggerProcessingState::endstatereached) {
        slowfsm->exit();
        leavingState();
        new(this) Fast2;
        enterByDefaultEntryPoint();
    }
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Slow2::heightFlat() {
    return handleDefaultExit(slowfsm->heightFlat());
}

TriggerProcessingState Slow2::heightHigh() {
    return handleDefaultExit(slowfsm->heightHigh());
}

TriggerProcessingState Slow2::heightBore() {
    return handleDefaultExit(slowfsm->heightBore());
}

TriggerProcessingState Slow2::heightBelt() {
    return handleDefaultExit(slowfsm->heightBelt());;
}
