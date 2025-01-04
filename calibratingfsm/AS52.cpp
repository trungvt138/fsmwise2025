//
// Created by Trung Dam on 03.01.25.
//

#include "AS52.h"
#include <iostream>
#include "AS62.h"
using namespace std;

void AS52::entry() {
    //TODO: weltmodell->starttimer();
}

void AS52::exit() {
    //TODO: weltmodell->savetime();
}

TriggerProcessingState AS52::endFall1() {
    leavingState();
    new(this) AS62;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
