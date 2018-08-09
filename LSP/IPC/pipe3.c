/* here pipe communication takes place between two unknown process..children process is replaced with another new perocess and data sharing is taken place between parent process and child new process..
 during execute make gcc pipe4.c -o pipe4 and after that gcc pipe3.c
 
   $./a.out
*/
/*pipe3.c    -  A program that uses the functions fork and execl to create a child process and then uses the function pipe to pass data from one to the other.*/
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
  memset(buffer,'\0',sizeof(buffer)); // it clears the buffer
  ret=pipe(filefd);
  if(ret!=0)
   {
    perror("pipe failed");
    exit(1);
   }
    pid=fork();

   if(pid<0)
   {
    perror("fork failed");
    exit(1);
   }
   if(pid==0)
    {
       sprintf(buffer,"%d",filefd[0]);
         execl("pipe4","pipe4",buffer,NULL);
 	 exit(EXIT_FAILURE);
     }
  
  else{
  ret=write(filefd[1],data,strlen(data));
   if(ret<0){
   printf("write failed\n");
   exit(1);
   }
 
  printf("%d - wrote %d byte\n",getpid(),ret);
  }
 exit(0);
}
