/* wap who take two argument x and i,x is the multiple of 2 to the power of i;*/
#include<stdio.h>
int ismultiple(int,int);
int main()
 {
   int x,i,res;
 printf("enter the number for x and power i\n");
 scanf("%d%d",&x,&i);
 res=ismultiple(x,i);
 if(res==1)
   printf("x is multiple of 2 to the power of i\n");
 else
   printf("not multiple\n");
 }
int ismultiple(int x,int i)
 {
   int y;
  y=(1<<i);
 if(x%y==0)
 return 1;
 return 0;
 }
