#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <linux/input.h>
#include <sys/ioctl.h>

#include<stdlib.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
 
 int fd1,fd2,ret;
char buff[30];
  struct input_event ev; 
  
	fd1=open(argv[1],O_RDONLY);
	 if(fd1<0)
	  {
	    perror("open");
    	    exit(0);
 	  }

        fd2=open(argv[2],O_RDONLY);
         if(fd2<0)
          {
            perror("open");
            exit(0);
          }

         ret= ioctl(fd1,EVIOCGNAME(sizeof(buff)),buff);
          printf("name of the device is:%s\n",buff);

          ret= ioctl(fd2,EVIOCGNAME(sizeof(buff)),buff);
          printf("get device properties:%s\n",buff);


	while(1){

       ret=read(fd1,&ev,sizeof(ev));
	if(ret<0)
	 {
	   perror("read error:");
            exit(0);
         }
      printf("Event: time  %ld.%ld type  %hd code   %hd value   %d\n",ev.time.tv_sec,ev.time.tv_usec,ev.type,ev.code,ev.value);
         }
     while(1){
      ret=read(fd2,&ev,sizeof(ev));
        if(ret<0)
         {
           perror("read error:");
            exit(0);
         }
       //printf("type:%hd\t code:%hd\t value:%d\n",ev.type,ev.code,ev.value);
       printf("Event: time  %ld.%ld type  %hd code   %hd  value   %d\n",ev.time.tv_sec,ev.time.tv_usec,ev.type,ev.code,ev.value);



     }
      
// here only single device or i/o is working at a time ...hence we have to use select s/m call for operating multiple i/o device at a time
}
