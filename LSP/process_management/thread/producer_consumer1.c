/* producerconsumer1.c (producer consumer problem using Pthreads only)
----------------------------
This is basic producer consumer example implement with pthreads with out synchronizaion mechanisums.
Here the total process depends on global variable count.hence if due to external environment count value change then producer & consumer operation also change.
Draback: Data inconsistency, Data Loss, Dead Lock.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<sys/types.h>
void * producer(void * arg);
void * consumer(void * arg);
#define size 5
char buff[size];
int count=0;
int main()
{
  int res;
  pthread_t pthread,cthread;
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
  
   exit(0);
}


 void * producer(void * arg)
 {
    int in=0;
    char data='A';
   while(1)
    {
      while(count==size); // when buffer is full producer will be block and consumer will start run
        buff[in]=data;
        in=(in+1) % size;
        data++;
     if(in==0){     
      data='A';
      printf("p:%s\n\t",buff);
      }
   count++;
    }
  pthread_exit("producer exit");
}

 void * consumer(void * arg)
  {
     int out=0;
     char recv[size];
    while(1)
     {
        while(count==0); // when buffer is empty consumer will be blocked and producer will start run
        recv[out]=buff[out];
        out=(out+1) % size;
       if(out==0)
       printf("c:%s\n",recv);
     count--;
    }
  pthread_exit("consumer exit");
 }
   
