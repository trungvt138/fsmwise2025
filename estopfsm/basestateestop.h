//
// Created by Trung Dam on 03.12.24.
//

#ifndef BASESTATEESTOP_H
#define BASESTATEESTOP_H

#include "../misc/action.h"
#include "../misc/contextdata.h"
#include "../misc/triggerprocessingstate.h"
#include "../resetfsm/basestatereset.h"


class BaseStateEstop {
protected:
    ContextData *data;
    Actions *action;
    BaseStateReset *resetfsm;
public:
    virtual ~BaseStateEstop() {
        delete resetfsm;
    };

    virtual void initSubFSM();

    void setData(ContextData *data){this->data = data;};
    void setAction(Actions *action){this->action = action;};

    virtual void enterByDefaultEntryPoint(){entry();};
    virtual void leavingState(){exit();};

    virtual void enterViaPortE1();
    virtual void enterViaPortE2();
    virtual void enterViaPortCL();

    virtual void entry(){};
    virtual void exit(){};

    virtual void showState(){};

    virtual TriggerProcessingState resetPressed1(){return TriggerProcessingState::pending;};
    virtual TriggerProcessingState resetPressed2(){return TriggerProcessingState::pending;};
    virtual TriggerProcessingState estopPressed1(){return TriggerProcessingState::pending;};
    virtual TriggerProcessingState estopPressed2(){return TriggerProcessingState::pending;};
    virtual TriggerProcessingState estopUnpressed1(){return TriggerProcessingState::pending;};
    virtual TriggerProcessingState estopUnpressed2(){return TriggerProcessingState::pending;};
    virtual TriggerProcessingState connectionLost(){return TriggerProcessingState::pending;};
    virtual TriggerProcessingState connectionBack(){return TriggerProcessingState::pending;};
};



#endif //BASESTATEESTOP_H
