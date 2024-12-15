//
// Created by Trung Dam on 02.12.24.
//

#ifndef BASESTATE_H
#define BASESTATE_H
#include "../action.h"
#include "../contextdata.h"
#include "../triggerprocessingstate.h"
#include "../mainfsm/basestatemain.h"
#include "../estopfsm/basestateestop.h"

class BaseState {
protected:
    ContextData *data;
    Actions *action;
    BaseStateEstop *estopfsm;
    BaseStateMain *mainfsm;

public:
    virtual ~BaseState() {
        delete estopfsm;
        delete mainfsm;
    }

    virtual void initSubFSM();
    void setData(ContextData *data);
    void setAction(Actions *action);
    virtual void enterByDefaultEntryPoint(){entry();};
    virtual void enterByDeepHistoryEntryPoint(){entry();};
    virtual void leavingState(){exit();};
    virtual void enterViaPseudoStart();
    virtual void enterViaDeepHistory();
    virtual void resetDeepHistory(){};
    virtual void entry(){};
    virtual void exit(){};
    virtual void showState() {};
    virtual void handleDefaultExit(const TriggerProcessingState &handled) {};

    virtual void enterViaPortE1(){};
    virtual void enterViaPortE2(){};

    virtual void startShortPressed1(){}
    virtual void startShortPressed2(){}
    virtual void startLongPressed1(){}
    virtual void startLongPressed2(){}
    virtual void resetPressed1(){}
    virtual void resetPressed2(){}
    virtual void stopPressed1(){}
    virtual void stopPressed2(){}
    virtual void estopPressed1(){}
    virtual void estopPressed2(){}
    virtual void estopUnpressed1(){}
    virtual void estopUnpressed2(){}

    virtual void startRise1(){}
    virtual void startFall1(){}
    virtual void startRise2(){}
    virtual void startFall2(){}
    virtual void slideRise1(){}
    virtual void slideFall1(){}
    virtual void slideRise2(){}
    virtual void slideFall2(){}
    virtual void endRise1(){}
    virtual void endRise2(){}
    virtual void endFall1(){}
    virtual void endFall2(){}
    virtual void sortRise1(){}
    virtual void sortFall1(){}
    virtual void sortRise2(){}
    virtual void sortFall2(){}

    virtual void heightStart1(){}
    virtual void heightStart2(){}
    virtual void heightEnd1(){}
    virtual void heightEnd2(){}

    virtual void metalRise1(){}
    virtual void metalFall1(){}
    virtual void metalRise2(){}
    virtual void metalFall2(){}

    virtual void ws_timer_end(){};
    virtual void motor_timer_end(){};
    virtual void irqUpdate(){};
    virtual void ws_height(){};
    virtual void ws_metal(){};

    //virtual void connectionLost(){};
    //virtual void connectionBack(){};

};



#endif //BASESTATE_H
