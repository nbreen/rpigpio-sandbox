#include <iostream>
#include <wiringPi.h>
#include <unistd.h>

int main() {
    int counter = 0;

    wiringPiSetup();
    pinMode(29, OUTPUT);

    while(counter < 10) {
        digitalWrite(29, !digitalRead(29));
        counter++;
        sleep(1);
    }

    return 0;
}