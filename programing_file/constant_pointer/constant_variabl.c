#include<stdio.h>
int main()
 {
   const int x=5;
//    x=6;  // invalid. i.e; assignment of read_only variabl x;
 scanf("%d",&x);
 printf("x=%d\n",x);
 /* we can assign value by taking a pointer*/
  int *ptr;
 ptr= &x;
 *ptr=6;
 printf("&x=%p\n ptr=%p\n",&x,ptr);
 printf("after assining address to pointer x=%d\n",*ptr);
 }
