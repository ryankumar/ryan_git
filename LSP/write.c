#include<unistd.h>
#include <stdio.h>
#include <errno.h>
#include<stdlib.h>


int main()
{
  int rt;
  /* rt=write(1,"write command\n",18);
//   printf("rt:%d\n",rt);
   if(rt!=14)
     {
	perror("ERROR:");
	printf("error no.:%d\n",errno);
        exit(0);
     }
	
   else if(rt<0)
	{
	  perror("ERROR:");
	  printf("error no.:%d\n",errno);
	  exit(0);
	}
  else
	write(1,"write success\n",14);
 */
   if(write(1,"write command\n",14)!=14)
    write(2, "A write error has occurred on file descriptor 1\n",46);
}
