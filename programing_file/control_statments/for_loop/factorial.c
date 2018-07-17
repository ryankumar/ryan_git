#include<stdio.h>
int main()
{
int n,fact;
printf("enter the number:");
scanf("\n%d",&n);
for(fact=1;n>0;n--)
 {
 fact=fact*n;
 }
 printf("fact:%d\n",fact);
}
