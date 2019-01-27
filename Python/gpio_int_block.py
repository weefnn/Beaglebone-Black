import Adafruit_BBIO.GPIO as GPIO
from time import sleep

GPIO.setup("P8_14", GPIO.IN)

while True:
    GPIO.wait_for_edge("P8_14", GPIO.RISING)
    print "we get a rising edge!"
    sleep(1)
