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
   FILE *in,*out;
 int buff;
 int i;
   if(argc>1 && argc<4)
     {
        
	
	      in=fopen(argv[1],"r"); 
	      out=fopen(argv[2],"w");
                
        
		while((buff = fgetc(in)) != EOF)
			fputc(buff,out);
	  
      }
  else 
    {
	write(2,"cp: missing file operand\n",25);
        write(2,"Try 'cp --help' for more information\n",38); 
     }	
	exit(0);

        
}

