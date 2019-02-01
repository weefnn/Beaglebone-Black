#include <iostream>
#include <stdio.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/i2c.h>
#include <linux/i2c-dev.h>
#include <iomanip>

using namespace std;

#define HEX(x) setw(2) << setfill('0') << hex << (int)(x)
#define DEVID 0x00
#define BUFFER_SIZE 40

int main(void)
{
	int file;
	cout << "starting the adxl345 test application" << endl;
	if ((file=open("/dev/i2c-1", O_RDWR)) < 0)
	{
		cout <<"failed to open the bus" << endl;
		return 1;
 	}
	if (ioctl(file, I2C_SLAVE, 0x53) < 0)
	{
		count <<"failed to connect to the sensor" <<endl;
		return 1;
	}
	char writeBuffer[1] = {0x00};
	if (write(file, writeBUffer, 1)!=1)
	{
		cout<< "failed to reset the read address" <<endl;
		return 1;
	}
	char readBuffer[BUFFER_SIZE];
	if (read(file, readBuffer, BUFFER_SIZE) != BUFFER_SIZE)
	{
		cout << "failed to read in the buffer" <<endl;
		return 1;
	}
	cout << "the device id is :" <<HEX(readBuffer[DEVID]) <<endl;
	close(file);
	
	return 0;
}