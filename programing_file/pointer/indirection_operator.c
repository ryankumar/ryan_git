//Declare 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer in succession and print the value of the variable using indirection operator on the pointer.

#include<stdio.h>
 int main()
  {
   int a=10,b=20,c=30;
      int *ptr;
   ptr=&a;
   printf("a=*ptr=%d\n",*ptr);
   ptr=&b;
   printf("b=*ptr=%d\n",*ptr);
    ptr=&c;
    printf("c=*ptr=%d\n",*ptr);
  }

