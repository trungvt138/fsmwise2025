//
// Created by Trung Dam on 03.12.24.
//

#ifndef PSEUDOENDRESET_H
#define PSEUDOENDRESET_H
#include "basestatereset.h"

class PseudoEndReset : public BaseStateReset {
public:
    bool isPseudoEndState() override {return true;};
};

#endif //PSEUDOENDRESET_H
