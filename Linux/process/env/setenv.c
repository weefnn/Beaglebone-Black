#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	printf("Path~~ %s\n",getenv("PATH"));
	if (setenv("PATH", "/", 1) != 0)
	{
		printf("setevn error\n");
		return 0;
	}
	printf("Path~~ %s\n",getenv("PATH"));

	return 0;
}
