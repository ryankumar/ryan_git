#include<stdio.h>
int main()
 {
   int x=10,y;
   int * const ptr=&x;
   *ptr=30; //valid;
   printf("x=%d\n",x);

 //  ptr=&y; // invalid.  bcz ptr=const. hence "ptr" can't hold another address
  
 /* by using double pointer we can change the address */
   int *  * dptr=&ptr;
    
     *dptr=&y;
    printf("address of y=%p\n ptr=%p\n",&y,ptr);
     
     **dptr=40;
    printf("x=%d\n,y=%d\n",x,y);
 }
