#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
    pid_t pid;
   printf("the process gas start\n");
   getchar();
  printf("process id is:%d\n",getpid());
  printf("parent process id id:%d\n",getppid());
return 0;
}
