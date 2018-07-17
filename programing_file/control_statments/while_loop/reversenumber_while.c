#include<stdio.h>
#include<math.h>
int main()
{
int n,rev=0,rem,mul,c=0,a,y,x;
printf("enter the number");
scanf("%d",&n);
x=n;
while(n!=0)
{
rem=n%10;
c++;
n=n/10;
}
while(c!=0 && x!=0)
{
y=x%10;
a=pow(10,c-1);
mul=y*a;
rev=rev+mul;
c--;
x=x/10;

}

printf("%d\n",rev);
return 0;
}
