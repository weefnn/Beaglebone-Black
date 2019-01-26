#!/bin/bash
echo "This is a Blink USR2 LED example."
echo 0 > /sys/class/leds/beaglebone\:green\:usr2/brightness
sleep 1s
echo 1 > /sys/class/leds/beaglebone\:green\:usr2/brightness
sleep 1s
echo 0 > /sys/class/leds/beaglebone\:green\:usr2/brightness
sleep 1s
echo 1 > /sys/class/leds/beaglebone\:green\:usr2/brightness
sleep 1s
echo 0 > /sys/class/leds/beaglebone\:green\:usr2/brightness

