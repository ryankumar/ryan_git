//The child process called by execl in pipe3.c.

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
  int ret,filefd;
  char buff[10];
  memset(buff,'\0',sizeof(buff));
  sscanf(argv[1],"%d",&filefd);
   ret=read(filefd,buff,sizeof(buff));
  printf("%d - reads %d bytes %s\n",getpid(),ret,buff);
exit(1);
}
