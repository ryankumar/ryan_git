//take the numbers by user & sum of all positive number if -ve number is entered stop the addition.ex: 1,2,3,4,5,-2  o/p:1+2+3+4+5=15.

#include<stdio.h>
int main()
{
int a=0,sum=0;
while(a>=0)
{
sum=sum+a;
scanf("%d",&a);

}
printf("%d\n",sum);
return 0;
}
