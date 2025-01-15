//
// Created by Trung Dam on 03.01.25.
//

#include "AS51.h"
#include <iostream>

#include "AS61.h"
using namespace std;

void AS51::entry() {
    //TODO: weltmodell->starttimer();
}

void AS51::exit() {
    //TODO: weltmodell->savetime();
}

TriggerProcessingState AS51::endFall1() {
    leavingState();
    new(this) AS61;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
