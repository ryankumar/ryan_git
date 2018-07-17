//count the number of digits in a number.ex:i/p:2345 o/p:4 or i/p:0 o/p:1

#include<stdio.h>
int main()
{

int n,rem,x;
int c=0;
printf("enter the number");
scanf("%d",&n);
x=n;
//if(n==0)
//c=1;
//else
while(n!=0)
{
rem=n%10;
n=n/10;
c++;
}
while(x==0)
{
c++;
break;
}
printf("number of digits:%d\n",c);

return 0;

}
