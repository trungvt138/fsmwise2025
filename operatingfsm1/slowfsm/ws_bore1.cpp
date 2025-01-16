//
// Created by Trung Dam on 20.12.24.
//

#include "ws_bore1.h"
#include <iostream>

#include "pseudoendslow1.h"
using namespace std;

TriggerProcessingState WS_Bore1::heightBelt() {
    cout << "WS_Bore1::heightBelt()" << endl;
    leavingState();
    //TODO: set_ws_height(bore)
    action->set_ws_type_fb1(23);
    new(this) PseudoEndSlow1;
    cout << "WS Bore" << endl;
    return TriggerProcessingState::endstatereached;
}

void WS_Bore1::enterByDeepHistoryEntryPoint() {
    entry();
}