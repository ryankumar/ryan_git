#include<stdio.h>
int fun1()
 {
   return printf("%d",fun2());
 }
int fun2()
 {
   return 100;
 }
int main()
 {
   printf("%d",fun1());
 }
