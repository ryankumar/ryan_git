/*This function ignores all types of signals like CTRL+C,but it will stop the job by pressing CTRL+Z but it will not terminate.wgen you enter kill -CONT %1 it will again start th process until "kill <pid no>".
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <signal.h>

void ouch(int sig)   // this is signal handler
 {
   printf("OUCH ! i got signal:%d\n",sig);
   (void) signal(SIGINT,SIG_IGN);   // SIGINT-CTRL+C,SIG_IGN-ignor the signals.
 }

int main()
{
   (void) signal(SIGINT,ouch);  // initialisation of signal 
    while(1)
     {
       printf("hello world\n");
       sleep(1);
     }
 }
 
