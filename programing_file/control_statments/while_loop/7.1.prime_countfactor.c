#include<stdio.h>
int main()
{
int n,c=0,i=2;
printf("enter the number:");
scanf("%d",&n);
while(i<n)
 {
  if(n%i==0)
   c++;
  i++;
 }
 if(c==0)
   printf(" prime\n");
else
  printf("not prime\n");
 printf("%d\n",c);
}
