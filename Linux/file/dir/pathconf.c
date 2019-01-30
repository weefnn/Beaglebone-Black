#include <stdio.h>
#include <unistd.h>
/*get path configurations ,like max len of a file name..*/
int main(void)
{
	printf("%ld\n", fpathconf(STDOUT_FILENO, _PC_NAME_MAX));

	printf("%ld\n", pathconf("dir", _PC_NAME_MAX));
	return 0;
}
