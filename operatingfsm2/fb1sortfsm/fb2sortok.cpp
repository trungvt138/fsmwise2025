//
// Created by trung on 15/12/2024.
//

#include "fb2sortok.h"
#include <iostream>

#include "fb2sortout.h"
#include "fb2warning.h"
using namespace std;

void FB2SortOK::entry() {
    FB2SortBaseState::entry();
}

void FB2SortOK::exit() {
    FB2SortBaseState::exit();
}

void FB2SortOK::enterByDefaultEntryPoint() {
    entry();
}

void FB2SortOK::enterByDeepHistoryEntryPoint() {
    FB2SortBaseState::enterByDeepHistoryEntryPoint();
}

void FB2SortOK::leavingState() {
    FB2SortBaseState::leavingState();
}

TriggerProcessingState FB2SortOK::sortRise2() {
    cout << "Sorting Rise 2" << endl;
    //TODO must check the sequence first
    //if (!checksequence(ws_height))
    leavingState();
    new(this) FB2SortOut;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState FB2SortOK::sortFall2() {
    return FB2SortBaseState::sortFall2();
}

TriggerProcessingState FB2SortOK::slideRise2() {
    cout << "Sliding Rise 2" << endl;
    leavingState();
    new(this) FB2Warning;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState FB2SortOK::slideFall2() {
    return FB2SortBaseState::slideFall2();
}
