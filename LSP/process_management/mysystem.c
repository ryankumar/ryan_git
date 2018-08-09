#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

void mysystem(const char *);
int main()
{
   printf("process is start\n");
   mysystem("ps -eaf");
  return 0;
}

void mysystem(const char *ptr)
 {
  pid_t pid;int status;
  pid=fork();
   if(pid==0)
    {
      if(execl("/bin/sh","sh","-c",ptr,NULL)<0)
        printf("child fail\n");
        exit(0) ;
    }
  else
     {
	 wait(&status);printf("parent");
     }
}
        
       
