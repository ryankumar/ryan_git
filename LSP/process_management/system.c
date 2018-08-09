#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
  int ret;
  printf("system call process\n");
 //fore ground process
   system("ps -eaf");
//   system("ls -a");
//   system("du -h");
//background process
// system("du -h &");
 //system("ps -eaf &");
//printf("lscommand\n");
//system("ls -a &");
 //printf("done\n");
 exit(0);

 }
