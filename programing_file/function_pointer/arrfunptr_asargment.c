#include<stdio.h>
int add(int,int);
int sub (int,int);
int mul(int,int);
int div(int,int);
int mod(int,int);
int main()
 {
   int fun(int (* *) (int,int),int,int,int);
   int a=4,b=5,i;
    int (*ptr[5])(int,int)={add,sub,mul,div,mod};
     printf("enter the index 0:add,1:sub,2:mul,3:div,4:mod\n");
     scanf("%d",&i);
     printf("%d\n",fun(ptr,i,a,b));
}	
int fun(int (*ptr[])(int,int),int i,int a,int b) // void fun(int (**ptr)(int,int),int a,int b,int i)
  {
   return  ptr[i](a,b);
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
 
  
