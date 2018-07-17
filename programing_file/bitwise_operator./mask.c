#include<stdio.h>
int main()
 {
   int x,mask=0x04;
 printf("enter the value\n");
 scanf("%d",&x);
 x=(x & mask);
 printf("%d\n",x);
 }
 
