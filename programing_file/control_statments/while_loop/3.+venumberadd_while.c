// Take 10 numbers by user and add only +ve numbers if -ve number is enterd then ignore that.ex: 1 2 3 4 -3 -2 -6 -7 5 -1  o/p:1+2+3+4+5=15

#include<stdio.h>
int main()
{
int a,sum=0,i=1;
while(i<=10)
{
scanf("%d",&a);
if(a>0)
sum=sum+a;
i++;
}
printf("sum is:%d\n",sum);
return 0;
}
