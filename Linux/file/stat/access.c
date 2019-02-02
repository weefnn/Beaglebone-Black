#include <unistd.h>
#include <stdio.h>

int main(void)
{
	if (access("readme", R_OK) == 0)
	{
		printf("you have read access right.\n");
	}
	else
	{
		printf("no right read.\n");
	}

	return 0;
}
