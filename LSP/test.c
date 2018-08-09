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
        for(i=1;i<argc;i++)
	 {
	      fd[i]=open(argv[i],O_RDWR); 
	        if(fd[1]<0)
	          {
                
                      perror(argv[i]);
       		     
	             //  printf("errno:%d\n",errno);
			exit(0);
	          }
	       else if(fd[2]<0){
	   //       fd[2]=open(argv[2],O_RDWR|O_CREAT,S_IRUSR |S_IWUSR |S_IRGRP|S_IROTH|S_IWOTH);
                   fd[2]=open(argv[2],O_RDWR|O_CREAT,0666);
                }
        }

		 
	        while(read(fd[1],&buff,1)==1)
	           write(fd[2],&buff,1);
       		 
      }
  else 
    {
	write(2,"cp: missing file operand\n",25);
        write(2,"Try 'cp --help' for more information\n",38); 
     }	
	exit(0);

        
}

