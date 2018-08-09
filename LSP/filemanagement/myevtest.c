#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <linux/input.h>
#include <sys/ioctl.h>

#include<stdlib.h>
#include<unistd.h>
int main()
{
  char buff[100];
 int fd,ret;
  struct input_event ev; 
	fd=open("/dev/input/event3",O_RDONLY);
	 if(fd<0)
	  {
	    perror("open");
    	    exit(0);
 	  }
	while(1){
       ret=read(fd,&ev,sizeof(ev));
	if(ret<0)
	 {
	   perror("read error:");
            exit(0);
	 }
      printf("type:%hd\t code:%hd\t value:%d\n",ev.type,ev.code,ev.value)	;
     }
}
