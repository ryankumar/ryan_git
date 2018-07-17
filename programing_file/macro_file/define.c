#include<stdio.h>
//#define OS 1
 int main()
  {
    #if OS ==1
     printf("welcome to windows\n");
    #elif OS==2
	printf("welcome to linux\n");
    #elif OS==3
	printf("welcome to solaries\n");
    #else
	printf("shutdown the os\n");
   #endif
  }
