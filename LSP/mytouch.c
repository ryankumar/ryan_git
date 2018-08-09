#include<unistd.h> 
 #include<stdlib.h>
 #include <stdio.h>
#include <utime.h>

 #include <errno.h>

#include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
  int main(int argc,char * argv[])
{

   char buff[100];int fd,i;
    if(argc>1)
      {
	for(i=1;i<argc;i++)
	{
	   fd=open(argv[i],O_RDONLY);
               if(fd<0)
                {
                   fd=creat(argv[i],0666);  //  permission mode 0666-0002(default)=0664(rw_rw_r__)
                  exit(0);
                }
	   else
	     utime(argv[i],0);
		
         }     
        
     }
  else
    {
	write(2,"touch: missing file operand\n",35);
	write(2,"Try 'touch --help' for more information.\n",60);
    }

        
}

