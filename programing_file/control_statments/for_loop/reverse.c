#include<stdio.h>
int main()
{
int n,c,rev,rem;
printf("enter the number:");
scanf("\n%d",&n);
for(rev=0;n!=0;)
 {
 rem=n%10;
 n=n/10;
 rev=rev*10+rem;
 }
 printf("reverse number:%d\n",rev);
 
}
