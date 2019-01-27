import Adafruit_BBIO.GPIO as GPIO

GPIO.setup("P8_10", GPIO.OUT)
GPIO.output("P8_10", GPIO.HIGH)
#You can also refer to the pin names
#GPIO.setup("GPIO0_26", GPIO.OUT)
#GPIO.output("GPIO_26", GPIO.HIGH)
GPIO.cleanup()
