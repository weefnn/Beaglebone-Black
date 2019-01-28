from Adafruit_I2C import Adafruit_I2C

i2c = Adafruit_I2C(0x77)


# some useful APIs are as follows:
# class Adafruit_I2C
# |  Methods defined here:
# |  
# |  __init__(self, address, busnum=-1, debug=False)
# |  
# |  errMsg(self)
# |  
# |  readList(self, reg, length)
# |      Read a list of bytes from the I2C device
# |  
# |  readS16(self, reg)
# |      Reads a signed 16-bit value from the I2C device
# |  
# |  readS16Rev(self, reg)
# |      Reads a signed 16-bit value from the I2C device with rev byte order
# |  
# |  readS8(self, reg)
# |      Reads a signed byte from the I2C device
# |  
# |  readU16(self, reg)
# |      Reads an unsigned 16-bit value from the I2C device
# |  
# |  readU16Rev(self, reg)
# |      Reads an unsigned 16-bit value from the I2C device with rev byte order
# |  
# |  readU8(self, reg)
# |      Read an unsigned byte from the I2C device
# |  
# |  reverseByteOrder(self, data)
# |      Reverses the byte order of an int (16-bit) or long (32-bit) value
# |  
# |  write16(self, reg, value)
# |      Writes a 16-bit value to the specified register/address pair
# |  
# |  write8(self, reg, value)
# |      Writes an 8-bit value to the specified register/address
# |  
# |  writeList(self, reg, list)
# |      Writes an array of bytes using I2C format

