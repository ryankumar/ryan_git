#include<stdio.h>
//#include<stdlib.h>
#define NULL 0
  int main()
   {
     int x=10; 
     int * ptr=NULL;
	printf("ptr=%p\n",ptr);
	 printf("*ptr=%d\n",*ptr);
       *ptr=50;
      printf("x=%d\n",x);
	printf("*ptr=%d\n",*ptr);
        
   }
