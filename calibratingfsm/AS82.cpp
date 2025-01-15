//
// Created by Trung Dam on 03.01.25.
//

#include "AS82.h"
#include <iostream>

#include "AS92.h"
using namespace std;

void AS82::entry() {
    action->driveSlowOff2();
    //TODO: wm->starttimer();
}

void AS82::exit() {
    //TODO: wm->savetime();
}

TriggerProcessingState AS82::sortRise2() {
    leavingState();
    new(this) AS92;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
