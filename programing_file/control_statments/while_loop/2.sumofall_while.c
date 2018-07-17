//take 10 numbers by user it may be +ve or -ve n add them. ex: 1 2 3 4 5 6 - 2 -3 -4 -1  op:1+2+3+4+5+6-2-3-4-1=11.

#include<stdio.h>
int main()
{
int a,sum=0,i=1;
while(i<=10)
{
scanf("%d",&a);
sum=sum+a;
i++;
}
printf("%d\n",sum);
return 0;
}
