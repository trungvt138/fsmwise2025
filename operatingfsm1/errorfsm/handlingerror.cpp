//
// Created by Trung Dam on 20.12.24.
//

#include "handlingerror.h"
#include <iostream>

#include "pseudoenderror.h"
using namespace std;

void HandlingError::entry() {
    action->lightStartOn1();
    action->lightRedBlinkFastOff1();
    action->lightRedBlinkSlowOff1();
    action->lightRedOn1();
}

TriggerProcessingState HandlingError::startShortPressed1() {
    cout << "HandlingError::startPressed1" << endl;
    leavingState();
    new(this) PseudoEndError;
    return TriggerProcessingState::endstatereached;
}
