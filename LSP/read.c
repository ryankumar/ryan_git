#include<unistd.h>
#include <stdio.h>
#include <errno.h>
#include<stdlib.h>


int main()
{
  int rt;
	char buff[20];
/*
 rt= read(0,buff,8);
//   printf("rt:%d\n",rt);
   if(rt!=8)
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
	write(1,buff,8);
*/
   if(read(0,buff,8)!=7)
  write(2, "A write error has occurred on file descriptor 1\n",46);
  else
	write(1,buff,8);// if  entered buff content>8,then remaining contents(check by entering character more than 8)

}
