//
// Created by Trung Dam on 03.01.25.
//
#include "AS61.h"
#include <iostream>

#include "AS71.h"
using namespace std;

void AS61::entry() {
	action->startTimer();
    action->driveStopOn1();
    action->driveRight2();
}

void AS61::exit() {
    action->saveTimeFast(6);
}

TriggerProcessingState AS61::heightStart2() {
    leavingState();
    new(this) AS71;
    leavingState();
    return TriggerProcessingState::consumed;
}
