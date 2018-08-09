// pipe1.c    -  A program that uses the function pipe to create a pipe.
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
  int filefd[2];
  char data[]="123";
  char buffer[10];
  int ret;
  ret=pipe(filefd);
  if(ret!=0)
   {
    perror("pipe failed");
    exit(1);
   }
  
  ret=write(filefd[1],data,strlen(data));
   if(ret<0){
   printf("write failed\n");
   exit(1);
   }
  printf("you wrote %d byte\n",ret);
  ret=read(filefd[0],buffer,strlen(data));
  if(ret<0)
   {
     printf("read failed\n");
     exit(1);
   }
 printf("you read %d byte %s\n",ret,buffer);
 exit(0);
}
