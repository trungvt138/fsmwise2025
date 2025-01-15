//
// Created by Trung Dam on 03.01.25.
//

#include "AS91.h"
#include <iostream>

#include "Fertig1.h"
using namespace std;

void AS91::entry() {
    //TODO: wm->starttimer();
}

void AS91::exit() {
    //TODO: wm->savetime();
}

TriggerProcessingState AS91::endRise2() {
    leavingState();
    new(this) Fertig1;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
