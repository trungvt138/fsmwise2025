//
// Created by Trung Dam on 20.12.24.
//

#ifndef ERROR_H
#define ERROR_H
#include "operatingbasestate1.h"


class Error : public OperatingBaseState1 {
public:
    void entry() override;

    void exit() override;

    TriggerProcessingState startShortPressed1() override;

    TriggerProcessingState resetPressed1() override;

    void enterViaErrNewWS() override;

    void enterViaErrLostWS() override;

    void enterViaErrSlideFull() override;

    void resetDeepHistory() override;

    virtual TriggerProcessingState handleDefaultExit(TriggerProcessingState state);
};



#endif //ERROR_H
