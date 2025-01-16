//
// Created by Trung Dam on 03.01.25.
//

#include "AS71.h"
#include <iostream>

#include "AS81.h"
using namespace std;

void AS71::entry() {
	action->startTimer();
    action->driveSlowOn2();
}

void AS71::exit() {
    action->saveTimeSlow(7);
}

TriggerProcessingState AS71::heightEnd2() {
    leavingState();
    new(this) AS81;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
