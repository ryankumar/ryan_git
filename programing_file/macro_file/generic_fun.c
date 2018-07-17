#include<stdio.h>
#define SWAP(dtype,funname) void funname(dtype *x,dtype *y) \
				{\
				  dtype t=*x;*x=*y;*y=t;\
				}
SWAP(int,swapint)
SWAP(float,swapfloat)
SWAP(char,swapchar)
 int main()
  {
	int a=20,b=30;
	float f1=30.56,f2=23.65;
	char c1='A',c2='b';
 	swapint(&a,&b);
	swapfloat(&f1,&f2);
	swapchar(&c1,&c2);
	printf("after swapping of two intger %d %d\n",a,b);
	printf("after swapping of two float %f %f\n",f1,f2);
	printf("after swapping of two char %c %c\n",c1,c2);
  }
     
				
