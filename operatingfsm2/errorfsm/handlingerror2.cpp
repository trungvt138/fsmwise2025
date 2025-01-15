//
// Created by Trung Dam on 20.12.24.
//

#include "handlingerror2.h"
#include <iostream>

#include "pseudoenderror2.h"
using namespace std;

void HandlingError2::entry() {
    //action->lightStartOn1();
    action->lightStartOn2();
    action->lightRedBlinkFastOff2();
    action->lightRedBlinkSlowOff2();
    //action->lightRedOn1();
    action->lightRedOn2();
}

TriggerProcessingState HandlingError2::startShortPressed1() {
    cout << "HandlingError2::startPressed1" << endl;
    leavingState();
    new(this) PseudoEndError2;
    return TriggerProcessingState::endstatereached;
}

TriggerProcessingState HandlingError2::startShortPressed2() {
    cout << "HandlingError2::startPressed2" << endl;
    leavingState();
    new(this) PseudoEndError2;
    return TriggerProcessingState::endstatereached;
}
