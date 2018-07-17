#include<stdio.h>
 int main()
 {
    int x,mask=0x100000,bit;
  printf("enter the number\n");
  scanf("%d",&x);
  bit=(x & mask);
printf("bit=%d\n",bit);
    if(bit==0)
     printf("20th bit is off\n");//o/p will be zero value.i.e. if x=3,mask=0x04,o/p:0.....x=011 & mask=0000 0100
  else printf("20th bit is on\n");//o/p will be non_zero value.i.e. if x=5,mask=0x04,o/p:4
  
}
      
