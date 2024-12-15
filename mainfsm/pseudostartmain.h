//
// Created by Trung Dam on 03.12.24.
//

#ifndef PSEUDOSTARTMAIN_H
#define PSEUDOSTARTMAIN_H
#include "basestatemain.h"
using namespace std;

class PseudoStartMain : public BaseStateMain {
public:
    bool isPseudoStartState() override {return true;};

    void showState() override {
        cout << "\nState : Main Pseudo Start State" << endl;
    }
};
#endif //PSEUDOSTARTMAIN_H
