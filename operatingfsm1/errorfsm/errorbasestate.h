//
// Created by Trung Dam on 20.12.24.
//

#ifndef ERRORBASESTATE_H
#define ERRORBASESTATE_H

#include "../../misc/action.h"
#include "../../misc/contextdata.h"
#include "../../misc/triggerprocessingstate.h"

class ErrorBaseState {
protected:
    Actions *action;
    ContextData *data;
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

    virtual TriggerProcessingState resetPressed1() { return TriggerProcessingState::pending; }
    virtual TriggerProcessingState resetPressed2() { return TriggerProcessingState::pending; }
    virtual TriggerProcessingState startShortPressed1() { return TriggerProcessingState::pending; }
    virtual TriggerProcessingState startShortPressed2() { return TriggerProcessingState::pending; }
};



#endif //ERRORBASESTATE_H
