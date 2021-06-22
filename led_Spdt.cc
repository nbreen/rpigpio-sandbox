#include <iostream>
#include <wiringPi.h>
#include <unistd.h>

int main() {
    //int counter = 0;

    wiringPiSetup();
    pinMode(29, OUTPUT); // Green LED
    pinMode(28, OUTPUT); // Red LED
    pinMode(27, INPUT); // SPDT Switch

    while(1) {
	int switchState = digitalRead(27);
    	printf("SPDT Reads %d\n", switchState);
	fflush(stdout);
	
	if (switchState) {
		printf("Circuit on\n");
		fflush(stdout);
		digitalWrite(28, 1);
		digitalWrite(29, 1);
	} else {
		printf("Circuit off\n");
		fflush(stdout);
		digitalWrite(28, 0);
		digitalWrite(29,0);
	}
	
	sleep(2);
    }

    /*while(counter < 10) {
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
    }*/

    return 0;
}
