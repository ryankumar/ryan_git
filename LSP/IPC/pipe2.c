/* pipe2.c    -  A program that passes data between the two halves of a forked process using pipe.
after execute check how many fds are created for both parent n child.

 ryan@ryan-HP-241-G1:~/Desktop/LSP/IPC$ ps -eaf| grep a.out 
ryan      7190  2069  0 12:37 pts/17   00:00:00 ./a.out
ryan      7200  6569  0 12:38 pts/2    00:00:00 grep --color=auto a.out
ryan@ryan-HP-241-G1:~/Desktop/LSP/IPC$ ls -l /proc/7190/fd/
total 0
lrwx------ 1 ryan ryan 64 Jun 10 12:39 0 -> /dev/pts/17
lrwx------ 1 ryan ryan 64 Jun 10 12:39 1 -> /dev/pts/17
lrwx------ 1 ryan ryan 64 Jun 10 12:38 2 -> /dev/pts/17
lr-x------ 1 ryan ryan 64 Jun 10 12:39 3 -> pipe:[77473]
l-wx------ 1 ryan ryan 64 Jun 10 12:39 4 -> pipe:[77473]
ryan@ryan-HP-241-G1:~/Desktop/LSP/IPC$ ps -eaf| grep a.out 
ryan      7190  2069  0 12:37 pts/17   00:00:00 ./a.out
ryan      7251  7190  0 12:39 pts/17   00:00:00 ./a.out
ryan      7254  6569  0 12:39 pts/2    00:00:00 grep --color=auto a.out
ryan@ryan-HP-241-G1:~/Desktop/LSP/IPC$ ls -l /proc/7251/fd/
total 0
lrwx------ 1 ryan ryan 64 Jun 10 12:39 0 -> /dev/pts/17
lrwx------ 1 ryan ryan 64 Jun 10 12:39 1 -> /dev/pts/17
lrwx------ 1 ryan ryan 64 Jun 10 12:39 2 -> /dev/pts/17
lr-x------ 1 ryan ryan 64 Jun 10 12:39 3 -> pipe:[77473]
l-wx------ 1 ryan ryan 64 Jun 10 12:39 4 -> pipe:[77473]
ryan@ryan-HP-241-G1:~/Desktop/LSP/IPC$ 
*/
// it is in zombie process . here both children and parent both are same hence pipe communication successed.
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
int main()
{
  int filefd[2];
  char data[]="123";
  char buffer[10];
  int ret;
   pid_t pid;
  ret=pipe(filefd);
  if(ret!=0)
   {
    perror("pipe failed");
    exit(1);
   }
  getchar();
    pid=fork();
   if(pid<0)
   {
    perror("fork failed");
    exit(1);
   }
 getchar();
   if(pid==0)
    {
         ret=read(filefd[0],buffer,strlen(data));
 	 if(ret<0)
   	  {   
    		 printf("read failed\n");
    		 exit(1);
   	  }   
	 printf("you read %d byte %s\n",ret,buffer);    
     }
  else{
  ret=write(filefd[1],data,strlen(data));
   if(ret<0){
   printf("write failed\n");
   exit(1);
   }
  printf("you wrote %d byte\n",ret);
  }
 exit(0);
}
