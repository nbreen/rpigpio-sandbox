#include <iostream>
#include <wiringPi.h>
#include <unistd.h>

int main() {
    int counter = 0;

    wiringPiSetup();
    pinMode(29, OUTPUT); // Green LED
    pinMode(28, OUTPUT); // Red LED
    
    while(counter < 10) {
	switch(counter % 2){
		case 1:
			printf("Turnin on red\n");
			digitalWrite(28, !digitalRead(28));
			break;
		default:
			printf("Turning on green\n");
			digitalWrite(29, !digitalRead(29));
			break;
	}
	counter++;
        sleep(1);
    }

    return 0;
}
