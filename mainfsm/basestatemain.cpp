//
// Created by Trung Dam on 03.12.24.
//

#include "basestatemain.h"
#include <iostream>
#include "idle.h"
#include "../calibratingfsm/calibratingpseudostart.h"
#include "../operatingfsm1/pseudostartoperating1.h"
#include "../operatingfsm2/pseudostartoperating2.h"
using namespace std;

void BaseStateMain::initSubFSM() {
    operatingFSM1 = new PseudoStartOperating1();
    operatingFSM1->initSubFSM();
    operatingFSM2 = new PseudoStartOperating2();
    operatingFSM2->initSubFSM();
    calibratingFSM = new CalibratingPseudoStart();
    calibratingFSM->initSubFSM();
}

void BaseStateMain::setData(ContextData *data) {
    this->data = data;
    operatingFSM1->setData(data);
    operatingFSM2->setData(data);
    calibratingFSM->setData(data);
}

void BaseStateMain::setAction(Actions *action) {
    this->actions = action;
    operatingFSM1->setAction(action);
    operatingFSM2->setAction(action);
    calibratingFSM->setAction(action);
}

void BaseStateMain::enterViaPseudoStart() {
    cout << "  MainFsm Initial Transition taken" << std::endl;
    new(this) Idle;
    enterByDefaultEntryPoint();
}

void BaseStateMain::enterViaDeepHistory() {
    enterByDeepHistoryEntryPoint();
}

void BaseStateMain::showState() {
}
