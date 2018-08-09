//check in another terminal ps -eaf:there are two a.out will be found on run mode
// o/p:ryan      9399  4393  0 20:39 pts/6    00:00:00 ./a.out  (parent:9399,parent,s parent (bash):4393)
//     ryan      9400  9399  0 20:39 pts/6    00:00:00 ./a.out (child:9400,child's parent:9399)
//     ryan      4393  3087  0 10:44 pts/6    00:00:01 bash    

/*When fork is called, this program divides into two separate processes. The parent process is identified by a
  nonzero return from fork and is used to set a number of messages to print, each separated by one second. */

/* ./a.out:  ryan@ryan-HP-241-G1:~/Desktop/LSP/process_management$ ./a.out 
		the fork function call
		this is parent process
		this is child process
		this is parent process
		this is child process
		this is child process
		this is parent process
		this is child process
		this is parent process
		this is parent process
		this is child process
	   ryan@ryan-HP-241-G1:~/Desktop/LSP/process_management$ this is child process
		this is child process
		this is child process
		this is child process
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
  pid_t pid;
  char *msg;int n;
   printf("the fork function call\n");
  
    pid=fork();
   switch(pid)
    {
	case -1:printf("fork failed,no child process is created");
                exit(0);
        case 0:	msg="this is child process";
         	n=9;
	        break;
        default: msg="this is parent process";
        	 n=5;
                break;
    }
       
  for( ;n>0;n--) {
         sleep(1);
	printf("%s\n",msg);
        ;}
// getchar();
 return 0;
}
