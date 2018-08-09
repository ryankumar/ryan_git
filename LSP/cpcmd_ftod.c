#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(int argc,char* argv[])
{
	int fd,ret,fd1,ret1,fd2,ret2;
	char buff[1000];
	char tmp;
	fd = open(argv[1],O_RDONLY);
	if(fd < 0)
	{
		perror("ERROR:");
		printf("errno1:%d\n",errno);
		exit(0);
	}
	else
		write(1,"open success\n",13);

	ret2 = chdir(argv[2]);
	if(ret2 < 0)
        {
                perror("ERROR:");
                printf("errno2:%d\n",errno);
                exit(0);
        }
        else
	{
        	write(1,"Directory opened success\n",25);

		fd1 = open(argv[1],O_WRONLY);
        	if(fd1 < 0)
        	{
           	 
                	 creat(argv[1], S_IRUSR|S_IWUSR);
	      	}
       		 else
                	write(1,"open success\n",13);
	}
	
        fd1 = open(argv[1],O_WRONLY);

	while(read(fd, &tmp, 1) == 1)
	{
		write(fd1, &tmp, 1);
	}
}
