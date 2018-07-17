#include<stdio.h>
int main()
 {
  int i,x=0x54038f,mask;
  for(i=31;i>=0;i--)
  {
    mask=1<<i;
     x & mask ? putchar('1'):putchar('0');
  }
 }
