//
// Created by Trung Dam on 20.12.24.
//

#include "ws_flat2.h"
#include <iostream>

#include "ws_bin2.h"
#include "pseudoendslow2.h"
using namespace std;

TriggerProcessingState WS_Flat2::heightBin() {
    cout << "WS_Flat2::heightBin()" << endl;
    leavingState();
    new(this) WS_Bin2;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState WS_Flat2::heightBelt() {
    cout << "WS_Flat2::heightBelt()" << endl;
    leavingState();
    //TODO: set_ws_height(flat)
    action->set_ws_type_fb2(21);
    new(this) PseudoEndSlow2;
    cout << "WS Flat" << endl;
    return TriggerProcessingState::endstatereached;
}

void WS_Flat2::enterByDeepHistoryEntryPoint() {
    entry();
}