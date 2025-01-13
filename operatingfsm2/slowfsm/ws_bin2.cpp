//
// Created by Trung Dam on 20.12.24.
//

#include "ws_bin2.h"
#include <iostream>

#include "pseudoendslow2.h"
using namespace std;

TriggerProcessingState WS_Bin2::heightBelt() {
    cout << "WS_Bin2::heightBelt()" << endl;
    leavingState();
    //TODO: set_ws_height(bin)
    action->set_ws_type_fb2(24);
    new(this) PseudoEndSlow2;
    return TriggerProcessingState::endstatereached;
}
