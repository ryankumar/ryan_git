#include<stdio.h>
#include"print_bin.c"
 int main()
  {
  unsigned  int a=0xaabbccdd;
    printf("%x\n", a>>20 );
    printf("%x\n",a & (0xfffff));
    
  }
