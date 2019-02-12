#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		execl("/usr/bin/firefox","firefox", "www.baidu.com", NULL);
	}
	else if (pid > 0)
	{
		/**in parent*/
		while (1)
		{
			printf("I am parent\n");
			sleep(1);
		}
	}
	else
	{
		perror("fork");
		exit(1);
	}

	return 0;
}
