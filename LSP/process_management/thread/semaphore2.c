/* Let’s modify the program slightly to semaphore1.c to pretend that text input from the keyboard is sometimes replaced with automatically
available text. Modify the reading loop in the main to this:

 Now if you type FAST, the program calls sem_post to allow the character counter to run, but immedi-
ately updates work_area with something different.
 
 The problem is that the program was relying on text input from the program taking so long that there
was time for the other thread to count the words before the main thread was ever ready to give it more
words to count. When you tried to give it two different sets of words to count in quick succession (FAST
from the keyboard and then Wheeee... automatically), there was no time for the second thread to exe-
cute. However, the semaphore had been incremented more than once, so the counter thread just kept
counting the words and decreasing the semaphore until it became zero again.
*/
// some extra job is: modify if(strncmp(work_area,"FAST",4)!=0) and add signal handling for checking that signal is working or not

#include<stdio.h>
#include<stdlib.h>
#include<semaphore.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
#include<sys/types.h>
#include<signal.h>
sem_t sem;
#define size 1024
char work_area[size];
void * thread_fun(void * arg);
/*
void ouch(int sig)   // this is signal handler
 {
   printf("OUCH ! i got signal:%d\n",sig);
   (void) signal(SIGINT,SIG_IGN);   // SIGINT-CTRL+C,SIG_IGN-ignor the signals.
 }
*/
int main()
{
   int res;
   pthread_t thread;
 void *retval;
// (void) signal(SIGINT,ouch); 
// semaphore initialization
   res=sem_init(&sem,0,0);
   if(res!=0)
    {
     perror("sem_init");
      exit(1);
    }
 // thread creation
   res=pthread_create(&thread,NULL,thread_fun,NULL);
   if(res!=0)
    {
      perror("pthread_creat");
      exit(1);
    }
 //send some message to thread
   printf("enter some text. enter end to finish\n");
   while((strncmp("end",work_area,3))!=0){
        if(strncmp(work_area,"FAST",4)==0)
	 {
            sem_post(&sem);
	   strcpy(work_area,"wheeee...");
         }
      else
      fgets(work_area,size,stdin);
       sem_post(&sem);
      }
// waiting for finish the thread 
   printf("waiting for thread to finish\n ");
  res=pthread_join(thread,&retval);
   if(res!=0)
    {
      perror("pthread_join");
      exit(1);
    }
  printf("thread join finished with retval:%s\n",(char *)retval);
   printf("waiting for semaphore to destroy...\n");
 // semaphore destroye
    sem_destroy(&sem);
   printf("semaphore destroyed\n");
 exit(0);
}

 void * thread_fun(void *arg)
  {
    sem_wait(&sem);
   while((strncmp("end",work_area,3))!=0){
    printf("you enterd %d character\n",strlen(work_area)-1);
     sem_wait(&sem);
    }
 pthread_exit("thread finished");
}

