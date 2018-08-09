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
 
 int fd,ret;
//char buff[1000];
  struct input_event ev; 
	fd=open(argv[1],O_RDONLY);
	 if(fd<0)
	  {
	    perror("open");
    	    exit(0);
 	  }
	while(1){
       ret=read(fd,&ev,sizeof(ev)); // it may not identify proper i/o.hence use IOCTL(see myevetest_ioctl.c)
    //	ret=read(fd,buff,100);    // it will store the garbage value in buff
	if(ret<0)
	 {
	   perror("read error:");
            exit(0);
	 }
      printf("type:%hd\t code:%hd\t value:%d\n",ev.type,ev.code,ev.value)	;
//	printf("data:%s\n",buff); // it will produce the garbage value
     }
}
