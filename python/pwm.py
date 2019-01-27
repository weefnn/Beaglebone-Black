import Adafruit_BBIO.PWM as PWM
from time import sleep

#PWM.start(channel, duty, freq=2000, polarity=0)
PWM.start("P9_14", 50)

#optionally,you can set the frequency as well as the polarity from their default
#PWM.start("P9_14", 50, 1000, 1)
#the valid values for duty are 0~ 100

#once you started pwm, you can then set the duty cycle, or the frequency
PWM.set_duty_cycle("P9_14", 25.5)
PWM.set_frequency("P9_14", 10)

sleep(10)
PWM.stop("P9_14")
PWM.cleanup()
