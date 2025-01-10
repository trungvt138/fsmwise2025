//
// Created by trung on 15/12/2024.
//

#include "fb1sortok.h"
#include <iostream>
#include <thread>
#include <chrono>
#include "fb1sortout.h"
#include "fb1warning.h"
using namespace std;

void FB1SortOK::entry() {
    FB1SortBaseState::entry();
}

void FB1SortOK::exit() {
    FB1SortBaseState::exit();
}

void FB1SortOK::enterByDefaultEntryPoint() {
    entry();
}

void FB1SortOK::enterByDeepHistoryEntryPoint() {
    FB1SortBaseState::enterByDeepHistoryEntryPoint();
}

void FB1SortOK::leavingState() {
    FB1SortBaseState::leavingState();
}

TriggerProcessingState FB1SortOK::sortRise1() {
    cout << "FB1SortOK::sortRise1()" << endl;
    //TODO must check the sequence first
    /*if (wm.checksequence(ws_height)) {
     * 	 leavingState();
    	 new(this) FB1SortOut;
         enterByDefaultEntryPoint();
     * }
     else {}*/
    if (action->issortout(1)) {
    	leavingState();
    	new(this) FB1SortOut;
    	enterByDefaultEntryPoint();
    }
    else {
        action->openJunction1();

        std::thread([this]() {
        	std::this_thread::sleep_for(std::chrono::seconds(1));
        	action->closeJunction1();
        }).detach();
    }

    return TriggerProcessingState::consumed;
}

TriggerProcessingState FB1SortOK::sortFall1() {
    return FB1SortBaseState::sortFall1();
}

TriggerProcessingState FB1SortOK::slideRise1() {
    cout << "FB1SortOK::slideRise1()" << endl;
    leavingState();
    new(this) FB1Warning;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState FB1SortOK::slideFall1() {
    return FB1SortBaseState::slideFall1();
}
