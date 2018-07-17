#include<stdio.h>
#define SUB_NUMBER(X,Y)	 X+(~Y)+1
int main()
 {
  int a,b;
 printf("entre the nymber\n");
 scanf("%d%d",&a,&b);
 printf("sub_number:%d\n",SUB_NUMBER(a,b));
 }
