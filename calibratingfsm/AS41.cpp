//
// Created by Trung Dam on 03.01.25.
//

#include "AS41.h"
#include <iostream>

#include "AS51.h"
using namespace std;

void AS41::entry() {
    //TODO: weltmodell->starttimer();
}

void AS41::exit() {
    //TODO: weltmodell->savetime();
}

TriggerProcessingState AS41::sortRise1() {
    leavingState();
    new(this) AS51;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}


