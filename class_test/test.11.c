#include<stdio.h>
int fun(int x)
 {
   switch(x)
   {
     case 0:return 0;
     case 1:return 1;
     case 2:return 2;
     case 4:return 4;
     default:return 5;
   }
 }
int main()
 {
   printf("%d%d%d",fun(0),fun(3),fun(4));
 }


