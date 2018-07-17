#include<stdio.h>
int fun()
 {
   printf("fun called");
   return 1;
 }
int main()
 {
   if(fun()) printf("once");
   if(fun()) printf("twice");
   if(fun()) printf("thrice");
 }

