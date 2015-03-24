#!/bin/bash

avr-gcc -Os -w -ffunction-sections -fdata-sections -Wall -Wextra -std=c11 -mmcu=attiny85 -DF_CPU=1000000L -c test_bottone.c && \
avr-gcc -g -std=c11 -mmcu=attiny85 -DF_CPU=1000000L -o test_bottone.elf test_bottone.o && \
avr-objcopy -j .text -j .data -O ihex test_bottone.elf test_bottone.hex && \
avr-size -C --mcu=attiny85 test_bottone.elf 
