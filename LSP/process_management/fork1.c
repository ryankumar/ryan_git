//check in another terminal ps -eaf:there are two a.out will be found on run mode
// o/p:ryan      9399  4393  0 20:39 pts/6    00:00:00 ./a.out  (parent:9399,parent,s parent (bash):4393)
//     ryan      9400  9399  0 20:39 pts/6    00:00:00 ./a.out (child:9400,child's parent:9399)
//     ryan      4393  3087  0 10:44 pts/6    00:00:01 bash    


#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
  pid_t pid;
  char *msg;int n;
   printf("the fork function call\n");
  
    pid=fork();
   if(pid==-1)
    {
	msg="fork failed,no child process is created";
        n=1;
//	 exit(0);
    }
   if(pid==0)
    {
     sleep(1);
      printf("children pid:%d\n",getpid());
      printf("children's parent pid:%d\n",getppid());
	msg="this is child process";
	n=5;
//	exit(0);
    }
   else
    {
     sleep(1);
       printf("parent pid:%d\n",getpid());
       printf("parent's parent pid:%d\n",getppid());

	msg="this is parent process";
	n=3;
//	exit(0);
    }
       
  for( ;n>0;n--) {
	printf("%s\n",msg);
        sleep(1);}
 getchar();
 return 0;
}
