

#include <stdio.h>

#include <stdlib.h>

#include<sys/ipc.h>

#include<sys/shm.h>

#include<stdio.h>
main()

{
	int shmid;
	FILE* fp;
	char *msg;
	if((shmid=shmget(10,1024,0))==-1) {
		perror("shmget");
		exit(1);
	}
	msg=shmat(shmid,0,0);
	printf("file recv %s\n",msg);
	fp=fopen(msg,"r");
	if(fp==NULL)
	{
		printf("file is not working\n");
		exit(0);
	}
	printf("Data written in the shared memory is:%s\n",msg);
	getchar();
	shmdt(msg);
}

	
	
