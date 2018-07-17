#include<stdio.h>
#include"print_bin.c"
void toggle_bit(int,int,int);
int main()
 {
   int x,st,en;
  printf("enter the number\n");
  scanf("%d",&x);
  print_bin(x);
  printf("enter the start n end position\n");
   scanf("%d%d",&st,&en);
  toggle_bit(x,st,en);
  }
 void toggle_bit(int x,int st,int en)
  {
    int mask;
    mask= ~(~0<<(en-st+1))<<st;
   printf("after toggle:%d\n", x^mask);
   print_bin(x^mask);
   }
