/*13. Write a functionsetbits(x,p,n,y)that returns x with then bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.

e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then you need to strip off 3 bits of y (111) and put them in x at position
10xxx010 to get answer 10111010. Your answer should print out the result in binary form although input can be in decimal form.
Your output should be like this:
x = 10101010 (binary)
y = 10100111 (binary)
setbits n = 3, p = 6 gives x = 10111010 (binary).
*/
#include<stdio.h>
#include"print_bin.c"
void setbit(int *,int,int,int);
int main()
 {
   int x,y,n,p;
 printf("enter the number x,y\n");
 scanf("%d%d",&x,&y);
 printf("how many number want to strip\n");
scanf("%d",&n);
 printf("in which position of x want to change\n");
 scanf("%d",&p);
 printf("binary of x:\n y:\n");
  print_bin(x);
printf("\n");
  print_bin(y);
printf("\n");
 setbit(&x,y,n,p);
 printf("after bit set x");
 print_bin(x);
 }
void setbit(int *x,int y,int n,int p)
 {
   while(n)
   {
      if(y & 0x01)
	*x=(*x | (0x01<<p-1));
    else
 	*x=(*x & ~(0x01<<p-1));
      y=y>>1;
	p--;
	n--;
   }
 }

