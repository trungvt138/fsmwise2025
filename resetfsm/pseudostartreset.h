//
// Created by Trung Dam on 03.12.24.
//

#ifndef PSEUDOSTARTRESET_H
#define PSEUDOSTARTRESET_H
#include <iostream>
#include <ostream>

#include "basestatereset.h"
using namespace std;

class PseudoStartReset : public BaseStateReset {
public:
    bool isPseudoStartState() override {return true;};

    void showState() override {
        cout << "PseudoStartReset" << endl;
    };
};

#endif //PSEUDOSTARTRESET_H
