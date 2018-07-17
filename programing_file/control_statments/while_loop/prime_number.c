#include<stdio.h>
int main()
{

int n,i=2,a=1;
printf("enter the numbers");
scanf("%d",&n);
while(i<=n/2)
{
if(n%i==0)  
a=0;

i++;

}

if(a==0)
printf(" not prime number  :%d\n",n);
else
printf(" prime number:%d\n",n);
return 0;

}


