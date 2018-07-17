#include<stdio.h>
int main()
{
int n,c,rev,rem,z;
printf("enter the number:");
scanf("\n%d",&n);
z=n;
if(n==0)
printf("number pf digits:%d\n",c=1);
else
 {
for(c=0,rev=0;n!=0;c++)
 {
 rem=n%10;
 n=n/10;
 rev=rev*10+rem;
 }
 printf("number of digits:%d\n",c);
 printf("reverse number is:%d\n",rev);
 if(z==rev)
 printf("palindrom:%d\n",rev);
 else
printf("not palindrom");

}
}
