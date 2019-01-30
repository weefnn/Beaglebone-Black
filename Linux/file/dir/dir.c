#include <stdio.h>
#include <unistd.h>

#define SIZE 4096
//char *getcwd(char *buf, size_t size);
int main(void)
{
	char buf[SIZE];

	chdir("/");
	printf("current dir:%s\n",getcwd(buf, sizeof(buf)));

	return 0;
}
