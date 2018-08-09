// thread invokes fork()

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include<string.h>
char *msg="hiii";
void * fun(void * arg);
 void * fun1(void * arg);
int main()
{
  pthread_t thread,thread1;
  void * t_result, * t_result1;
  pthread_create(&thread1,NULL,fun,(void *)msg);
  pthread_create(&thread,NULL,fun1,(void *)msg); // craetion of thread
  getchar();
  pthread_join(thread,&t_result);  //waiting for thread exit;
   pthread_join(thread1,&t_result1); 
  printf("thread is joined with return value:%s\n",(char *) t_result);

}
 
void * fun(void * arg)
 {
   pid_t pid;
   pid=fork();
  if(pid<0)
  {
   printf("fork is failed");
   exit(1);
  }
 else if(pid==0)
  {
    printf("i m child\n");
  }
 else 
  printf("i m parent\n");
 pthread_exit("thread is exited\n");
 }

 void * fun1(void * arg)
 {
   pid_t pid;
   pid=fork();
  if(pid<0)
  {
   printf("fork is failed");
   exit(1);
  }
 else if(pid==0)
  {
    printf("i m child\n");
  }
 else 
  printf("i m parent\n");
 pthread_exit("thread is exited\n");
 }

