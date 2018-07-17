#include<stdio.h>
  int main()
   {
     int x=10,y,z; 
     int * ptr=&x, * ptrz,*ptr1;
     printf("value of x=%d\t addres of &x=%p\t size of x=%lu\n",x,&x,sizeof(x));
     printf("value of *ptr=%d\t addres of ptr=%p\t size of *ptr=%lu\n",*ptr,ptr,sizeof(*ptr));
     
	   y=10;
          ptr=&y;
       printf("y:\nvalue of  *ptr=%d\t addres of ptr=%p\t size of *ptr=%lu\n",*ptr,ptr,sizeof(*ptr));
         
	z=10;
	ptrz=&z;
	ptr1=&z;
        ptr=&z;
	 printf("z:\nvalue of *ptrz=%d\t addres of ptrz=%p\t size of *ptrz=%lu\n",*ptrz,ptrz,sizeof(*ptrz));
	  printf("z:\nvalue of *ptr1=%d\t addres of ptr1=%p\t size of *ptr1=%lu\n",*ptr1,ptr1,sizeof(*ptr1));
         printf("z:\nvalue of *ptr=%d\t addres of ptr=%p\t size of *ptr=%lu\n",*ptr,ptr,sizeof(*ptr));
   
     }
