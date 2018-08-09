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
   int fd[10],i,nread,linenum=0;
 char buff;
 char temp[20];
   
   if(argc>1)
     {
       for(i=1;i<argc;i++)
	{
	   linenum=0;
          write(1,"=====>",6);
          write(1,argv[i],sizeof(argv[i])-1);
          write(1,"<=====\n",7);
	    fd[i]=open(argv[i],O_RDONLY); 
	     if(fd[i]<0)
	      {
                 perror("ERROR:");
	         printf("errno:%d\n",errno);
	         exit(0);
	      }
	   else
	        while(read(fd[i],&buff,1)==1)
	         {
	  	   if(buff=='\n')
			linenum++;
		   if(linenum<10)
                   write(1,&buff,1);
       		 }
	    write(1,"\n",1);
     	 }
	
     }
  else if(argc==1)
	{
	  while((nread=read(0,temp,sizeof(temp)))>0)
	     {
//	       printf("nread:%u\n",nread);
	        write(1,temp,nread);
	     }
	}    

        
}

