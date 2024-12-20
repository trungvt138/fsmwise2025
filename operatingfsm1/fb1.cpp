//
// Created by Trung Dam on 12.12.24.
//

#include "fb1.h"
#include <iostream>

#include "err_lost_ws.h"
#include "err_new_ws.h"
#include "err_slide_full.h"
using namespace std;

void FB1::entry() {
    OperatingBaseState1::entry();
}

void FB1::exit() {
    OperatingBaseState1::exit();
}

void FB1::enterViaPseudoStart() {
    OperatingBaseState1::enterViaPseudoStart();
}

void FB1::enterViaDeepHistory() {
    entry();
    fb1runFSM->enterViaDeepHistory();
    //fb1sortFSM->enterViaDeepHistory();
}

void FB1::enterByDefaultEntryPoint() {
    entry();
    fb1runFSM->enterViaPseudoStart();
    fb1sortFSM->enterViaPseudoStart();
}

void FB1::enterByDeepHistoryEntryPoint() {
    OperatingBaseState1::enterByDeepHistoryEntryPoint();
}

void FB1::leavingState() {
    OperatingBaseState1::leavingState();
}

void FB1::showState() {
    OperatingBaseState1::showState();
}

TriggerProcessingState FB1::handleDefaultExit(TriggerProcessingState processing_state) {
    if (processing_state == TriggerProcessingState::explicitexit) {
        fb1runFSM->exit();
        fb1sortFSM->exit();
        leavingState();
        new(this) Err_slide_full;
        enterByDefaultEntryPoint();
    }
    return TriggerProcessingState::consumed;
}

TriggerProcessingState FB1::startRise1() {
    return fb1runFSM->startRise1();
}

TriggerProcessingState FB1::startFall1() {
    return OperatingBaseState1::startFall1();
}

TriggerProcessingState FB1::endRise1() {
    return OperatingBaseState1::endRise1();
}

TriggerProcessingState FB1::endFall1() {
    return OperatingBaseState1::endFall1();
}

TriggerProcessingState FB1::sortRise1() {
    TriggerProcessingState processing_state = fb1sortFSM->sortRise1();
    return handleDefaultExit(processing_state);
}

TriggerProcessingState FB1::sortFall1() {
    return fb1runFSM->sortFall1();
}

TriggerProcessingState FB1::slideRise1() {
    return fb1sortFSM->slideRise1();
}

TriggerProcessingState FB1::slideFall1() {
    return fb1sortFSM->slideFall1();
}

TriggerProcessingState FB1::heightStart1() {
    return fb1runFSM->heightStart1();
}

TriggerProcessingState FB1::heightEnd1() {
    return fb1runFSM->heightEnd1();
}

TriggerProcessingState FB1::metalRise1() {
    return fb1runFSM->metalRise1();
}

TriggerProcessingState FB1::metalFall1() {
    return fb1runFSM->metalFall1();
}

TriggerProcessingState FB1::startShortPressed1() {
    return OperatingBaseState1::startShortPressed1();
}

TriggerProcessingState FB1::ws_early() {
    cout << "ws_early" << endl;
    leavingState();
    new(this) Err_new_ws;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState FB1::ws_lost() {
    cout << "ws_lost" << endl;
    leavingState();
    new(this) Err_lost_ws;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState FB1::heightFlat() {
    return fb1runFSM->heightFlat();
}

TriggerProcessingState FB1::heightHigh() {
    return fb1runFSM->heightHigh();
}

TriggerProcessingState FB1::heightBore() {
    return fb1runFSM->heightBore();
}

TriggerProcessingState FB1::heightBelt() {
    return fb1runFSM->heightBelt();
}
