//
// Created by Trung Dam on 20.12.24.
//

#include "fb2warning.h"
#include <iostream>

#include "fb2sortok.h"
using namespace std;

void FB2Warning::entry() {
    action->lightYellowOn2();
}

void FB2Warning::exit() {
    action->lightYellowOff2();
}

TriggerProcessingState FB2Warning::slideFall2() {
    cout << "FB2Warning::slideFall1" << endl;
    leavingState();
    new(this) FB2SortOK;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState FB2Warning::sortRise2() {
    cout << "FB2Warning::sortRise2" << endl;
    //TODO: check sequence here
    if (action->issortout(2) && action->isSlide2Full()) {
        leavingState();
        return TriggerProcessingState::explicitexit;
    }
    else {
        // action->openJunction2();
        //
        // std::thread([this]() {
        // 	std::this_thread::sleep_for(std::chrono::seconds(1));
        // 	action->closeJunction2();
        // }).detach();
        return TriggerProcessingState::consumed;
    }
    //return TriggerProcessingState::pending;
}
