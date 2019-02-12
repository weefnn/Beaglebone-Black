#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//pid_t fork(void);
	//调用一次返回两次，在父进程返回子进程的PID,在子进程返回0.

	pid_t pid;
	int n = 10;

	pid = fork();

	if(pid > 0)
	{
		while(1)
		{
			printf("I am parent. n=%d\n", n++); // parent has a n
			printf("pid=%d, ppid=%d\n", getpid(), getppid());
			sleep(1);
		}
	}
	else if (pid == 0)
	{
		while(1)
		{
			n += 2;
			printf("I am child. n=%d\n", n); // child has a different n
			printf("pid=%d, ppid=%d\n", getpid(), getppid());
			sleep(1);
		}
	}
	else
	{
		perror("fork");
		return 1;
	}

	return 0;
}
