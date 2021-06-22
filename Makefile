CC = g++
CC_FLAGS = -Wall -Werror -g
CC_LIBS = -lwiringPi

all: led_blink.cc led_Spdt.cc
	$(CC) $(CC_FLAGS) led_blink.cc -o led_blinkInC $(CC_LIBS)
	$(CC) $(CC_FLAGS) led_Spdt.cc -o led_SwitchControl $(CC_LIBS)

clean:
	rm led_blinkInC led_SwitchControl
