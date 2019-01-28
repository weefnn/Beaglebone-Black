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
	int fd;

	fd = open("hello", O_RDWR);
	if (fd < 0)
	{
		perror("open hello");
		exit(1);
	}

	printf("hello size=%ld\n", (off_t)lseek(fd, 0, SEEK_END));

	close(fd);
	return 0;
}
