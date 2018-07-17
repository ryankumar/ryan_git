/* EXOR OF TWO NUMBER W/O USING ^ OPERATOR'*/
#include<stdio.h>
#define EXOR_NUMBER(X,Y) (~X & Y)|(X & (~Y))
int main()
 {
 int a,b;
  printf("enter the number\n");
 scanf("%d%d",&a,&b);
  printf("exor_number:%d\n",EXOR_NUMBER(a,b));
 }

