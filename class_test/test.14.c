#include<stdio.h>
void fun(int a,int b)
 {
  if(a>b)
   return a;
  if(a>10)
   return 1;
 if(b>10)
    return -1;
 }
int main()
 {
  int a=20 ,b=21;
 if(fun(a,b)==a)
   printf("a is bigger");
 if(fun(a,b)==1)
   printf("a>10");
 if(fun(a,b)==-1)
   printf("b>10");
 }

