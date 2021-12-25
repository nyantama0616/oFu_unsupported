#include <wiringPi.h>

#include "../headers/lib/debug.h"
#include "../headers/oFuManager.h"
#include "../headers/parts/UltraSound.h"
#include "../headers/lib/tips.h"

using namespace std;

UltraSound ult;
void setup() {
    oFuManager::setup();
    ult = UltraSound(27, 17);
}

int main(void) {

    setup();

    while (true) {
        oFuManager::run();
        ult.run();
        if (oFuManager::getProcessCounter() % 50 == 0) {
            int dist = ult.getDist();
            cout << "dist: " << dist << " cm" << endl;
        }
        delay(2);
    }

}
