//
// Created by Trung Dam on 04.01.25.
//

#include "Fertig2.h"
#include <iostream>

#include "calibratingpseudoend.h"
using namespace std;

void Fertig2::entry() {
    //TODO: wm->starttimer(); ????
    action->driveStopOn2();
    //action->driveSlowOff2();
}

void Fertig2::exit() {
    //TODO: wm->savetime(); ?????
}

TriggerProcessingState Fertig2::endFall2() {
	action->set_all_toleranz(2);
    leavingState();
    new(this) CalibratingPseudoEnd;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::endstatereached;
}
