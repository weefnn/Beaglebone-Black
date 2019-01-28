#include <stdlib.h>
#include <stdio.h>

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

#include <errno.h>
/*
 * off_t lseek(int fd, off_t offset, int whence);
 */
int main(void)
{
	int fd = open("abc", O_RDWR);
	if (fd < 0)
	{
		perror("open abc");
		exit(1);
	}

	lseek(fd, 0x1000, SEEK_SET);
	write(fd, "a", 1);

	close(fd);
	return 0;
}
