#ifndef INCLUDED_OFU_MANAGER_H
#define INCLUDED_OFU_MANAGER_H

#include <wiringPi.h>

#include "lib/tips.h"

namespace oFuManager {
    ll getProcessCounter();
    void setup();
    void run();
};

#endif
