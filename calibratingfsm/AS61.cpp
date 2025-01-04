//
// Created by Trung Dam on 03.01.25.
//
#include "AS61.h"
#include <iostream>

#include "AS71.h"
using namespace std;

void AS61::entry() {
    action->driveStop1();
    action->driveRight2();
    //TODO: wm->starttimer();
}

void AS61::exit() {
    //TODO: wm->savetime();
}

TriggerProcessingState AS61::startRise2() {
    leavingState();
    new(this) AS71;
    leavingState();
    return TriggerProcessingState::consumed;
}
