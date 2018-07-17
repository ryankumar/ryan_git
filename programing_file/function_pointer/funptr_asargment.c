#include<stdio.h>
int add(int,int);
int sub (int,int);
int mul(int,int);
int div(int,int);
int main()
 {
   int fun(int (*) (int,int),int,int);
   int a=4,b=5;
    char ch;
    int (*ptr)(int,int);
     printf("enter the character\n");
     scanf("%c",&ch);
  
   switch(ch)
     {
	case '+': printf("%d\n",fun(add,a,b));break;
	case '-':printf("%d\n",fun(sub,a,b));break;
	case '*':printf("%d\n",fun(mul,a,b));break;
	case '/':printf("%d\n",fun(div,a,b));break;
     }
 }

int fun(int (*ptr)(int,int),int a,int b)
  {
   return ptr(a,b);
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
 
  
