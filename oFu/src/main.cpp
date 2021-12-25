#include <wiringPi.h>

#include "../headers/lib/debug.h"
#include "../headers/oFuManager.h"
#include "../headers/parts/LED.h"
#include "../headers/lib/tips.h"

using namespace std;

#define pin 26

LED red;
void setup() {
    oFuManager::setup();
    red = LED(pin, false);
}

int main(void) {

    setup();

    while (true) {
        oFuManager::run();
        red.run();
        delay(50);
    }

}
