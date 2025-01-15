//
// Created by Trung Dam on 03.01.25.
//

#include "AS71.h"
#include <iostream>

#include "AS81.h"
using namespace std;

void AS71::entry() {
    action->driveSlowOn2();
    //TODO: wm->starttimer();
}

void AS71::exit() {
    //TODO: wm->savetime();
    //TODO: wm->saveHeight();
}

TriggerProcessingState AS71::heightStart2() {
    leavingState();
    new(this) AS81;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
