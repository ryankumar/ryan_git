// this programme contains all error handling for arg: ./a.out <filename> <offset> <length>

#include<stdio.h>
#include <sys/mman.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
   int fd,sfd,ret;
   unsigned int len;
  char *temp; 
   unsigned int pos,offset;
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
   
    pos=atoi(argv[2]);
    offset=pos & ~(sysconf(_SC_PAGE_SIZE) - 1);     // page boundary
    if(pos>=buff.st_size)
      {
	printf("off set is at the end of file\n");
	exit(0);
	}
	
   len=atoi(argv[3]);
    if(len==0)    
      {
        printf("reading bytes is zero\n");
        exit(0);
      } 
  else if(len+pos>buff.st_size)
	{
	   len=buff.st_size-pos;
	   printf("required size length <=%d\n",len);
            exit(0)	 ;
        }
   
     temp=(char *)mmap(NULL,len,PROT_READ|PROT_WRITE,MAP_PRIVATE,fd,offset);
   if(temp==NULL)
    {
	perror("mmap error:");
  	exit(0);
    }
      
	ret= write(1,temp + pos -offset,len);
	if(ret<0)
	 {
	   perror("write error:");
	    exit(0);
         }
    munmap(temp);
    close(fd);
}
