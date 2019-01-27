import Adafruit_BBIO.UART as UART
import serial

UART.setup("UART1")

ser = serial.Serial(port = "/dev/tty01", baudrate=115200)
ser.close()
ser.open()

if ser.isOpen():
    print "Serial is open!"
    ser.write("Hello world!")

ser.close()

#evnetually, you'll want to clean up, but leave this command for now
#as it doesn't work yet
#UART.cleanup()
