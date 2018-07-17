#include<stdio.h>
#include<math.h>
int main()
{
int b,dec=0,c=0,mul,rem;
printf("enter the binary number:");
scanf("\n%d",&b);
while(b>0)
{
rem=b%10;
b=b/10;
mul=rem*pow(2,c);
dec=dec+mul;
c++;
}
printf("%d\n",dec);
}
