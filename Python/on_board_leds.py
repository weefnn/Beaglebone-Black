import Adafruit_BBIO.GPIO as GPIO
import time

for i in range(4);
    GPIO.setup("USR%d"%i, GPIO.OUT)
    
while True:
    for i in range(4):
        GPIO.output("USR%d"%i, GPIO.HIHG)
        time.sleep(1)
    for i in range(4):
        GPIO.output("USR%d"%i, GPIO.LOW)
        time.sleep(1)
