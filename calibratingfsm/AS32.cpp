//
// Created by Trung Dam on 03.01.25.
//

#include "AS32.h"
#include <iostream>

#include "AS42.h"
using namespace std;

void AS32::entry() {
    action->driveSlowOff1();
    //TODO: weltmodell->starttimer();
}

void AS32::exit() {
    //TODO: weltmodell->savetime();
}

TriggerProcessingState AS32::sortRise1() {
    leavingState();
    new(this) AS42;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
