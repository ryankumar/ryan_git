

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<sys/types.h>
#include<semaphore.h>
#include <string.h>

void * producer1(void * arg);
void * producer2(void * arg);
void * consumer(void * arg);
#define size 5
char buff[size];
sem_t empty,full;
int status=1;
pthread_mutex_t prod,cons;

int main()
{
  int res;
  pthread_t p1thread,cthread,p2thread;
  void *retval;

// initialize an full semaphore
  res=sem_init(&full,0,0);
  if(res!=0)
   {
    perror("sem_init not created");
     exit(1);
   }

//  res=pthread_mutex_init(&prod,NULL);
 // res=pthread_mutex_init(&cons,NULL);

// initialize an empty semaphore with value of buffer size
 res=sem_init(&empty,0,size);
  if(res!=0)
   {
    perror("sem_init not created");
     exit(1);
   }

// producer1 thread creation 
 res=pthread_create(&p1thread,NULL,producer1,NULL);
 if(res!=0)
  {
   perror("producer thread creation faild");
   exit(1);
  }

 // producer2 thread creation 
 res=pthread_create(&p2thread,NULL,producer2,NULL);
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
  
// producer1 thread join
 printf("producer thread waiting to join...\n");
   res=pthread_join(p1thread,&retval);
   if(res!=0)
    {
      perror("producer thread join failed");
      exit(1);
    }
  printf("poducer thread joined:%s\n",(char *)retval);

// producer2 thread join
 printf("producer thread waiting to join...\n");
   res=pthread_join(p2thread,&retval);
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


 void * producer1(void * arg)
 {
    int in=0;
    char data='A';
   while(1)
    {
      sem_wait(&empty); // blocking the empty semaphore bcz full semaphore is in critical section
      
      pthread_mutex_lock(&prod);
        buff[in]=data;
        in=(in+1) % size;
        data++;
     if(in==0){     
      data='A';
      printf("p1:%s\n\t",buff);
      
      }
     pthread_mutex_unlock(&prod);
     sem_post(&full); // relesing full semaphore from critical section;
    }
  pthread_exit("producer exit");
}

 void * producer2(void * arg)
 {
    int in=0;
    char data='a';
   while(1)
    {
       sem_wait(&empty); // blocking the empty semaphore bcz full semaphore is in critical section
      
       pthread_mutex_lock(&prod);
       
        buff[in]=data;
        in=(in+1) % size;
        data++;
     
      if(in==0){
      data='a';
      printf("p2:%s\n\t",buff);
      
      }
     pthread_mutex_unlock(&prod);
      sem_post(&full); // relesing full semaphore from critical section;
   }
  pthread_exit("producer exit");
}

 void * consumer(void * arg)
  {
     int out=0;
     char recv[size];
    while(1)
     {
       sem_wait(&full); // blocking full semaphore as empty semaphore is in critical section
       pthread_mutex_lock(&prod);  // blocking the producer mutex;
        
	recv[out]=buff[out];
        out=(out+1) % size;
        
	if(out==0){
        recv[size]='\0';
	 printf("c:%s\n",recv);
        }
         pthread_mutex_unlock(&prod); // releasing the producer mutex
         sem_post(&empty); // releasing empty semaphore from critical section
    }
  pthread_exit("consumer exit");
}
