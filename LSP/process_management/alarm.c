// When you run this program, it pauses for five seconds while it waits for the simulated alarm clock

/* How It Works
The alarm clock simulation program starts a new process via fork . This child process sleeps for five
seconds and then sends a SIGALRM to its parent. The parent arranges to catch SIGALRM and then pauses
until a signal is received. You do not call printf in the signal handler directly; rather, you set a flag and
then check the flag afterward. */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<signal.h>
static int alrm_fired=0;
 void ding(int sig) // signal handler
  {
    alrm_fired=1;
  }
// In main , you tell the child process to wait for five seconds before sending a SIGALRM signal to its parent.
 int main()
 {
    pid_t pid;
   printf("alarm  function is start\n");
    pid=fork();
   if(pid<0)
    {
	printf("fork faild\n");
        exit(1);
    }
   else if(pid==0)
    {
      sleep(5);
      kill(getppid(),SIGALRM);
      exit(0);
    }
// The parent process arranges to catch SIGALRM with a call to signal and then waits for the inevitable 
  /* if we get here we are the parent process */
  printf("waiting for alrm to off\n");
    (void) signal(SIGALRM,ding); // signal initialization
     
   pause();
     if(alrm_fired==1)
       printf("ding ! \n");
   printf("done\n");
 exit(0);
}


