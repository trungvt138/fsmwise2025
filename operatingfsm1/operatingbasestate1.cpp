//
// Created by Trung Dam on 11.12.24.
//

#include "operatingbasestate1.h"

#include "fb1runfsm/pseudostartfb1run.h"
#include "fb1sortfsm/pseudostartfb1sort.h"
#include <iostream>
#include "fb1.h"
#include "errorfsm/pseudostarterror.h"
using namespace std;

void OperatingBaseState1::initSubFSM() {
    fb1runFSM = new PseudoStartFB1Run();
    fb1runFSM->initSubFSM();
    fb1sortFSM = new PseudoStartFB1Sort();
    fb1sortFSM->initSubFSM();
    errorFSM = new PseudoStartError();
}

void OperatingBaseState1::setAction(Actions *action) {
    this->actions = action;
    fb1runFSM->setAction(action);
    fb1sortFSM->setAction(action);
    errorFSM->setAction(action);
}

void OperatingBaseState1::setData(ContextData *data) {
    this->data = data;
    fb1runFSM->setData(data);
    fb1sortFSM->setData(data);
    errorFSM->setData(data);
}

void OperatingBaseState1::enterViaPseudoStart() {
    new(this) FB1;
    enterByDefaultEntryPoint();
}

void OperatingBaseState1::enterViaDeepHistory() {
    //fb1runFSM->enterViaDeepHistory();
    new(this) FB1;
    enterByDeepHistoryEntryPoint();
}

void OperatingBaseState1::resetDeepHistory() {
	//leavingState();
    //errorFSM->resetDeepHistory();
    //fb1runFSM->resetDeepHistory();
}
