#include<stdio.h>
#define SIZE(type) (char)(&type+1)-(char)(&type)
int main()
 {
   int a;
   float f1;
   char c1;
   double d1;
   printf("size of int:%d\n",SIZE(a));
  printf("size of float:%d\n",SIZE(f1));
   printf("size of char:%d\n",SIZE(c1));
   printf("size of double:%d\n",SIZE(d1));
 }
