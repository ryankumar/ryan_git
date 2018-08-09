/* producerconsumer2.c (producer consumer problem using Pthreads and counting semaphores)
----------------------------
This example implement 2 counting semaphores one is empty and another one is full. This examples works fine if one producer and one consumer.
Drawback: Doesn't works Multiple Producers. hence for multiple producer we have to use mutex.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<sys/types.h>
#include<semaphore.h>
void * producer(void * arg);
void * consumer(void * arg);
#define size 26
char buff[size];
sem_t empty,full;
int main()
{
  int res;
  pthread_t pthread,cthread;
  void *retval;

// initialize an full semaphore
  res=sem_init(&full,0,0);
  if(res!=0)
   {
    perror("sem_init not created");
     exit(1);
   }

// initialize an empty semaphore with value of buffer size
 res=sem_init(&empty,0,size);
  if(res!=0)
   {
    perror("sem_init not created");
     exit(1);
   }

// producer thread creation 
 res=pthread_create(&pthread,NULL,producer,NULL);
 if(res!=0)
  {
   perror("producer thread creation faild");
   exit(1);
  }

// consumer thread creation
  res=pthread_create(&cthread,NULL,consumer,NULL);
 if(res!=0)
  {
   perror("consumer thread creation faild");
   exit(1);
  }
  
// producer thread join
 printf("producer thread waiting to join...\n");
   res=pthread_join(pthread,&retval);
   if(res!=0)
    {
      perror("producer thread join failed");
      exit(1);
    }
  printf("poducer thread joined:%s\n",(char *)retval);

// consumer thread join
  printf("consumer thread waiting to join...\n");
   res=pthread_join(cthread,&retval);
   if(res!=0)
    {
      perror("producer thread join failed");
      exit(1);
    }
   printf("consumer thread joined:%s\n",(char *)retval);
  
  sem_destroy(&empty);
  sem_destroy(&full);
   exit(0);
}


 void * producer(void * arg)
 {
    int in=0;int value;
    char data='A';
   while(1)
    {
      sem_wait(&empty); // blocking the empty semaphore bcz full semaphore is in critical section
               sem_getvalue(&empty,&value);
              printf("         producer:empty:  value:%d\n",value); 
       buff[in]=data;
        in=(in+1) % size;
        data++;
     if(in==0){     
      data='A';
      printf("p:%s\n\t",buff);
      }

     sem_post(&full); // relesing full semaphore from critical section;
           sem_getvalue(&full,&value);
              printf("producer:full:  value:%d\n",value);
    
    }
  pthread_exit("producer exit");
}

 void * consumer(void * arg)
  {
     int out=0;int value;
     char recv[size];
    while(1)
     {
       sem_wait(&full); // blocking full semaphore as empty semaphore is in critical section
               sem_getvalue(&full,&value);
              printf("producer:full:  value:%d\n",value);
        recv[out]=buff[out];
        out=(out+1) % size;
       if(out==0){
        recv[size]='\0';
       printf("c:%s\n",recv);
       }
      sem_post(&empty); // releasing empty semaphore from critical section
             sem_getvalue(&empty,&value);
              printf("         producer:empty:  value:%d\n",value);
    }
  pthread_exit("consumer exit");
}
