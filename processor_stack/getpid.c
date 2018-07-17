#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
 {
int i;
   char command[100];
//   int pid=fork();
//   printf("%d\n",pid);
  //  if(pid==0)
    //       printf("%d\n",getpid());
//    else
  //    printf("%d\n",getppid());
     
   sprintf(command,"cat /proc/%d/maps",getpid());
   system(command);
  printf("pid:%d\n",getpid());
  printf("ppid:%d\n",getppid());


 }
