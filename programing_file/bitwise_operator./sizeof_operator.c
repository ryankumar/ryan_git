#include<stdio.h>
//int fun(int );
int fun(char);
int main()
 {
   int x;
 char c;
// printf("size of int datatype is:%d\n",fun(x));
 printf("size of char datatype is:%d\n",fun(c));
 }
int fun(char a)
 {
 int c=0;
 a=0;  
 a=(a | 0x01);
  while(a)
   {
      a=a<<1;
      c++;
    }
 return (c/8);
 }
