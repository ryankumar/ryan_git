#include<stdio.h>
   int add(int,int);
   int sub(int,int);
   int mul(int,int);
   int div(int,int);
   int mod(int,int);
int main()
 {
   int a,b,res,i;
   
   printf("enter  number for a and b\n");
   scanf("%d%d",&a,&b);
  
   int (*ptr[5])(int,int)={add,sub,mul,div,mod};

  printf("enter index 0:add,1:sub,2:mul,3:div,4:mod\n");
  scanf("%d",&i);

 res=ptr[i](a,b);
 printf("result :%d\n",res);
 }

 int add(int a,int b)
  {
    return a+b;
  }
int sub(int a,int b)
 {
   return a-b;
 }
int mul(int a,int b)
 {
   return a*b;
 }
int div(int a,int b)
 {
   return a/b;
 } 
int mod(int a,int b)
 {
  return a%b;
 }
