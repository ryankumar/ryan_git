//Declare 3 pointer variables of integer type, and an integer variable. Assign the address of integer variable to the 3 pointers. Print the variable value using indirection on each pointer variable. Change the variable value directly and check the values of each of the pointers using indirection. Change the variable value , using each pointer and print the variable value and indirected values of all pointers every time you change.


#include<stdio.h>
  int main()
   {
     int x=10,y; 
     int * ptr1, * ptr3,*ptr2;
	ptr1=&x;
	ptr2=&x;
	ptr3=&x;

     printf("value of x=%d\t  &x=%p\n *ptr1=%d\t ptr1=%p\n *ptr2=%d\t ptr2=%p\n *ptr3=%d\t ptr3=%p\n",x,&x,*ptr1,ptr1,*ptr2,ptr2,*ptr3,ptr3); 
       y=*ptr1;
	printf("y=%d\n",y);
     *ptr2=20;
	printf("x=%d\t y=%d\t *ptr1=%d\t *ptr3=%d\n",x,y,*ptr1,*ptr3);
     y=*ptr3;
	printf("y=%d\t x=%d\n",y,x);
	
     
   
     }
