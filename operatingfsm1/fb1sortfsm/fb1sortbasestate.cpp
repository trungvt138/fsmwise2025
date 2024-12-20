//
// Created by Trung Dam on 11.12.24.
//

#include "fb1sortbasestate.h"
#include <iostream>

#include "fb1sortok.h"
using namespace std;

void FB1SortBaseState::initSubFSM() {
}

void FB1SortBaseState::setData(ContextData *data) {
    this->data = data;
}

void FB1SortBaseState::setAction(Actions *action) {
    this->action = action;
}

void FB1SortBaseState::enterViaPseudoStart() {
    new(this) FB1SortOK;
    enterByDefaultEntryPoint();
}

void FB1SortBaseState::showState() {
}
