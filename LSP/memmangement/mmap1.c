#include<stdio.h>
#include <sys/mman.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
   int fd,sfd;
   unsigned int len;
  char *temp,*var; 
   struct stat buff;
    fd=open(argv[1],O_RDONLY);
   if(fd<0)
    {
	perror("open error:");
	 exit(0);
    }
    
   sfd=fstat(fd,&buff);
   if(sfd<0)
    {
	perror("fastat error:");
	exit(0);
     }
    
  len=buff.st_size;
    if(len==0)
      {
	printf("file is empty\n");
	 exit(0);
      }
  temp=(char *)mmap(NULL,len,PROT_READ|PROT_WRITE,MAP_PRIVATE,fd,0);
  var=temp;
   if(temp==NULL)
    {
	perror("mmap error:");
  	exit(0);
    }
     for(int i=0;i<len;i++)
	printf("%c",*temp++);
  munmap(var,len);
   close(fd);
}
