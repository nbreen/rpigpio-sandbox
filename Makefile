CC = g++
CC_FLAGS = -Wall -Werror -g
CC_LIBS = -lwiringPi

all: led_blink.cc
	$(CC) $(CC_FLAGS) led_blink.cc -o led_blinkInC $(CC_LIBS)
