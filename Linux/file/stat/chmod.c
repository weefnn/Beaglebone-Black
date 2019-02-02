#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

int main(int argc, char* argv[])
{
	int mode = 0;
	if (argc < 3)
	{
		printf("./chmod mode filename\n");
		exit(1);
	}

	mode = atoi(argv[1]);
	if (chmod("readme", mode) < 0)
	{
		printf("chmod failed.\n");
	}

	return 0;
}
