//
// Created by trung on 15/12/2024.
//

#include "fb1sortok.h"
#include <iostream>
using namespace std;

void FB1SortOK::initSubFSM() {
    FB1SortBaseState::initSubFSM();
}

void FB1SortOK::entry() {
    FB1SortBaseState::entry();
}

void FB1SortOK::exit() {
    FB1SortBaseState::exit();
}

void FB1SortOK::enterByDefaultEntryPoint() {
    FB1SortBaseState::enterByDefaultEntryPoint();
}

void FB1SortOK::enterByDeepHistoryEntryPoint() {
    FB1SortBaseState::enterByDeepHistoryEntryPoint();
}

void FB1SortOK::leavingState() {
    FB1SortBaseState::leavingState();
}

TriggerProcessingState FB1SortOK::sortRise1() {
    cout << "Sorting Rise 1" << endl;
    leavingState();

    return TriggerProcessingState::consumed;
}

TriggerProcessingState FB1SortOK::sortFall1() {
    return FB1SortBaseState::sortFall1();
}

TriggerProcessingState FB1SortOK::slideRise1() {
    return FB1SortBaseState::slideRise1();
}

TriggerProcessingState FB1SortOK::slideFall1() {
    return FB1SortBaseState::slideFall1();
}
