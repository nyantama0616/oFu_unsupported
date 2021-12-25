#ifndef INCLUDED_LED_H
#define INCLUDED_LED_H

#include "../lib/tips.h"
#include "Part.h"
class LED : public Part {
    ll mPin; 

public:
    function<void(int, int)> write;

    LED();
    LED(ll pin, bool analog);

    void run();
};

#endif
