//
// Created by Trung Dam on 04.01.25.
//

#include "Fertig1.h"
#include <iostream>

#include "Idle2.h"
using namespace std;

void Fertig1::entry() {
    //TODO: wm->starttimer(); ????
    action->driveStopOn2();
}

void Fertig1::exit() {
    //TODO: wm->savetime(); ?????
	//action->driveStopOff2();
}

TriggerProcessingState Fertig1::endFall2() {
    leavingState();
    new(this) Idle2;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
