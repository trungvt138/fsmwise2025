//
// Created by Trung Dam on 03.01.25.
//

#include "AS91.h"
#include <iostream>

#include "Fertig1.h"
using namespace std;

void AS91::entry() {
    action->startTimer();
}

void AS91::exit() {
    action->saveTimeFast(9);
}

TriggerProcessingState AS91::endRise2() {
    leavingState();
    new(this) Fertig1;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
