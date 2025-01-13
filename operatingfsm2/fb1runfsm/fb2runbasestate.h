//
// Created by Trung Dam on 11.12.24.
//

#ifndef FB2RUNBASESTATE_H
#define FB2RUNBASESTATE_H
#include "../../misc/action.h"
#include "../../misc/contextdata.h"
#include "../runningfsm/runningbasestate2.h"
#include "../../misc/triggerprocessingstate.h"

class FB2RunBaseState {
protected:
    Actions *action;
    ContextData *data;
    RunningBaseState2 *runningfsm;
public:
    virtual void initSubFSM();

    void setData(ContextData *data);
    void setAction(Actions *action);

    virtual void entry(){};
    virtual void exit(){};

    void enterViaPseudoStart();

    void enterViaDeepHistory();

    virtual void resetDeepHistory();

    virtual void enterByDefaultEntryPoint(){entry();};
    virtual void enterByDeepHistoryEntryPoint(){entry();};

    virtual void leavingState(){exit();};
    void showState();

    virtual TriggerProcessingState startRise2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState startFall2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState endRise2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState endFall2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState sortRise2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState sortFall2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState slideRise2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState slideFall2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightStart2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightEnd2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState metalRise2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState metalFall2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState startShortPressed2(){ return TriggerProcessingState::pending; };
    virtual TriggerProcessingState motor_timer_end(){ return TriggerProcessingState::pending; };
    virtual TriggerProcessingState ws_metal(){ return TriggerProcessingState::pending; };


    virtual TriggerProcessingState endFall1(){ return TriggerProcessingState::pending; }


    virtual TriggerProcessingState heightFlat(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightHigh(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightBore(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightBelt(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightBin(){ return TriggerProcessingState::pending; }
};



#endif //FB2RUNBASESTATE_H
