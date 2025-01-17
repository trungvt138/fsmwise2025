//
// Created by Trung Dam on 03.12.24.
//

#include "estopFSM.h"
#include "mainFSM.h"
#include <iostream>
using namespace std;

void EstopFSM::enterViaPortE1() {
    entry();
    estopfsm->enterViaPortE1();
}

void EstopFSM::enterViaPortE2() {
    entry();
    estopfsm->enterViaPortE2();
}

void EstopFSM::enterViaPortCL() {
    entry();
    estopfsm->enterViaPortCL();
}


void EstopFSM::handleDefaultExit(const TriggerProcessingState &processing_state) {
    if (processing_state == TriggerProcessingState::endstatereached) {
        estopfsm->exit();
        leavingState();
        new(this) MainFSM;
        enterByDefaultEntryPoint();
    }
}

void EstopFSM::entry() {
	action->lightRedBlinkFastOff1();
	action->lightRedBlinkFastOff2();
	action->lightYellowOff1();
	action->lightYellowOff2();
    action->lightRedOn1();
    action->lightRedOn2();
    action->driveStopOn1();
    action->driveStopOn2();
    action->driveSlowOff1();
    action->driveSlowOff2();
    action->closeJunction1();
    action->closeJunction2();
}

void EstopFSM::exit() {
    action->lightRedOff1();
    action->lightRedOff2();
    action->driveStopOff1();
    action->driveStopOff2();
    action->reset_wm();
}

void EstopFSM::showState() {
    cout << "EstopFSM::showState()" << endl;
    estopfsm->showState();
}

void EstopFSM::resetPressed1() {
    TriggerProcessingState processing_state = estopfsm->resetPressed1();
    handleDefaultExit(processing_state);
}

void EstopFSM::resetPressed2() {
    TriggerProcessingState processing_state = estopfsm->resetPressed2();
    handleDefaultExit(processing_state);
}

void EstopFSM::estopPressed1() {
    TriggerProcessingState processing_state = estopfsm->estopPressed1();
    handleDefaultExit(processing_state);
}

void EstopFSM::estopPressed2() {
    TriggerProcessingState processing_state = estopfsm->estopPressed2();
    handleDefaultExit(processing_state);
}

void EstopFSM::estopUnpressed1() {
    TriggerProcessingState processing_state = estopfsm->estopUnpressed1();
    handleDefaultExit(processing_state);
}

void EstopFSM::estopUnpressed2() {
    TriggerProcessingState processing_state = estopfsm->estopUnpressed2();
    handleDefaultExit(processing_state);
}

void EstopFSM::connectionLost() {
    TriggerProcessingState processing_state = estopfsm->connectionLost();
    handleDefaultExit(processing_state);
}

void EstopFSM::connectionBack() {
    TriggerProcessingState processing_state = estopfsm->connectionBack();
    handleDefaultExit(processing_state);
}

