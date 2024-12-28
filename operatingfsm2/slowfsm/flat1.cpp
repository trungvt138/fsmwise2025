//
// Created by Trung Dam on 20.12.24.
//

#include "flat1.h"
#include <iostream>

#include "pseudoendslow1.h"
using namespace std;

TriggerProcessingState Flat1::heightBelt() {
    cout << "Flat1::heightBelt()" << endl;
    leavingState();
    //TODO: set_ws_height(bin)
    new(this) PseudoEndSlow1;
    return TriggerProcessingState::endstatereached;
}
