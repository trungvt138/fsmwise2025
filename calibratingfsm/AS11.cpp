//
// Created by Trung Dam on 03.01.25.
//

#include "AS11.h"
#include <iostream>
#include "AS21.h"

using namespace std;

void AS11::entry() {
    //TODO: weltmodell->starttimer();
    action->driveRight1();
}

void AS11::exit() {
    //TODO: weltmodell->savetime();
}

TriggerProcessingState AS11::heightStart1() {
    leavingState();
    new(this) AS21;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
