//
// Created by Trung Dam on 03.01.25.
//

#include "AS81.h"
#include <iostream>

#include "AS91.h"
using namespace std;

void AS81::entry() {
    action->driveSlowOff2();
    //TODO: wm->starttimer();
}

void AS81::exit() {
    //TODO: wm->savetime();
}

TriggerProcessingState AS81::sortRise2() {
    leavingState();
    new(this) AS91;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
