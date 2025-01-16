//
// Created by Trung Dam on 03.01.25.
//

#include "AS11.h"
#include <iostream>
#include "AS21.h"

using namespace std;

void AS11::entry() {
    action->startTimer();
    action->driveRight1();
}

void AS11::exit() {
    //TODO: weltmodell->savetime();
	action->saveTimeFast(1);
}

TriggerProcessingState AS11::heightStart1() {
	cout << "AS11::heightStart1()" << endl;
    leavingState();
    new(this) AS21;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
