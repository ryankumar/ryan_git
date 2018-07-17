/* additon of two number w/o using + operetor;
 a+b=a-(~b)-1*/

#include<stdio.h>
#define ADD_NUMBER(X,Y)	   X-(~Y)-1
int main()
 {
 int a,b;
 printf("enter the number\n");
 scanf("%d%d",&a,&b);
   printf("add_number:%d\n",ADD_NUMBER(a,b));
 }
 
