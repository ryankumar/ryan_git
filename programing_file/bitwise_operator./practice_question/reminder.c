/* reminder w/o using mod operator x is divide by y which is a power of 2*/
#include<stdio.h>
#include"print_bin.c"
int main()
 {
   int x,y,rem,c=0,mask;
 printf("enter the number x & y\n ");
 scanf("%d%d",&x,&y);
 if((y & (y-1))==0) // check y is power of 2 or not;
  {
       while(x && y)
        {
        }
 else
 printf("y is not power of 2\n");
   return 0;

 }
