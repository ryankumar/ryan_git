#include<stdio.h>
#define ISEVEN(X) (X) & (0x01)
int main()
 {
   int x;
   printf("enter the number\n");
   scanf("%d",&x);
   if(ISEVEN(x))
     printf("odd\n");
   else printf("even\n");
 }

