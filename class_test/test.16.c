#include<stdio.h>
int fun()
 {
  printf("fun called");
  return 1;
 }
int main()
 {
  int c=fun();
  if(c) printf("once");
  if(c) printf("twice");
  if(c) printf("thrice");
 }


