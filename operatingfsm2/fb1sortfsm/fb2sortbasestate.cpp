//
// Created by Trung Dam on 11.12.24.
//

#include "fb2sortbasestate.h"
#include <iostream>

#include "fb2sortok.h"
using namespace std;

void FB2SortBaseState::initSubFSM() {
}

void FB2SortBaseState::setData(ContextData *data) {
    this->data = data;
}

void FB2SortBaseState::setAction(Actions *action) {
    this->action = action;
}

void FB2SortBaseState::enterViaPseudoStart() {
    new(this) FB2SortOK;
    enterByDefaultEntryPoint();
}

void FB2SortBaseState::showState() {
}
