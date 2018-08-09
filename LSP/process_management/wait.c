/*
How It Works
The parent process, which got a nonzero return from the fork call, uses the wait system call to suspend its
own execution until status information becomes available for a child process. This happens when the child
calls exit ; we gave it an exit code of 37. The parent then continues, determines that the child terminated
normally by testing the return value of the wait call, and extracts the exit code from the status information.
*/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
  pid_t pid;
  char *msg;int n;
   int exit_code;
   printf("the fork function call\n");
  
    pid=fork();
   switch(pid)
    {
	case -1:printf("fork failed,no child process is created");
                exit(0);
        case 0:	msg="this is child process";
         	n=9;
	        exit_code=37;
	        break;
        default: msg="this is parent process";
        	 n=5;
                 exit_code=0;
                break;
    }
       
  for( ;n>0;n--) {
         sleep(1);
	printf("%s\n",msg);
        }
  
   if(pid!=0)
    {
	pid_t child_pid;
        int stat_value;
        child_pid=wait(&stat_value);
        printf("child has finised:pid:%d\n",child_pid);
         if(WIFEXITED(stat_value))
	   printf("child terminated with code:%d\n ",WEXITSTATUS(stat_value));
         else
	    printf("child terminated abnormally\n");
   }
 getchar();
 exit(exit_code);
 
     
}
