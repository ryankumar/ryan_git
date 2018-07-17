#include<stdio.h>
int main()
{
int n,big,small,i,a;
printf("enter the no. of numbers & 1st number:");
scanf("\n%d%d",&n,&a);
big=a;
small=a;
for(i=2;i<=n;i++)
  {
	scanf("%d",&a);
	if(a>big)
	big=a;
       if(a<small)
	small=a;
  }
 printf("big:%d\n small:%d\n",big,small);
 
}
