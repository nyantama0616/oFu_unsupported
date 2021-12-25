#ifndef INCLUDED_ULTRA_SOUND_H
#define INCLUDED_ULTRA_SOUND_H

#include "Part.h"

class UltraSound : Part {
    int mTrigPin;
    int mEchoPin;
    int mDist; //障害物からの距離(cm)

    int pulseIn(int level, int timeout);

public:
    UltraSound();
    UltraSound(int trig, int echo);
    int getDist();
    void run();
};

#endif
