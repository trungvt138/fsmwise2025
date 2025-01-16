//
// Created by Trung Dam on 03.01.25.
//

#include "AS21.h"
#include <iostream>
#include "AS31.h"

using namespace std;

void AS21::entry() {
    action->startTimer();
    action->driveSlowOn1();
    //action->saveHeight();
}

void AS21::exit() {
    action->saveTimeSlow(2);
}

TriggerProcessingState AS21::heightEnd1() {
	cout << "AS21::heightEnd1()" << endl;
    leavingState();
    new(this) AS31;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
