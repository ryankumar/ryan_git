#include<stdio.h>
#include<math.h>
int main()
{
int n,rev=0,rem,z;
printf("enter the number:");
scanf("%d",&n);
z=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(z==rev)
printf("number is palindrom:%d\n",rev);
else
printf("number is not a palindrom");
return 0;
}
