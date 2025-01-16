//
// Created by Trung Dam on 20.12.24.
//

#include "ws_high2.h"
#include <iostream>

#include "ws_bore2.h"
#include "ws_bin2.h"
#include "pseudoendslow2.h"
using namespace std;

TriggerProcessingState WS_High2::heightBin() {
    cout << "WS_High2::heightBin()" << endl;
    leavingState();
    new(this) WS_Bin2;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState WS_High2::heightBore() {
    cout << "WS_High2::heightBore()" << endl;
    leavingState();
    new(this) WS_Bore2;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState WS_High2::heightBelt() {
    cout << "WS_High2::heightBelt()" << endl;
    leavingState();
    //TODO: set_ws_height(high)
    action->set_ws_type_fb2(22);
    new(this) PseudoEndSlow2;
    cout << "WS High" << endl;
    return TriggerProcessingState::endstatereached;
}

void WS_High2::enterByDeepHistoryEntryPoint() {
    entry();
}