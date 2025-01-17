//
// Created by Trung Dam on 12.12.24.
//

#include "fb2.h"
#include <iostream>

#include "error2.h"
using namespace std;

void FB2::entry() {
    actions->lightGreenOn2();
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
    enterViaDeepHistory();
}

void FB2::leavingState() {
    OperatingBaseState2::leavingState();
}

void FB2::showState() {
    cout << "Im in FB2 state" << endl;
    fb2runFSM->showState();
    fb2sortFSM->showState();
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
    return fb2runFSM->startFall2();
}

TriggerProcessingState FB2::endRise2() {
    return fb2runFSM->endRise2();
}

TriggerProcessingState FB2::endFall2() {
    return fb2runFSM->endFall2();
}

TriggerProcessingState FB2::sortRise2() {
    TriggerProcessingState processing_state = fb2sortFSM->sortRise2();
    return handleDefaultExit(processing_state);
}

TriggerProcessingState FB2::sortFall2() {
    return fb2runFSM->sortFall2();
}

TriggerProcessingState FB2::slideRise2() {
	TriggerProcessingState state1 = fb2runFSM->slideRise2();
	TriggerProcessingState state2 = fb2sortFSM->slideRise2();
	if (state1 == TriggerProcessingState::consumed || state2 == TriggerProcessingState::consumed) {
	    return TriggerProcessingState::consumed;
	}
	return TriggerProcessingState::pending;
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

TriggerProcessingState FB2::heightBin2() {
    return fb2runFSM->heightBin();
}

TriggerProcessingState FB2::endFall1() {
    return fb2runFSM->endFall1();
}

void FB2::resetDeepHistory() {
    fb2runFSM->resetDeepHistory();
}

