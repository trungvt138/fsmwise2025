//
// Created by Trung Dam on 20.12.24.
//

#include "ws_bore2.h"
#include <iostream>

#include "pseudoendslow2.h"
using namespace std;

TriggerProcessingState WS_Bore2::heightBelt() {
    cout << "WS_Bore1::heightBelt()" << endl;
    leavingState();
    //TODO: set_ws_height(bore)
    action->set_ws_type_fb2(23);
    new(this) PseudoEndSlow2;
    cout << "WS Bore" << endl;
    return TriggerProcessingState::endstatereached;
}

void WS_Bore2::enterByDeepHistoryEntryPoint() {
    entry();
}