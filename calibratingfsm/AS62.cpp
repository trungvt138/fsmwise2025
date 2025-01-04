//
// Created by Trung Dam on 03.01.25.
//
#include "AS62.h"
#include <iostream>
#include "AS72.h"
using namespace std;

void AS62::entry() {
    action->driveStop1();
    action->driveRight2();
    //TODO: wm->starttimer();
}

void AS62::exit() {
    //TODO: wm->savetime();
}

TriggerProcessingState AS62::startRise2() {
    leavingState();
    new(this) AS72;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
