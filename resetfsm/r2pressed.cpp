//
// Created by Trung Dam on 03.12.24.
//

#include "r2pressed.h"
#include <iostream>

#include "pseudoendreset.h"
using namespace std;

void R2Pressed::showState() {
    cout << "R2Pressed::showState()" << endl;
}

TriggerProcessingState R2Pressed::resetPressed1() {
    cout << "R2Pressed::resetPressed1()" << endl;
    leavingState();
    new(this) PseudoEndReset;
    return TriggerProcessingState::endstatereached;
}
