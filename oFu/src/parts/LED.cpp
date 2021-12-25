/*
    Lチカ試すだけ。恐らく使わない。
*/

#include <wiringPi.h>

#include "../../headers/lib/tips.h"
#include "../../headers/parts/LED.h"
#include "../../headers/oFuManager.h"

using namespace std;

LED::LED() {}
LED::LED(ll pin, bool analog=false) : mPin(pin) {
    write = (analog) ? analogWrite : digitalWrite;
    pinMode(pin, OUTPUT);
}

void LED::run() {
    long long x = (oFuManager::getProcessCounter()) % 50;
    this->write(mPin, x < 20);
}
