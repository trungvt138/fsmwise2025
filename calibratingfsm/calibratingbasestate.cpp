//
// Created by Trung Dam on 11.12.24.
//

#include "calibratingbasestate.h"

#include "Idle1.h"
#include <iostream>
using namespace std;

void CalibratingBaseState::initSubFSM() {
}

void CalibratingBaseState::setAction(Actions *action) {
    this->action = action;
}

void CalibratingBaseState::setData(ContextData *data) {
    this->data = data;
}

void CalibratingBaseState::enterViaPseudoStart() {
    new(this) Idle1;
    enterByDefaultEntryPoint();
}

void CalibratingBaseState::resetDeepHistory() {
	new(this) CalibratingBaseState;
}
