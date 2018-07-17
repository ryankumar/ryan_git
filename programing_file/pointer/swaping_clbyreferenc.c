#include<stdio.h>
 int main()
  {
    void swap(int *,int *);
     int a=10,b=20;
      swap(&a,&b);
   printf("after swap: a=%d,b=%d\n",a,b);
  }
 void swap(int *pa,int *pb)
  {
    int t;
   t=*pa;
    *pa=*pb;
    *pb=t;
 printf("inside fun:a=%d,b=%d\n",*pa,*pb);
  }
