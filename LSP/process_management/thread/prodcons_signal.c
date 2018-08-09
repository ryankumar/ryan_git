#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<sys/types.h>
#include <signal.h>
void * producer(void * arg);
void * consumer(void * arg);
#define size 5
char buff[size];

 pthread_t pthread,cthread;
     void producer_handler(int sig) 
  {
     sleep(1);
  }

 void consumer_handler(int sig)
 {
     sleep(1);
 }

int main()
{
  int res;
  void *retval;


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
  pthread_exit(	NULL);
   exit(0);
}


 void * producer(void * arg)
 {
    int in=0;
    char data='A';
  (void) signal(SIGUSR1,producer_handler);
 
   while(1)
    {
     
  
        buff[in]=data;
        in=(in+1) % size;
        data++;
     if(in==0){     
      data='A';
      printf("p:%s\n\t",buff);
        pthread_kill(cthread,SIGUSR2);
        pause();     
      }
   }

  pthread_exit("producer exit");
}

 void * consumer(void * arg)
  {
     int out=0;
     char recv[size];
    (void) signal(SIGUSR2,consumer_handler);
     
    while(1)
     {
       
           recv[out]=buff[out];
        out=(out+1) % size;
       if(out==0){
       printf("c:%s\n",recv);
        pthread_kill(pthread,SIGUSR1);
        pause();
      }
    }

  pthread_exit("consumer exit");
 }
  
