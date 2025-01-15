//
// Created by Trung Dam on 03.01.25.
//

#include "AS42.h"
#include <iostream>
#include "AS52.h"
using namespace std;

void AS42::entry() {
    //TODO: weltmodell->starttimer();
}

void AS42::exit() {
    //TODO: weltmodell->savetime();
}

TriggerProcessingState AS42::sortRise1() {
    leavingState();
    new(this) AS52;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}


