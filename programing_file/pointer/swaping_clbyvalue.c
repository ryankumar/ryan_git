#include<stdio.h>
 int main()
  {
    void swap(int,int);
     int a=10,b=20;
      swap(a,b);
   printf("after swap: a=%d,b=%d\n",a,b);
  }
 void swap(int a,int b)
  {
    int t;
   t=a;
    a=b;
    b=t;
 printf("inside fun:a=%d,b=%d\n",a,b);
  }
