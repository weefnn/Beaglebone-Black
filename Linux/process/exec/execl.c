#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("hello \n");

	execl("/bin/ls", "ls", "-l", NULL);

	printf("world.\n");

	return 0;
}
