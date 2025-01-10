//
// Created by Trung Dam on 02.12.24.
//

#ifndef CONTEXTDATA_H
#define CONTEXTDATA_H



class ContextData {
private:
    bool fb1_clr = true;
    bool fb2_clr = true;
    bool isE2Pressed = false;
    int fb1_count = 0;
public:
    bool isFB1Clear();
    void setFB1Clear(bool val);
    bool isFB2Clear();
    void setFB2Clear(bool val);

    bool isE2PressedAfterCL();
    void setE2PressedAfterCL(bool val);
};



#endif //CONTEXTDATA_H
