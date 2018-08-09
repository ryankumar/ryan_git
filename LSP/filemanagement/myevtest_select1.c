#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <linux/input.h>
#include <sys/ioctl.h>
 #include <sys/select.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
 
 int fd[10],i,ret;
   char buff[30];
  struct input_event ev; 
   fd_set fdsread;
    int retvl;
      
	 for(i=1;i<argc;i++)
          {
		fd[i]=open(argv[i],O_RDONLY);
	 	if(fd[i]<0)
	  	 {
	   	   perror("open");
    	    	    exit(0);
 	  	 }

           ret= ioctl(fd[i],EVIOCGNAME(sizeof(buff)),buff);
               printf("name of the device is:%s\n",buff);
        
		FD_ZERO(&fdsread);
      		 printf("number of fds:%d\n",FD_SETSIZE);	
      
		while(1){
          	 FD_SET(fd[i], &fdsread);
	   	 retvl=select(FD_SETSIZE,&fdsread,NULL,NULL,0);
	   	if(retvl<0)
	     	  {
			perror("select()");
			exit(0);
	     	   }

	    	if( FD_ISSET(fd[i], &fdsread))
	    	   {
      		      ret=read(fd[i],&ev,sizeof(ev));
		      
		      if(ret<0)
	 	       {
	   	       	  perror("read error:");
           		   exit(0);
         	       }

	            }
	        printf("Event: time  %ld.%ld type  %hd code   %hd  value   %d\n",ev.time.tv_sec,ev.time.tv_usec,ev.type,ev.code,ev.value);
	        printf("\n");
            
                }
           }
      

 }
