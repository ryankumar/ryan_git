//2	Write a program to add two variables using thier pointers.
  
#include<stdio.h>
 int main()
   {
     int x=10,y=20;
     int *ptr1=&x,*ptr2=&y;
     printf("x+y=%d\n",x+y); 
     printf("*ptr1+*ptr2=%d\n",*ptr1+*ptr2);
   }
