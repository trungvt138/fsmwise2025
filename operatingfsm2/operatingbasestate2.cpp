//
// Created by Trung Dam on 11.12.24.
//

#include "operatingbasestate1.h"

#include "fb1runfsm/pseudostartfb1run.h"
#include "fb1sortfsm/pseudostartfb1sort.h"
#include <iostream>
#include "fb2.h"
#include "errorfsm/pseudostarterror.h"
using namespace std;

void OperatingBaseState2::initSubFSM() {
    fb1runFSM = new PseudoStartFB1Run();
    fb1runFSM->initSubFSM();
    fb1sortFSM = new PseudoStartFB1Sort();
    fb1sortFSM->initSubFSM();
    errorFSM = new PseudoStartError();
}

void OperatingBaseState2::setAction(Actions *action) {
    this->actions = action;
    fb1runFSM->setAction(action);
    fb1sortFSM->setAction(action);
    errorFSM->setAction(action);
}

void OperatingBaseState2::setData(ContextData *data) {
    this->data = data;
    fb1sortFSM->setData(data);
    fb1sortFSM->setData(data);
    errorFSM->setData(data);
}

void OperatingBaseState2::enterViaPseudoStart() {
    new(this) FB2;
    enterByDefaultEntryPoint();
}

void OperatingBaseState2::enterViaDeepHistory() {
    fb1runFSM->enterViaDeepHistory();
    //
}

void OperatingBaseState2::resetDeepHistory() {
    fb1runFSM->resetDeepHistory();
}
