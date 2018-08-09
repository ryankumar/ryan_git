// own version of kill implentation

#include<stdio.h>
#include<signal.h>
#include<sys/types.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
 {
   
   pid_t pid;
   pid=atoi(argv[1]);
    kill(pid,9); // bydefault signal number is 9(SIGINT-CTRL+C)
}
