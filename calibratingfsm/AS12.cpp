//
// Created by Trung Dam on 03.01.25.
//

#include "AS12.h"
#include <iostream>
#include "AS22.h"

using namespace std;

void AS12::entry() {
    action->startTimer();
    action->driveStopOff1();
    action->driveSlowOn1();
}

void AS12::exit() {
    //TODO: weltmodell->savetime();
	action->saveTimeSlow(1);
}

TriggerProcessingState AS12::heightStart1() {
    leavingState();
    new(this) AS22;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
