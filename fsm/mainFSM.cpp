//
// Created by Trung Dam on 03.12.24.
//

#include "mainFSM.h"

#include <iostream>

#include "estopFSM.h"
using namespace std;

void MainFSM::entry() {

}

void MainFSM::exit() {
    action->lightGreenOff1();
    action->lightGreenOff2();
}

void MainFSM::showState() {
    cout << "Im in MainFSM state" << endl;
    mainfsm->showState();
}

void MainFSM::enterByDefaultEntryPoint() {
    entry();
    mainfsm->enterViaPseudoStart();
}

void MainFSM::startShortPressed1() {
    mainfsm->startShortPressed1();
}

void MainFSM::startShortPressed2() {
    mainfsm->startShortPressed2();
}

void MainFSM::startLongPressed1() {
	cout << "MainFSM::startLongPressed1()" << endl;
    mainfsm->startLongPressed1();
}

void MainFSM::startLongPressed2() {
	cout << "MainFSM::startLongPressed2()" << endl;
    mainfsm->startLongPressed2();
}

void MainFSM::resetPressed1() {
    mainfsm->resetPressed1();
}

void MainFSM::resetPressed2() {
    mainfsm->resetPressed2();
}

void MainFSM::stopPressed1() {
    mainfsm->stopPressed1();
}

void MainFSM::stopPressed2() {
    mainfsm->stopPressed2();
}

void MainFSM::estopUnpressed1() {
    mainfsm->estopUnpressed1();
}

void MainFSM::estopUnpressed2() {
    mainfsm->estopUnpressed2();
}

void MainFSM::startRise1() {
    mainfsm->startRise1();
}

void MainFSM::startFall1() {
    mainfsm->startFall1();
}

void MainFSM::startRise2() {
    mainfsm->startRise2();
}

void MainFSM::startFall2() {
    mainfsm->startFall2();
}

void MainFSM::slideRise1() {
    mainfsm->slideRise1();
}

void MainFSM::slideFall1() {
    mainfsm->slideFall1();
}

void MainFSM::slideRise2() {
    mainfsm->slideRise2();
}

void MainFSM::slideFall2() {
    mainfsm->slideFall2();
}

void MainFSM::endRise1() {
    mainfsm->endRise1();
}

void MainFSM::endRise2() {
    mainfsm->endRise2();
}

void MainFSM::endFall1() {
    mainfsm->endFall1();
}

void MainFSM::endFall2() {
    mainfsm->endFall2();
}

void MainFSM::sortRise1() {
    mainfsm->sortRise1();
}

void MainFSM::sortFall1() {
    mainfsm->sortFall1();
}

void MainFSM::sortRise2() {
    mainfsm->sortRise2();
}

void MainFSM::sortFall2() {
    mainfsm->sortFall2();
}

void MainFSM::heightStart1() {
    mainfsm->heightStart1();
}

void MainFSM::heightStart2() {
    mainfsm->heightStart2();
}

void MainFSM::heightEnd1() {
    mainfsm->heightEnd1();
}

void MainFSM::heightEnd2() {
    mainfsm->heightEnd2();
}

void MainFSM::handleDefaultExit(const TriggerProcessingState &handled) {
    BaseState::handleDefaultExit(handled);
}

void MainFSM::metalRise1() {
    mainfsm->metalRise1();
}

void MainFSM::metalFall1() {
    mainfsm->metalFall1();
}

void MainFSM::metalRise2() {
    mainfsm->metalRise2();
}

void MainFSM::metalFall2() {
    mainfsm->metalFall2();
}

void MainFSM::estopPressed1() {
    cout << "MainFSM::estopPressed1()" << endl;
    TriggerProcessingState processing_state = mainfsm->estopPressed1();
    if (processing_state == TriggerProcessingState::pending) {
        mainfsm->exit();
        mainfsm->resetDeepHistory();
        leavingState();
        new(this) EstopFSM;
        enterViaPortE1();
    }
}

void MainFSM::estopPressed2() {
    cout << "MainFSM::estopPressed2()" << endl;
    TriggerProcessingState processing_state = mainfsm->estopPressed2();
    if (processing_state == TriggerProcessingState::pending) {
        mainfsm->exit();
        mainfsm->resetDeepHistory();
        leavingState();
        new(this) EstopFSM;
        enterViaPortE2();
    }
}

void MainFSM::connectionLost() {
    cout << "MainFSM::connectionLost()" << endl;
    TriggerProcessingState processing_state = mainfsm->connectionLost();

    //TODO: delete this line
    //data->setE2PressedAfterCL(true);

    if (processing_state == TriggerProcessingState::pending) {
    	mainfsm->exit();
    	mainfsm->resetDeepHistory();
        leavingState();
        new(this) EstopFSM;
        enterViaPortCL();
    }
}

void MainFSM::ws_lost1() {
    mainfsm->ws_lost1();
}

void MainFSM::ws_early1() {
    mainfsm->ws_early1();
}

void MainFSM::ws_lost2() {
    mainfsm->ws_lost2();
}

void MainFSM::ws_early2() {
    mainfsm->ws_early2();
}

void MainFSM::heightFlat1() {
    mainfsm->heightFlat1();
}

void MainFSM::heightHigh1() {
    mainfsm->heightHigh1();
}

void MainFSM::heightBore1() {
    mainfsm->heightBore1();
}

void MainFSM::heightBelt1() {
    mainfsm->heightBelt1();
}

void MainFSM::heightBin1() {
    mainfsm->heightBin1();
}

void MainFSM::heightFlat2() {
    mainfsm->heightFlat2();
}

void MainFSM::heightHigh2() {
    mainfsm->heightHigh2();
}

void MainFSM::heightBore2() {
    mainfsm->heightBore2();
}

void MainFSM::heightBelt2() {
    mainfsm->heightBelt2();
}

void MainFSM::heightBin2() {
    mainfsm->heightBin2();
}

