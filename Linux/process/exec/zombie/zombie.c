#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid;

	int n = 10;
	pid = fork();

	if (pid > 0)
	{
		/*in parent*/
		while(1)
		{
			printf("I am parent %d\n", getpid());
			printf("wait for child %d\n", wait(NULL));

			sleep(1);
		}
	}
	else if (pid == 0)
	{
		/*in child*/
		printf("I am child %d\n", getpid());
		sleep(10);
	}
	else
	{
		perror("fork");
		exit(1);
	}
}
