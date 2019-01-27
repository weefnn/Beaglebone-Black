import Adafruit_BBIO.GPIO as GPIO
import time

GPIO.setup("P8_14", GPIO.IN)

while True:
    if GPIO.input("P8_14"):
        print("HIGH")
    else:
        print("LOW")

    time.sleep(1)
