//
// Created by Trung Dam on 08.12.24.
//

#include "calibrating.h"
#include <iostream>

#include "idle.h"
using namespace std;

void Calibrating::entry() {
    actions->lightGreenBlink1();
    actions->lightGreenBlink2();
}

void Calibrating::exit() {
    actions->lightGreenOff1();
    actions->lightGreenOff2();
}

void Calibrating::enterByDefaultEntryPoint() {
    entry();
    calibratingFSM->enterViaPseudoStart();
}

void Calibrating::resetDeepHistory() {
    BaseStateMain::resetDeepHistory();
}

TriggerProcessingState Calibrating::handleDefaultExit(const TriggerProcessingState &handled) {
    if (handled == TriggerProcessingState::endstatereached) {
        calibratingFSM->exit();
        leavingState();
        new(this) Idle;
        enterByDefaultEntryPoint();
    }
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Calibrating::startRise1() {
    TriggerProcessingState state = calibratingFSM->startRise1();
    return handleDefaultExit(state);
}

TriggerProcessingState Calibrating::startFall1() {
    TriggerProcessingState state = calibratingFSM->startFall1();
    return handleDefaultExit(state);
}

TriggerProcessingState Calibrating::endRise1() {
    TriggerProcessingState state = calibratingFSM->endRise1();
    return handleDefaultExit(state);
}

TriggerProcessingState Calibrating::endFall1() {
    TriggerProcessingState state = calibratingFSM->endFall1();
    return handleDefaultExit(state);
}

TriggerProcessingState Calibrating::sortRise1() {
    TriggerProcessingState state = calibratingFSM->sortRise1();
    return handleDefaultExit(state);
}

TriggerProcessingState Calibrating::sortFall1() {
    TriggerProcessingState state = calibratingFSM->sortFall1();
    return handleDefaultExit(state);
}

TriggerProcessingState Calibrating::heightStart1() {
    TriggerProcessingState state = calibratingFSM->heightStart1();
    return handleDefaultExit(state);
}

TriggerProcessingState Calibrating::heightEnd1() {
    TriggerProcessingState state = calibratingFSM->heightEnd1();
    return handleDefaultExit(state);
}

TriggerProcessingState Calibrating::startRise2() {
    TriggerProcessingState state = calibratingFSM->startRise2();
    return handleDefaultExit(state);
}

TriggerProcessingState Calibrating::startFall2() {
    TriggerProcessingState state = calibratingFSM->startFall2();
    return handleDefaultExit(state);
}

TriggerProcessingState Calibrating::endRise2() {
    TriggerProcessingState state = calibratingFSM->endRise2();
    return handleDefaultExit(state);
}

TriggerProcessingState Calibrating::endFall2() {
    TriggerProcessingState state = calibratingFSM->endFall2();
    return handleDefaultExit(state);
}

TriggerProcessingState Calibrating::sortRise2() {
    TriggerProcessingState state = calibratingFSM->sortRise2();
    return handleDefaultExit(state);
}

TriggerProcessingState Calibrating::sortFall2() {
    TriggerProcessingState state = calibratingFSM->sortFall2();
    return handleDefaultExit(state);
}

TriggerProcessingState Calibrating::heightStart2() {
    TriggerProcessingState state = calibratingFSM->heightStart2();
    return handleDefaultExit(state);
}

TriggerProcessingState Calibrating::heightEnd2() {
    TriggerProcessingState state = calibratingFSM->heightEnd2();
    return handleDefaultExit(state);
}
