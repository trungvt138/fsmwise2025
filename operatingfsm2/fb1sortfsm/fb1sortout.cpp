//
// Created by trung on 15/12/2024.
//

#include "fb1sortout.h"
#include <iostream>

#include "fb1sortok.h"
using namespace std;

void FB1SortOut::entry() {
    action->openJunction1();
}

void FB1SortOut::exit() {
    action->closeJunction1();
}

TriggerProcessingState FB1SortOut::slideRise1() {
    cout << "slideRise1" << endl;
    leavingState();
    new(this) FB1SortOK;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
