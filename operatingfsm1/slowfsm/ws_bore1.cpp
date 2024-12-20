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
    new(this) PseudoEndSlow1;
    return TriggerProcessingState::endstatereached;
}
