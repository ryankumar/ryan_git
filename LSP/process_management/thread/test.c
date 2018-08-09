
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<signal.h>
void  producer(void);
void  consumer(void);
#define size 5
pid_t child,parent;

void producer_handler(int sig)
{
  /*   int in=0;
    char data='A';
  int shmid;
   char arr[2]={'0'};
   char *msg=arr;
   while(1)
    {

     if((shmid=shmget(10,1024,0666|IPC_CREAT))==-1){
       perror("initialization failed");
        exit(1);
       }
      
    msg=shmat(shmid,0,0);
        *msg=data;
        in=(in+1) % size;
        data++;
        msg++;
     
     if(in==0){
      data='A';
      printf("p:%s\n\t",msg);
      shmdt(msg);
     kill(child,SIGUSR1);
    
     
     }
  }
*/
  sleep(1);
}

void consumer_handler(int sig)
{
 /*  int out=0;
     char arr[2]={'0'};
     char *msg=arr;
     char recv[size];
    int shmid;
    while(1)
     {
       if((shmid=shmget(10,1024,0))==-1){
       perror("initialization failed");
        exit(1);
       }

      msg=shmat(shmid,0,0);
       recv[out]=*msg;

        out=(out+1) % size;
         msg++;
       if(out==0){
       printf("c:%s\n",recv);
       shmdt(msg);

     kill(getppid(),SIGUSR2);
     }
 }
   
*/
 sleep(1);
}
int main()
{
  int res;
  pid_t pid;
   pid=fork();
   if(pid<0)
    {
      perror("error");
       exit(1);
    }
  if(pid==0)
    {
     
      child=getpid();
     // pause();
      consumer();
       (void) signal(SIGUSR2,consumer_handler);
        
         
       // kill(child,SIGUSR1);
    }
 else
   {
     producer();
     (void) signal(SIGUSR1,producer_handler);
   }
 return 0;
}

 void producer(void)
 {
    int in=0;
    char data='A';
  int shmid;
   char arr[2]={'0'};
   char *msg=arr;
   if((shmid=shmget(10,1024,0666|IPC_CREAT))==-1){
       perror("initialization failed");
        exit(1);
       }
    msg=shmat(shmid,0,0);

 // (void) signal(SIGUSR1,producer_handler);
   
   while(1)
    {
       *msg=data;
        in=(in+1) % size;
        data++;
        msg++;
     
     if(in==0){     
      data='A';
      printf("p:%s\n\t",msg);
     
     kill(child,SIGUSR2);
     pause();
      }
   
    }
  shmdt(msg);
}

 void  consumer(void)
  {
     int out=0;
     char arr[2]={'0'};
     char *msg=arr;
     char recv[size];
    int shmid;
       if((shmid=shmget(10,1024,0))==-1){
       perror("initialization failed");
        exit(1);
       }
       msg=shmat(shmid,0,0);

  // (void) signal(SIGUSR2,consumer_handler);
        while(1){
       recv[out]=*msg;
       
        out=(out+1) % size;
         msg++;
       if(out==0){
       printf("c:%s\n",recv);
        kill(parent,SIGUSR1);
      
        }
    }  
 }
  
