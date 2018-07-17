#include<stdio.h>
//#include<stdlib.h>
  int main()
   {
     int x,*ptr=&x;
     //int * ptr;
//	x=20;
//	ptr=&x;
//	printf("ptr=%p\n",ptr);
	 printf("*ptr=%d\n",*ptr);
 int z;
	ptr=&z;
	*ptr=10;

      printf("x=%d z=%d\n",x,z);
//	printf("*ptr=%d\n",*ptr);
        
   }
