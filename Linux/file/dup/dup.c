#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
	int fd, save_fd;
	char msg[] = "This is a test\n";

	fd  =open("somefile", O_RDWR|O_CREAT, S_IRUSR|S_IWUSR);
	if (fd < 0)
	{
		perror("open");
		exit(1);
	}
	save_fd = dup(STDOUT_FILENO); //duplicate fd to save stand output file struct
	dup2(fd, STDOUT_FILENO); // STDOUT_FILENO (1) now point to file struct(somefile) which fd(3) is now pointed to.
	close(fd); // close fd(3), but STDOUT_FILENO (1) is still point to "somefile" file struct.
	write(STDOUT_FILENO, msg, strlen(msg));
	dup2(save_fd, STDOUT_FILENO);//STDOUT_FILENO(1) now point to file struct which save_fd(4) is pointed at. repoint to its original file struct
	write(STDOUT_FILENO, msg, strlen(msg));
	close(save_fd);
	return 0;

}

/*dup2 把我的file struct赋值给你，用你当前的fd指向它，而STDOUT_FILENO是1*/
