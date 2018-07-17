#include<stdio.h>
int main()
{

int i,fact=1,n;

printf("enter the numbers");
scanf("\n%d",&n);
i=n;
while(i>=1)
//i=1;
//while(i<=n)
{
fact=fact*i;
i--;

}
printf("factorial of number is:%d\n",fact);
return 0;

}
