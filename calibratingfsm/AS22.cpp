//
// Created by Trung Dam on 04.01.25.
//

#include "AS22.h"
#include <iostream>

#include "AS31.h"
#include "AS32.h"
using namespace std;

void AS22::entry() {
    //TODO: wm->starttimer();
}

void AS22::exit() {
    //TODO: wm->savetime();
    //TODO: wm->saveHeight();
}

TriggerProcessingState AS22::heightEnd1() {
    leavingState();
    new(this) AS31;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
