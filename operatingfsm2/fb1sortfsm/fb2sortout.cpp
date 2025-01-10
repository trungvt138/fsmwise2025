//
// Created by trung on 15/12/2024.
//

#include "fb2sortout.h"
#include <iostream>

#include "fb2sortok.h"
using namespace std;

void FB2SortOut::entry() {
    action->openJunction1();
}

void FB2SortOut::exit() {
    action->closeJunction1();
}

TriggerProcessingState FB2SortOut::slideRise2() {
    cout << "FB2SortOut::slideRise2" << endl;
    leavingState();
    new(this) FB2SortOK;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}
