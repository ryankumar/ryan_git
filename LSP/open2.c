#include<unistd.h> 
 #include<stdlib.h>
 #include <stdio.h>

 #include <errno.h>

#include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
  int main()
{
/*  int fd,ret;
char   buff[100];
  fd=open("read.c",O_RDONLY); // it returns the file discriptor value fd=3
  if(fd<0)
    {
	perror("ERROR:");
	printf("errno:%d\n",errno);
       exit(0);
    }
 else
	ret=read(fd,buff,100);
    if(ret<0)
	{
	 perror("ERROR:");
 	 exit(0);
	}
	else
	 write(1,buff,100);
*/
   int fd;
 char buff;
	fd=open("read2.c",O_RDONLY|O_CREAT ,S_IRUSR|S_IWUSR); 
	if(fd<0)
	  {
            perror("ERROR:");
	    printf("errno:%d\n",errno);
	    exit(0);
	  }
	else
	while(read(fd,&buff,1)==1)
	{
	  write(1,&buff,1);
       }

        
}

