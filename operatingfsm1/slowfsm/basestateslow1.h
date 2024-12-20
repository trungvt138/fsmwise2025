//
// Created by Trung Dam on 20.12.24.
//

#ifndef BASESTATESLOW1_H
#define BASESTATESLOW1_H

#include "../../misc/action.h"
#include "../../misc/contextdata.h"
#include "../../misc/triggerprocessingstate.h"

class BaseStateSlow1 {
protected:
    Actions *action;
    ContextData *data;
public:
    virtual void initSubFSM(){};

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

    virtual TriggerProcessingState heightFlat(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightHigh(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightBore(){ return TriggerProcessingState::pending; }
    virtual TriggerProcessingState heightBelt(){ return TriggerProcessingState::pending; }
};

#endif //BASESTATESLOW1_H
