//
// Created by Trung Dam on 11.12.24.
//

#ifndef CALIBRATINGBASESTATE_H
#define CALIBRATINGBASESTATE_H
#include "../misc/action.h"
#include "../misc/contextdata.h"
#include "../misc/triggerprocessingstate.h"


class CalibratingBaseState {
protected:
    Actions *action;
    ContextData *data;
public:
    void initSubFSM();
    void setAction(Actions *action);
    void setData(ContextData *data);

    virtual void enterByDefaultEntryPoint(){entry();};
    virtual void leavingState(){exit();};

    virtual void enterViaPseudoStart();
    virtual void resetDeepHistory();
    virtual void entry(){};
    virtual void exit(){};

    virtual TriggerProcessingState startRise1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState startFall1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState endRise1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState endFall1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState sortRise1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState sortFall1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightStart1(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightEnd1(){ return TriggerProcessingState::pending; }

    virtual TriggerProcessingState startRise2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState startFall2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState endRise2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState endFall2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState sortRise2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState sortFall2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightStart2(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightEnd2(){ return TriggerProcessingState::pending; }
};



#endif //CALIBRATINGBASESTATE_H
