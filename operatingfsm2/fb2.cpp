//
// Created by Trung Dam on 12.12.24.
//

#include "fb2.h"
#include <iostream>

#include "error2.h"
#include "err_lost_ws2.h"
#include "err_new_ws2.h"
#include "err_slide_full2.h"
using namespace std;

void FB2::entry() {
    OperatingBaseState2::entry();
}

void FB2::exit() {
    OperatingBaseState2::exit();
}

void FB2::enterViaPseudoStart() {
    OperatingBaseState2::enterViaPseudoStart();
}

void FB2::enterViaDeepHistory() {
    entry();
    fb2runFSM->enterViaDeepHistory();
    fb2sortFSM->enterViaDeepHistory();
}

void FB2::enterByDefaultEntryPoint() {
    entry();
    fb2runFSM->enterViaPseudoStart();
    fb2sortFSM->enterViaPseudoStart();
}

void FB2::enterByDeepHistoryEntryPoint() {
    OperatingBaseState2::enterByDeepHistoryEntryPoint();
}

void FB2::leavingState() {
    OperatingBaseState2::leavingState();
}

void FB2::showState() {
    OperatingBaseState2::showState();
}

TriggerProcessingState FB2::handleDefaultExit(TriggerProcessingState processing_state) {
    if (processing_state == TriggerProcessingState::explicitexit) {
        fb2runFSM->exit();
        fb2sortFSM->exit();
        leavingState();
        new(this) Error2;
        enterViaErrSlideFull();
    }
    return TriggerProcessingState::consumed;
}

TriggerProcessingState FB2::startRise2() {
    return fb2runFSM->startRise2();
}

TriggerProcessingState FB2::startFall2() {
    return OperatingBaseState2::startFall2();
}

TriggerProcessingState FB2::endRise2() {
    return OperatingBaseState2::endRise2();
}

TriggerProcessingState FB2::endFall2() {
    return OperatingBaseState2::endFall2();
}

TriggerProcessingState FB2::sortRise2() {
    TriggerProcessingState processing_state = fb2sortFSM->sortRise2();
    return handleDefaultExit(processing_state);
}

TriggerProcessingState FB2::sortFall2() {
    return fb2runFSM->sortFall2();
}

TriggerProcessingState FB2::slideRise2() {
    return fb2sortFSM->slideRise2();
}

TriggerProcessingState FB2::slideFall2() {
    return fb2sortFSM->slideFall2();
}

TriggerProcessingState FB2::heightStart2() {
    return fb2runFSM->heightStart2();
}

TriggerProcessingState FB2::heightEnd2() {
    return fb2runFSM->heightEnd2();
}

TriggerProcessingState FB2::metalRise2() {
    return fb2runFSM->metalRise2();
}

TriggerProcessingState FB2::metalFall2() {
    return fb2runFSM->metalFall2();
}

TriggerProcessingState FB2::startShortPressed2() {
    return OperatingBaseState2::startShortPressed2();
}

TriggerProcessingState FB2::ws_early() {
    cout << "ws_early" << endl;
    leavingState();
    new(this) Error2;
    enterViaErrNewWS();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState FB2::ws_lost() {
    cout << "ws_lost" << endl;
    leavingState();
    new(this) Error2;
    enterViaErrLostWS();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState FB2::heightFlat2() {
    return fb2runFSM->heightFlat();
}

TriggerProcessingState FB2::heightHigh2() {
    return fb2runFSM->heightHigh();
}

TriggerProcessingState FB2::heightBore2() {
    return fb2runFSM->heightBore();
}

TriggerProcessingState FB2::heightBelt2() {
    return fb2runFSM->heightBelt();
}
