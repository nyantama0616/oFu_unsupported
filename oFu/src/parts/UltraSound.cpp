#include <wiringPi.h>
#include <stdlib.h>
#include <sys/time.h>

#include "../../headers/parts/Part.h"
#include "../../headers/parts/UltraSound.h"
#include "../../headers/oFuManager.h"

// #define SONICV 343.7 //音速

UltraSound::UltraSound() {}
UltraSound::UltraSound(int trig, int echo) : mTrigPin(trig), mEchoPin(echo), mDist(0) {
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
}

int UltraSound::getDist() { return mDist; }

int UltraSound::pulseIn(int level, int timeout) {
    struct timeval tn, t0, t1;
    long micros;

    gettimeofday(&t0, NULL);
    micros = 0;
    while (digitalRead(mEchoPin) != level) {
        gettimeofday(&tn, NULL);
        if (tn.tv_sec > t0.tv_sec) micros = 1000000L; else micros = 0;
        micros += (tn.tv_usec - t0.tv_usec);
        if (micros > timeout) return 0;
    }

    gettimeofday(&t1, NULL);
    while (digitalRead(mEchoPin) == level) {
        gettimeofday(&tn, NULL);
        if (tn.tv_sec > t0.tv_sec) micros = 1000000L; else micros = 0;
        micros = micros + (tn.tv_usec - t0.tv_usec);
        if (micros > timeout) return 0;
    }

    if (tn.tv_sec > t1.tv_sec) {
        micros = 1000000L;
    } else {
        micros = 0;
    }
    micros = micros + (tn.tv_usec - t1.tv_usec);
    return micros;
}

void UltraSound::run() {
    int i,j,k,l,m;
    long duration;

    digitalWrite(mTrigPin, LOW);  // Added this line
    delayMicroseconds(2); // Added this line
    digitalWrite(mTrigPin, HIGH);
    delayMicroseconds(10); // Added this line
    digitalWrite(mTrigPin, LOW);
    duration = pulseIn(HIGH, 1000000);
    mDist = (duration / 2) / 29.1;

    if (oFuManager::getProcessCounter() % 50 == 0) {
        cout << "dist: " << mDist << " cm" << endl;
    }
}
