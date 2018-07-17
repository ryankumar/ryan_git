#include<stdio.h>
#include "displaybits.c"
 int main()
 {  
   unsigned int x,y,z;
   print_bin(0xffff);
  x=y=z=0xffff;
 x=(x>>5)<<5;
   print_bin(x);
 y=(y>>3)<<3;
   print_bin(y);
 z=(z>>2)<<2;
   print_bin(z);
 }
