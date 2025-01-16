//
// Created by Trung Dam on 03.01.25.
//

#include "AS72.h"
#include <iostream>
#include "AS82.h"
using namespace std;

void AS72::entry() {
	action->startTimer();
	action->driveSlowOn2();
}

void AS72::exit() {
	action->saveTimeSlow(7);
    //TODO: action->saveHeight();
}

TriggerProcessingState AS72::heightEnd2() {
	cout << "AS72::heightEnd2()" << endl;
    leavingState();
    new(this) AS82;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
