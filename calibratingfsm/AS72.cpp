//
// Created by Trung Dam on 03.01.25.
//

#include "AS72.h"
#include <iostream>
#include "AS82.h"
using namespace std;

void AS72::entry() {
    action->driveSlowOn2();
    //TODO: wm->starttimer();
}

void AS72::exit() {
    //TODO: wm->savetime();
    //TODO: wm->saveHeight();
}

TriggerProcessingState AS72::heightStart2() {
    leavingState();
    new(this) AS82;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
