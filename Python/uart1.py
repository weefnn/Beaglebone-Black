import Adafruit_BBIO.UART as UART
import serial

UART.setup("UART1")

with serial.Serial(potr = "/dev/ttyO1", baudrate=9600) as ser:
    print("Serial is open!")
    ser.write(b"Hello World!")
