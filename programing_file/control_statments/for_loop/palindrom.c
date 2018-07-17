#include<stdio.h>
int main()
{
int n,c,rev,rem,z;
printf("enter the number:");
scanf("\n%d",&n);
for(rev=0,z=n;n!=0;)
 {
 rem=n%10;
 n=n/10;
 rev=rev*10+rem;
 }
if(z==rev)
 printf("palindrom:%d\n",rev);
else
 printf("not palindrom\n");
 
}
