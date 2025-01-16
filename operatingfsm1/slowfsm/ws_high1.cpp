//
// Created by Trung Dam on 20.12.24.
//

#include "ws_high1.h"
#include <iostream>

#include "ws_bore1.h"
#include "ws_bin1.h"
#include "pseudoendslow1.h"
using namespace std;

TriggerProcessingState WS_High1::heightBin() {
    cout << "WS_High1::heightBin()" << endl;
    leavingState();
    new(this) WS_Bin1;
    return TriggerProcessingState::consumed;
}

TriggerProcessingState WS_High1::heightBore() {
    cout << "WS_High1::heightBore()" << endl;
    leavingState();
    new(this) WS_Bore1;
    enterByDefaultEntryPoint();
    return TriggerProcessingState::consumed;
}

TriggerProcessingState WS_High1::heightBelt() {
    cout << "WS_High1::heightBelt()" << endl;
    leavingState();
    //TODO: set_ws_height(high)
    action->set_ws_type_fb1(22);
    new(this) PseudoEndSlow1;
    cout << "WS High" << endl;
    return TriggerProcessingState::endstatereached;
}

void WS_High1::enterByDeepHistoryEntryPoint() {
    entry();
}
