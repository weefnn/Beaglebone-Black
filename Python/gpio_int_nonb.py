import Adafruit_BBIO.GPIO as GPIO
from time import sleep

GPIO.setup("P8_14", GPIO.IN)
GPIO.add_event_detect("P8_14", GPIO.FALLING)
#your amazing code here

while True:
    print "{0}+{1}={2}".format(1,2,1+2)
    sleep(1)
    #detect wherever:
    if GPIO.event_detected("P8_14"):
        print "event detected!"

