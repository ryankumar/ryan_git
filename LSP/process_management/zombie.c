/* It is also same as fork_wait but difference is mentioned below.
  You can see a zombie process being created if you change the number of messages in the fork example
program. If the child prints fewer messages than the parent, it will finish first and will exist as a zombie
until the parent has finished.
*/

/*2. How It Works(if while(1); is added)
If you run the preceding program with ./fork2 & and then call the ps program after the child has fin-
ished but before the parent has finished, you’ll see a line such as this. (Some systems may say <zombie>
rather than <defunct> .)
$ ps –al
  0 R  1000  8665  3393 97  80   0 -  1088 -      pts/6    00:00:14 a.out
  1 Z  1000  8666  8665  0  80   0 -     0 -      pts/6    00:00:00 a.out <defunct>

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
   char *const argv[]={"ps","-eaf",0};
   printf("the fork function call\n");
  
    pid=fork();
   switch(pid)
    {
	case -1:printf("fork failed,no child process is created");
                exit(0);
        case 0:	msg="this is child process";
         	n=4;
	        exit_code=37;
	        break;
        default: msg="this is parent process";
  //               while(1);
        	 n=9;
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
     exit(exit_code);
 
     
}
