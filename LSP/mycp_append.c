#include<unistd.h> 
 #include<stdlib.h>
 #include <stdio.h>

 #include <errno.h>

#include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
  int main(int argc ,char *argv[])
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
   int fd[10],i;
 char buff;
 
   if(argc>1 && argc<4)
     {
        
	      fd[1]=open(argv[1],O_RDWR); 
              fd[2]=open(argv[2],O_APPEND|O_RDWR);
	        if(fd[1]<0 || fd[2]<0)
	          {
                
                      perror("ERROR:");
	               printf("errno:%d\n",errno);
	               exit(0);
	          }
	   /* if(fd[2]<0)	
                  {   
    
                      perror("ERROR:");
                       printf("errno:%d\n",errno);
                       exit(0);
                  }
         */

		 
	        while(read(fd[1],&buff,1)==1)
	           write(fd[2],&buff,1);
       		 
      }
  else
	write(2,"please enter source and destination file\n",41);
	
	exit(0);

        
}

