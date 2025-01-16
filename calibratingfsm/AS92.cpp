//
// Created by Trung Dam on 03.01.25.
//

#include "AS92.h"
#include <iostream>

#include "Fertig2.h"
using namespace std;

void AS92::entry() {
    action->startTimer();
}

void AS92::exit() {
//    action->saveTimeFast(9);
	action->saveTimeSlow(9);
}

TriggerProcessingState AS92::endRise2() {
    leavingState();
    new(this) Fertig2;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
