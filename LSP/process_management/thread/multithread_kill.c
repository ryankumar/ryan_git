// thread invokes fork()

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include<string.h>
#include<signal.h>
void * fun(void * arg);
void * fun1(void * arg);
void * fun2(void * arg);

int count=0;
char msg[20];

void ouch(int sig)
{
	usleep(10);

}

void sigint()
{
	count=1;
}

int main()
{
	pthread_t thread,thread1,thread2;
	void * t_result, * t_result1;
	int res;
	signal(SIGINT,sigint);
	pthread_create(&thread,NULL,fun,(void *)msg);
	pthread_create(&thread1,NULL,fun1,(void *)msg); // craetion of thread
	pthread_create(&thread2,NULL,fun2,(void *)msg);

	while(1)
	{
		pthread_kill(thread,SIGUSR1);
		usleep(10000) ;
		pthread_kill(thread1,SIGUSR2);
		usleep(10000);
		pthread_kill(thread2,SIGQUIT);
		usleep(10000);
		if(count==4)
			break;

	}
	pthread_join(thread,&t_result);  //waiting for thread exit;
	pthread_join(thread1,&t_result); 
	pthread_join(thread1,&t_result); 

	printf("main thread terminate\n");
	pthread_exit("EXITSTATUS");
	return 0;
}

void * fun(void * arg)
{
	int res;
	(void) signal(SIGUSR1,ouch);

	while(1){
		printf("one  ");
		if(count==1)
		{
			count=2;
			break;
		}
		pause();
	}
	printf("thread 1 terminate\n");
	res=pthread_detach(thread);
	if(res!=0)
	{
		printf("thread detach failed\n");
	}

	pthread_exit(NULL);
}

void * fun1(void * arg)
{
	int res;
	(void) signal(SIGUSR2,ouch);

	while(1){
		printf("two  ");
		if(count==2)
		{
			count=3;
			break;
		}
		pause();
	}
	printf("thread 2 terminate\n");
	res=pthread_detach(thread1);
	if(res!=0)
	{
		printf("thread1 detach failed\n");
	}

	pthread_exit(NULL);
}

void * fun2(void * arg)
{
	int res;
	(void) signal(SIGQUIT,ouch);

	while(1){
		printf("three\n");
		if(count==3)
		{
			count=4;
			break;
		}
		pause();
	}
	printf("thread 3 terminate\n");
	res=pthread_detach(thread2);
	if(res!=0)
	{
		printf("thread2 detach failed\n");
	}

	pthread_exit(NULL);
}


