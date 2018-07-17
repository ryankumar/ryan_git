#include<stdio.h>
int main()
 {
 int x=10;
   const int * const ptr;
// ptr=&x; //invalid
// *ptr=30;//invalid
 printf("x=%d\n",x);
  int * *dptr=&ptr;
  *dptr=&x;
  printf("address of x=%p\n ptr=%p\n",&x,ptr);
 
 **dptr=30;
 printf("x=%d\n",x);
  
}
