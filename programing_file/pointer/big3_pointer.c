//Write a program to find the biggest of three numbers using pointers that point to those numbers.
 
#include<stdio.h> 
 int main()
 {
   int x,y,z;
  printf("enter the 3 numbers: ");
  scanf("%d%d%d",&x,&y,&z);
  int *p1=&x,*p2=&y,*p3=&z;
     if(*p1>*p2)
       {
          if(*p1>*p3)
 	    printf("x is big:%d\n",*p1);
	 else
	    printf("z is big:%d\n",*p3);
       }
   else if(*p2>*p3)
              printf("y is big:%d\n",*p2);
         else
	    printf("z is big:%d\n",*p3);
   }
     
