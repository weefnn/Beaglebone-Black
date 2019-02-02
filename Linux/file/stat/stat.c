#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>


int main(void)
{
	struct stat file_stat;
	if (stat("readme", &file_stat) < 0)
	{
		perror("stat\n");
		exit(1);
	}

	printf("file size: %ld\n", file_stat.st_size);

	return 0;
}
