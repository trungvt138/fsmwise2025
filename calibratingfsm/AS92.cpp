//
// Created by Trung Dam on 03.01.25.
//

#include "AS92.h"
#include <iostream>

#include "Fertig2.h"
using namespace std;

void AS92::entry() {
    //TODO: wm->starttimer();
}

void AS92::exit() {
    //TODO: wm->savetime();
}

TriggerProcessingState AS92::endRise2() {
    leavingState();
    new(this) Fertig2;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
