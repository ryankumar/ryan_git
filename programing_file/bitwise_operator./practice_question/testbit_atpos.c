#include<stdio.h>
#include"print_bin.c"
int test_bit(short int,short int);
 int main()
 {
   short int x,p,i;
 printf("enter the number and position\n");
 scanf("%hd%hd",&x,&p);

 i=test_bit(x,p);
 if(i==1)
   printf("at %hd position bit is on\n",p);
  else if(i==0)
   printf("at %hd position bit is off\n",p);
 else
   printf("entered position is out of range\n");
 }

 int test_bit(short int x,short int p)
  {
    if(p >(sizeof(x)*8))
    return -1;
  else
    {
       if(x & (0x01<<(p-1)))
        return 1;
	return 0;
    }
  }

