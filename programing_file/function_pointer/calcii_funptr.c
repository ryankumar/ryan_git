#include<stdio.h>
#define null 0
   int add(int,int);
   int sub(int,int);
   int mul(int,int);
   int div(int,int);
   int mod(int,int);
int main()
 {
   int a,b,res;
   char c;
   printf("enter character 1st and  number for a and b\n");
   scanf("%c%d%d",&c,&a,&b);
   int (*ptr)(int,int);
  switch(c)
   {
     case '+':ptr=add;break;
     case '-':ptr=sub;break;
     case '*':ptr=mul;break;
     case '/':ptr=div;break;
     case '%':ptr=mod;break;
     default:printf("enter arithmatic operator\n");
	     ptr=null;
   }
     if(ptr!=null)
       {
           res=ptr(a,b);
            printf("result :%d\n",res);
       }
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
