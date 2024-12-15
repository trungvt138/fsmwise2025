//
// Created by Trung Dam on 03.12.24.
//

#ifndef BASESTATERESET_H
#define BASESTATERESET_H

#include "../action.h"
#include "../contextdata.h"
#include "../triggerprocessingstate.h"


class BaseStateReset {
protected:
    ContextData *data;
    Actions *action;

public:
    virtual void initSubFSM(){}

    void setData(ContextData *data){this->data = data;};
    void setAction(Actions *action){this->action = action;};

    virtual bool isPseudoStartState(){return false;};
    virtual bool isPseudoEndState(){return false;};

    virtual void enterByDefaultEntryPoint(){entry();};
    virtual void enterViaPseudoStart();

    virtual void leavingState(){exit();};

    virtual void entry(){};
    virtual void exit(){};

    virtual TriggerProcessingState estopPressed1() {return TriggerProcessingState::pending;};
    virtual TriggerProcessingState estopPressed2() {return TriggerProcessingState::pending;};
    virtual TriggerProcessingState connectionLost() {return TriggerProcessingState::pending;};
    virtual TriggerProcessingState connectionBack() {return TriggerProcessingState::pending;};
    virtual TriggerProcessingState resetPressed1() {return TriggerProcessingState::pending;};
    virtual TriggerProcessingState resetPressed2() {return TriggerProcessingState::pending;};

    virtual void showState() {};

};



#endif //BASESTATERESET_H
