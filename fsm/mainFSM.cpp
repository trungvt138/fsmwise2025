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
    cout << "MainFSM::showState()" << endl;
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
    mainfsm->startLongPressed1();
}

void MainFSM::startLongPressed2() {
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
        mainfsm->resetDeepHistory();
        mainfsm->exit();
        leavingState();
        new(this) EstopFSM;
        enterViaPortE1();
    }
}

void MainFSM::estopPressed2() {
    cout << "MainFSM::estopPressed2()" << endl;
    TriggerProcessingState processing_state = mainfsm->estopPressed2();
    if (processing_state == TriggerProcessingState::pending) {
        mainfsm->resetDeepHistory();
        mainfsm->exit();
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
        mainfsm->resetDeepHistory();
        mainfsm->exit();
        leavingState();
        new(this) EstopFSM;
        enterViaPortCL();
    }
}

void MainFSM::ws_lost() {
    mainfsm->ws_lost();
}

void MainFSM::ws_early() {
    mainfsm->ws_early();
}

void MainFSM::irqUpdate() {
    mainfsm->irqUpdate();
}

void MainFSM::ws_height() {
    mainfsm->ws_height();
}

void MainFSM::ws_metal() {
    mainfsm->ws_metal();
}

void MainFSM::heightFlat() {
    mainfsm->heightFlat();
}

void MainFSM::heightHigh() {
    mainfsm->heightHigh();
}

void MainFSM::heightBore() {
    mainfsm->heightBore();
}

void MainFSM::heightBelt() {
    mainfsm->heightBelt();
}

