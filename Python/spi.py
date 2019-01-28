from Adafruit_BBIO.SPI import SPI
#spi = SPI(bus, device) #/dev/spidev<bus>.<device>

#/dev/spidev0.0
spi = SPI(1,0)
print(spi.xfer2([32 ,11, 110, 22, 220]))
spi.close()

# /dev/spidev0.1
spi = SPI(1,1)
print(spi.xfer2([32 ,11, 110, 22, 220]))
spi.close()

# /dev/spidev1.0
spi = SPI(2,0)
print(spi.xfer2([32, 11, 110, 22, 220]))
spi.close()

# /dev/spidev1.1
spi = SPI(2,1)
print(spi.xfer2([32, 11, 110, 22, 220]))
spi.close()
