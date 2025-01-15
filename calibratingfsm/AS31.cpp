//
// Created by Trung Dam on 03.01.25.
//

#include "AS31.h"
#include <iostream>

#include "AS41.h"
using namespace std;

void AS31::entry() {
    action->driveSlowOff1();
    //TODO: weltmodell->starttimer();
}

void AS31::exit() {
    //TODO: weltmodell->savetime();
}

TriggerProcessingState AS31::sortRise1() {
    leavingState();
    new(this) AS41;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
