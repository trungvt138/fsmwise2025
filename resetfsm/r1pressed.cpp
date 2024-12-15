//
// Created by Trung Dam on 03.12.24.
//

#include "r1pressed.h"
#include <iostream>

#include "pseudoendreset.h"
using namespace std;

TriggerProcessingState R1Pressed::resetPressed2() {
    cout << "R1Pressed::resetPressed2()" << endl;
    leavingState();
    new(this) PseudoEndReset;
    return TriggerProcessingState::endstatereached;
}

void R1Pressed::showState() {
    cout << "R1Pressed::showState()" << endl;
}
