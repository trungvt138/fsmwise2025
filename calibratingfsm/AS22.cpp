//
// Created by Trung Dam on 04.01.25.
//

#include "AS22.h"
#include <iostream>
#include "AS32.h"
using namespace std;

void AS22::entry() {
    action->startTimer();
    action->driveSlowOn1();
}

void AS22::exit() {
    action->saveTimeSlow(2);
    //TODO: action->saveHeight();
}

TriggerProcessingState AS22::heightEnd1() {
	cout << "AS22::heightEnd1()" << endl;
    leavingState();
    new(this) AS32;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
