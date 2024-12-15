//
// Created by Trung Dam on 11.12.24.
//

#ifndef CALIBRATINGBASESTATE_H
#define CALIBRATINGBASESTATE_H
#include "../action.h"
#include "../contextdata.h"


class CalibratingBaseState {
protected:
    Actions *action;
    ContextData *data;
public:
    CalibratingBaseState();
    virtual ~CalibratingBaseState();
    void initSubFSM();
    void setAction(Actions *action);
    void setData(ContextData *data);
};



#endif //CALIBRATINGBASESTATE_H
