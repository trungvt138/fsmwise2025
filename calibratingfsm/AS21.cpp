//
// Created by Trung Dam on 03.01.25.
//

#include "AS21.h"
#include <iostream>
#include "AS22.h"

using namespace std;

void AS21::entry() {
    //TODO: weltmodell->starttimer();
    action->driveRight1();
}

void AS21::exit() {
    //TODO: weltmodell->savetime();
}

TriggerProcessingState AS21::heightStart1() {
    leavingState();
    new(this) AS21;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
