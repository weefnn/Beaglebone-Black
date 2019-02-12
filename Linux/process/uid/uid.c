#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int fd;

	fd = open("abc", O_CREAT, 0777);
	printf("%d\n", getuid());
	printf("%d\n", geteuid());


	close(fd);

	return 0;
}
