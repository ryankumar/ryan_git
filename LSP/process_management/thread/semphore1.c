// this is an example of binary semaphore...
/* How It Works:
When you initialize the semaphore, you set its value to 0 . Thus, when the thread’s function starts, the
call to sem_wait blocks and waits for the semaphore to become nonzero.

In the main thread, you wait until you have some text and then increment the semaphore with sem_post ,
which immediately allows the other thread to return from its sem_wait and start executing. Once it has
counted the characters, it again calls sem_wait and is blocked until the main thread again calls sem_post
to increment the semaphore

 here main() is producer and thread_fun() is consumer..hence he thread control is in the hand of main thread...
*/
#include<stdio.h>
#include<stdlib.h>
#include<semaphore.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
#include<sys/types.h>
sem_t sem;
#define size 1024
char work_area[size];
void * thread_fun(void * arg);
int main()
{
   int res;
   pthread_t thread;
 void *retval;
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
  printf("thread join finished with retval:%s\n",retval);
   printf("waiting for semaphore to destroy...\n");
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

