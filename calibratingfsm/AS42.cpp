//
// Created by Trung Dam on 03.01.25.
//

#include "AS42.h"
#include <iostream>
#include "AS52.h"
using namespace std;

void AS42::entry() {
	action->startTimer();
}

void AS42::exit() {
	action->saveTimeSlow(4);
}

TriggerProcessingState AS42::endRise1() {
	cout << "AS42::endRise1()" << endl;
    leavingState();
    new(this) AS52;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}


