//
// Created by Trung Dam on 03.12.24.
//

#include "basestateestop.h"

#include "../resetfsm/pseudostartreset.h"
#include <iostream>

#include "connectionlost.h"
#include "e1pressed.h"
#include "e2pressed.h"
using namespace std;

void BaseStateEstop::initSubFSM() {
    resetfsm = new PseudoStartReset();
    resetfsm->initSubFSM();
}

void BaseStateEstop::enterViaPortE1() {
    cout << "Entering via E1" << endl;
    new(this) E1Pressed;
}

void BaseStateEstop::enterViaPortE2() {
    cout << "Entering via E2" << endl;
    new(this) E2Pressed;
}

void BaseStateEstop::enterViaPortCL() {
    cout << "Entering via CL" << endl;
    new(this) ConnectionLost;
}