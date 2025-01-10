//
// Created by Trung Dam on 11.12.24.
//

#include "operatingbasestate2.h"

#include "fb1runfsm/pseudostartfb2run.h"
#include "fb1sortfsm/pseudostartfb2sort.h"
#include <iostream>
#include "fb2.h"
#include "errorfsm/pseudostarterror2.h"
using namespace std;

void OperatingBaseState2::initSubFSM() {
    fb2runFSM = new PseudoStartFB2Run();
    fb2runFSM->initSubFSM();
    fb2sortFSM = new PseudoStartFB2Sort();
    fb2sortFSM->initSubFSM();
    errorFSM2 = new PseudoStartError2();
}

void OperatingBaseState2::setAction(Actions *action) {
    this->actions = action;
    fb2runFSM->setAction(action);
    fb2sortFSM->setAction(action);
    errorFSM2->setAction(action);
}

void OperatingBaseState2::setData(ContextData *data) {
    this->data = data;
    fb2runFSM->setData(data);
    fb2sortFSM->setData(data);
    errorFSM2->setData(data);
}

void OperatingBaseState2::enterViaPseudoStart() {
    new(this) FB2;
    enterByDefaultEntryPoint();
}

void OperatingBaseState2::enterViaDeepHistory() {
    fb2runFSM->enterViaDeepHistory();
    //
}

void OperatingBaseState2::resetDeepHistory() {
    fb2runFSM->resetDeepHistory();
}
