#include<stdio.h>
#include"print_bin.c"
int bit_replace(int,int,int,int);
int main()
 {
   int x,y,st,en,res;
 printf("enter the value for x and y\n");
 scanf("%d%d",&x,&y);
 print_bin(x);
 printf("\n");
print_bin(y);
 printf("\n");
printf("enter the start and end position\n");
scanf("%d%d",&st,&en);
 res=bit_replace(x,y,st,en);
 printf("res=%d\n",res);
 print_bin(res);
 }
 
 int bit_replace(int x,int y,int st,int en)
  {
     int mask;
     mask= ((~(~0<<(en-st+1)))<<(st-1));// st=3,en=6;mask= ~0<<4; mask=~mask<<2;
    return ( x & ~mask) | ( y & mask);
  }
   
   

