//
// Created by Trung Dam on 20.12.24.
//

#include "ws_bin1.h"
#include <iostream>
#include "ws_bore1.h"
#include "pseudoendslow1.h"
using namespace std;

TriggerProcessingState WS_Bin1::heightBelt() {
    cout << "WS_Bin1::heightBelt()" << endl;
    leavingState();
    //TODO: set_ws_height(bin)
    action->set_ws_type_fb1(24);
    new(this) PseudoEndSlow1;
    cout << "WS Binary" << endl;
    return TriggerProcessingState::endstatereached;
}

TriggerProcessingState WS_Bin1::heightBore() {
    cout << "WS_Bin1::heightBore()" << endl;
    leavingState();
    new(this) WS_Bore1;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

void WS_Bin1::enterByDeepHistoryEntryPoint() {
    entry();
}