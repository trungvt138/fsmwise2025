//
// Created by Trung Dam on 02.12.24.
//

#ifndef CONTEXT_H
#define CONTEXT_H
#include "action.h"
#include "contextdata.h"
#include "fsm/basestate.h"


class Context {
private:
    BaseState *state;
    Actions *action;
    ContextData data;

public:
    Context(Actions *shared_action);
    virtual ~Context();

    void startShortPressed1();
    void startLongPressed1();
    void stopPressed1();
    void estopPressed1();
    void estopUnpressed1();
    void resetPressed1();
    void startRise1();
    void startFall1();
    void endRise1();
    void endFall1();
    void slideRise1();
    void slideFall1();
    void sortRise1();
    void sortFall1();
    void metalRise1();
    void metalFall1();
    void heightStart1();
    void heightEnd1();

    void startShortPressed2();
    void startLongPressed2();
    void stopPressed2();
    void estopPressed2();
    void estopUnpressed2();
    void resetPressed2();
    void startRise2();
    void startFall2();
    void endRise2();
    void endFall2();
    void slideRise2();
    void slideFall2();
    void sortRise2();
    void sortFall2();
    void metalRise2();
    void metalFall2();
    void heightStart2();
    void heightEnd2();


    void ws_timer_end();
    void motor_timer_end();
    void irqUpdate();
    void ws_height();
    void ws_metal();

    void connectionLost();
    void connectionBack();

    void showState();
};



#endif //CONTEXT_H
