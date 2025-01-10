//
// Created by Trung Dam on 02.12.24.
//

#ifndef ACTION_H
#define ACTION_H



class Actions {
public:
    virtual ~Actions() {}
    Actions() {};

    virtual void lightGreenOn1();
    virtual void lightGreenOff1();
    virtual void lightGreenOn2();
    virtual void lightGreenOff2();

    virtual void lightGreenBlink1();
    virtual void lightGreenBlink2();

    virtual void lightRedOn1();
    virtual void lightRedOff1();
    virtual void lightRedOn2();
    virtual void lightRedOff2();

    virtual void lightRedBlinkFast1();
    virtual void lightRedBlinkFast2();
    virtual void lightRedBlinkSlow1();
    virtual void lightRedBlinkSlow2();

    virtual void lightYellowOn1();
    virtual void lightYellowOff1();
    virtual void lightYellowOn2();
    virtual void lightYellowOff2();

    virtual void driveRight1();
    virtual void driveRight2();
    virtual void driveStopOn1();
    virtual void driveStopOn2();
    virtual void driveStopOff1();
    virtual void driveStopOff2();
    virtual void driveSlowOn1();
    virtual void driveSlowOff1();
    virtual void driveSlowOn2();
    virtual void driveSlowOff2();

    virtual void openJunction1();
    virtual void openJunction2();
    virtual void closeJunction1();
    virtual void closeJunction2();

    virtual void lightStartOn1();
    virtual void lightStartOff1();
    virtual void lightStartOn2();
    virtual void lightStartOff2();

    virtual void lightResetOn1();
    virtual void lightResetOff1();
    virtual void lightResetOn2();
    virtual void lightResetOff2();

    virtual void reset_wm();

    virtual bool isFbEmpty(int);
    virtual bool issortout(int);
};



#endif //ACTION_H
