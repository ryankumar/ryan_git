#include<stdio.h>
int main()
{

int n,c=0,i=2;
printf("enter the number:");
scanf("\n%d",&n);
while(i<n)
 {
  if(n%i==0)
  {
    c++;
  break;
   
  }
   i++;
  
 }
  if(i>=n)
 printf("prime\n");
else
printf("not prime\n");
printf("%d\n",c);

}
