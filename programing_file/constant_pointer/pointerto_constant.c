#include<stdio.h>
int main()
 {
   int x=10,y;
  const int *ptr; // or int const *ptr;
  ptr=&x;
// *ptr=20; //invalid bcz *ptr=constant and we can't modify the value of x by *ptr;
 
 x=20; //we can modify the valu of x by aasigning value to it bcz x is not constant;
 printf("x=%d\n",x);
 
 //ptr=&y; //but we can do this;
// *ptr=30; // after assigning the address of another variable also we can't modify;
 
/* we can modify the value by using double pointer */
 int * *pptr=&ptr;
   **pptr=30;
    printf("after double pointer x=%d\n",x);
 }
