//Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x. Do this using pointers that point to x,y and z.


#include<stdio.h>
  int main()
   {
     int x=10,y=20,z=30,temp;
  int *p1=&x,*p2=&y,*p3=&z;
   printf("before rotate x=%d,y=%d,z=%d\n",*p1,*p2,*p3);
   temp=*p1;
   *p1=*p2;
   *p2=*p3;
   *p3=temp;
  printf("after rotate x=%d,y=%d,z=%d\n",*p1,*p2,*p3);
  }
