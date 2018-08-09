#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>
       #include <unistd.h>
int main()
{
  int ret;
  ret=mknod("myfifo1", S_IFIFO|0666,0);
  if(ret==0)
   printf("mknod created\n");
 exit(0);
}
