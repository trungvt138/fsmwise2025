//
// Created by Trung Dam on 20.12.24.
//

#include "fb1warning.h"
#include <iostream>

#include "fb2sortok.h"
using namespace std;

TriggerProcessingState FB2Warning::slideFall2() {
    cout << "FB2Warning::slideFall1" << endl;
    leavingState();
    new(this) FB2SortOK;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState FB2Warning::sortRise2() {
    cout << "FB2Warning::sortRise1" << endl;
    //TODO: check sequence here
    //if (!checksequence() && isSlide2Full())
    leavingState();
    return TriggerProcessingState::explicitexit;
    //else
    //leavingState()
}
