// thread invokes fork()

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include<string.h>
#include<signal.h>
char *msg="hiii";
void ouch(int sig)
{
  sleep(1);
}

void * fun(void * arg);
 void * fun1(void * arg);
 void * fun2(void * arg);
int main()
{
  pthread_t thread,thread1,thread2;
  void * t_result, * t_result1;
  pthread_create(&thread,NULL,fun,(void *)msg);
  pthread_create(&thread1,NULL,fun1,(void *)msg); // craetion of thread
  pthread_create(&thread2,NULL,fun2,(void *)msg);
/*
  pthread_join(thread,&t_result);  //waiting for thread exit;
   pthread_join(thread1,&t_result1); 
  printf("thread is joined with return value:%s\n",(char *) t_result);
*/

 while(1)
{
  pthread_kill(thread,SIGUSR1);
    sleep(1) ;
  pthread_kill(thread1,SIGUSR2);
   sleep(1);
 pthread_kill(thread2,SIGINT);
  sleep(1);
}
pthread_exit("EXITSTATUS");
exit(0);
}
 
void * fun(void * arg)
 {
   (void) signal(SIGUSR1,ouch);
   
  while(1){
   printf("one\n");
    pause();
    }
 }

  void * fun1(void * arg)
 {
    (void) signal(SIGUSR2,ouch);
     
  while(1){
   printf("two\n");
   pause();
  }
 }
void * fun2(void * arg)
 {
 (void) signal(SIGINT,ouch);
   
  while(1){
   printf("three\n");
   pause();
  }
 }


