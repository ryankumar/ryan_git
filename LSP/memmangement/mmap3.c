// copy fun implementation by mmap

#include<stdio.h>
#include <sys/mman.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
#include <string.h>
int main(int argc,char *argv[])
{
   int fd1,fd2,sfd,fret;
   unsigned int len;
  char *temp,*temp1; 
   struct stat buff;
    fd1=open(argv[1],O_RDONLY);
   if(fd1<0)
    {
	perror("open error:");
	 exit(0);
    }
   fd2=open(argv[2],O_RDWR|O_CREAT, 0666);
    if(fd2<0)
      {
	perror("open fd2 error:");
	exit(0);
      }
    
   sfd=fstat(fd1,&buff);
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
    fret=ftruncate(fd2, len);    

  temp=(char *)mmap(NULL,len,PROT_READ|PROT_WRITE,MAP_PRIVATE,fd1,0); // temp contains the contents of fd1..
   if(temp==NULL)
    {
	perror("mmap error:");
  	exit(0);
    }
 
  temp1=(char *)mmap(NULL,len,PROT_READ|PROT_WRITE,MAP_SHARED,fd2,0); // temp1 contains mapping write data fd2
    if(temp1==NULL)
    {   
        perror("mmap error:");
        exit(0);
    }
  
      memcpy(temp1,temp, len);
     
    
  munmap(temp,len);
  munmap(temp1,len);
 close(fd1);
 close(fd2);
}
