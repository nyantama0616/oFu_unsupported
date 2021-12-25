// /*
//     プログラム全体に関すること(グローバル変数的なもの)はここで管理する
// */

#include "../headers/oFuManager.h"
#include "../headers/lib/tips.h"

namespace oFuManager {
    ll processCounter;
    ll getProcessCounter() { return processCounter; }

    void setup() {
        processCounter = 0;
        wiringPiSetupGpio();
    }

    void run() {
        ++processCounter;
    }
};
