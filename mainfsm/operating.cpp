//
// Created by Trung Dam on 08.12.24.
//

#include "operating.h"
#include <iostream>

#include "idle.h"
using namespace std;

void Operating::entry() {
    actions->lightGreenOn1();
    actions->lightGreenOn2();
}

void Operating::exit() {
	actions->lightGreenOff1();
	actions->lightGreenOff2();
}

void Operating::enterByDefaultEntryPoint() {
    entry();
    operatingFSM1->enterViaPseudoStart();
    operatingFSM2->enterViaPseudoStart();
}

void Operating::enterByDeepHistoryEntryPoint() {
    entry();
    operatingFSM1->enterViaDeepHistory();
    operatingFSM2->enterViaDeepHistory();
}

void Operating::resetDeepHistory() {
    operatingFSM1->resetDeepHistory();
    operatingFSM2->resetDeepHistory();
}

TriggerProcessingState Operating::resetPressed1() {
    return operatingFSM1->resetPressed1();
}

TriggerProcessingState Operating::resetPressed2() {
    return operatingFSM2->resetPressed2();
}

TriggerProcessingState Operating::startShortPressed1() {
    return operatingFSM1->startShortPressed1();
}

TriggerProcessingState Operating::startShortPressed2() {
    return operatingFSM2->startShortPressed2();
}

TriggerProcessingState Operating::stopPressed1() {
	cout << "Operating::stopPressed1" << endl;
    leavingState();
    new(this) Idle;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Operating::stopPressed2() {
	cout << "Operating::stopPressed2" << endl;
    leavingState();
    new(this) Idle;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState Operating::startRise1() {
    return operatingFSM1->startRise1();
}

TriggerProcessingState Operating::startFall1() {
    return operatingFSM1->startFall1();
}

TriggerProcessingState Operating::startRise2() {
	TriggerProcessingState state1 = operatingFSM1->startRise2();
    TriggerProcessingState state2 = operatingFSM2->startRise2();
    if (state1 == TriggerProcessingState::consumed || state2 == TriggerProcessingState::consumed) {
    	return TriggerProcessingState::consumed;
    }
    return TriggerProcessingState::pending;
}

TriggerProcessingState Operating::startFall2() {
    return operatingFSM2->startFall2();
}

TriggerProcessingState Operating::slideRise1() {
    return operatingFSM1->slideRise1();
}

TriggerProcessingState Operating::slideFall1() {
    return operatingFSM1->slideFall1();
}

TriggerProcessingState Operating::slideRise2() {
	TriggerProcessingState state1 = operatingFSM1->slideRise2();
	 TriggerProcessingState state2 = operatingFSM2->slideRise2();
	 if (state1 == TriggerProcessingState::consumed || state2 == TriggerProcessingState::consumed) {
	    return TriggerProcessingState::consumed;
	 }
	return TriggerProcessingState::pending;
}

TriggerProcessingState Operating::slideFall2() {
    return operatingFSM2->slideFall2();
}

TriggerProcessingState Operating::endRise1() {
    return operatingFSM1->endRise1();
}

TriggerProcessingState Operating::endRise2() {
    return operatingFSM2->endRise2();
}

TriggerProcessingState Operating::endFall1() {
    return operatingFSM2->endFall1();
}

TriggerProcessingState Operating::endFall2() {
	TriggerProcessingState state1 = operatingFSM1->endFall2();
    TriggerProcessingState state2 = operatingFSM2->endFall2();
    if (state1 == TriggerProcessingState::consumed || state2 == TriggerProcessingState::consumed) {
    	return TriggerProcessingState::consumed;
    }
    return TriggerProcessingState::pending;
}

TriggerProcessingState Operating::heightStart1() {
    return operatingFSM1->heightStart1();
}

TriggerProcessingState Operating::heightStart2() {
    return operatingFSM2->heightStart2();
}

TriggerProcessingState Operating::heightEnd1() {
    return operatingFSM1->heightEnd1();
}

TriggerProcessingState Operating::heightEnd2() {
    return operatingFSM2->heightEnd2();
}

TriggerProcessingState Operating::metalRise1() {
    return operatingFSM1->metalRise1();
}

TriggerProcessingState Operating::metalFall1() {
    return operatingFSM1->metalFall1();
}

TriggerProcessingState Operating::metalRise2() {
    return operatingFSM2->metalRise2();
}

TriggerProcessingState Operating::metalFall2() {
    return operatingFSM2->metalFall2();
}

TriggerProcessingState Operating::sortRise1() {
    return operatingFSM1->sortRise1();
}

TriggerProcessingState Operating::sortFall1() {
    return operatingFSM1->sortFall1();
}

TriggerProcessingState Operating::sortRise2() {
    return operatingFSM2->sortRise2();
}

TriggerProcessingState Operating::sortFall2() {
    return operatingFSM2->sortFall2();
}

// TriggerProcessingState Operating::connectionLost() {
//     return operatingFSM2->connectionLost();
// }

TriggerProcessingState Operating::ws_early1() {
    TriggerProcessingState state = operatingFSM1->ws_early();
    return state;
}

TriggerProcessingState Operating::ws_lost1() {
    TriggerProcessingState state = operatingFSM1->ws_lost();
    return state;
}

TriggerProcessingState Operating::ws_early2() {
    TriggerProcessingState state = operatingFSM2->ws_early();
    return state;
}

TriggerProcessingState Operating::ws_lost2() {
    TriggerProcessingState state = operatingFSM2->ws_lost();
    return state;
}

TriggerProcessingState Operating::heightFlat1() {
    return operatingFSM1->heightFlat1();
}

TriggerProcessingState Operating::heightHigh1() {
    return operatingFSM1->heightHigh1();
}

TriggerProcessingState Operating::heightBore1() {
    return operatingFSM1->heightBore1();
}

TriggerProcessingState Operating::heightBelt1() {
    return operatingFSM1->heightBelt1();
}

TriggerProcessingState Operating::heightBin1() {
    return operatingFSM1->heightBin1();
}

TriggerProcessingState Operating::heightFlat2() {
    return operatingFSM2->heightFlat2();
}

TriggerProcessingState Operating::heightHigh2() {
    return operatingFSM2->heightHigh2();
}

TriggerProcessingState Operating::heightBore2() {
    return operatingFSM2->heightBore2();
}

TriggerProcessingState Operating::heightBelt2() {
    return operatingFSM2->heightBelt2();
}

TriggerProcessingState Operating::heightBin2() {
    return operatingFSM2->heightBin2();
}

void Operating::showState() {
    operatingFSM1->showState();
    operatingFSM2->showState();
}
