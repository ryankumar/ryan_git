#include<stdio.h>
 int main()
   {
    void rect(int,int,int *,int *);
     int a=10;
     int b=5;
      int area,per;
     rect(a,b,&area,&per);
   printf("area=%d\t perimeter=%d\n",area,per);
   }
 void rect(int a,int b,int *pa,int *pp)
   {
      *pa=a*b;
      *pp=2*(a+b);
   }
