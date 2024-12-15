//
// Created by Trung Dam on 11.12.24.
//

#ifndef FB1SORTBASESTATE_H
#define FB1SORTBASESTATE_H
#include "../../action.h"
#include "../../contextdata.h"


class FB1SortBaseState {
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

    void resetDeepHistory();

    virtual void enterByDefaultEntryPoint(){entry();};
    virtual void enterByDeepHistoryEntryPoint(){entry();};

    virtual void leavingState(){exit();};
    void showState();
};



#endif //FB1SORTBASESTATE_H
