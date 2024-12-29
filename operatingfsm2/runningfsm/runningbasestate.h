//
// Created by Trung Dam on 12.12.24.
//

#ifndef RUNNINGBASESTATE_H
#define RUNNINGBASESTATE_H
#include "../../misc/action.h"
#include "../../misc/contextdata.h"
#include "../../misc/triggerprocessingstate.h"
#include "../slowfsm/basestateslow2.h"

class RunningBaseState {
protected:
    Actions *action;
    ContextData *data;
    BaseStateSlow2 *slowfsm;
public:
    virtual void initSubFSM();

    void setData(ContextData *data);
    void setAction(Actions *action);

    virtual void entry(){};
    virtual void exit(){};

    void enterViaPseudoStart();

    void enterViaDeepHistory();

    void resetDeepHistory();

    virtual void enterByDefaultEntryPoint(){entry();};
    virtual void enterByDeepHistoryEntryPoint(){entry();};

    virtual void leavingState(){exit();};
    virtual void showState(){};

    virtual TriggerProcessingState heightStart1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightEnd1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState metalRise1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState metalFall1(){ return TriggerProcessingState::pending; }

    virtual TriggerProcessingState heightFlat(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightHigh(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightBore(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightBelt(){ return TriggerProcessingState::pending; }
};



#endif //RUNNINGBASESTATE_H
