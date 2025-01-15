//
// Created by Trung Dam on 20.12.24.
//

#include "ws_flat1.h"
#include <iostream>
#include "pseudoendslow1.h"
#include "ws_bin1.h"
using namespace std;


TriggerProcessingState WS_Flat1::heightBelt() {
    cout << "WS_Flat1::heightBelt()" << endl;
    leavingState();
    //TODO: set_ws_height(flat)
    action->set_ws_type_fb1(21);
    new(this) PseudoEndSlow1;
    return TriggerProcessingState::endstatereached;
}

TriggerProcessingState WS_Flat1::heightBin() {
    cout << "WS_Flat1::heightBin()" << endl;
    leavingState();
    new(this) WS_Bin1;
    return TriggerProcessingState::consumed;
}
