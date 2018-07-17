#include<stdio.h>
int main()
 {
   int x,y,z;
 printf("enter two number\n");
 scanf("%d%d",&x,&y);
 z=x^y;
 x=z^x;
 y=z^y;
 printf("x=%d y=%d\n",x,y);
 }
