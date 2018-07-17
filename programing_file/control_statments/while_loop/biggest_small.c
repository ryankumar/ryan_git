#include<stdio.h>
int main()
{

int i=1,n,big,small,a;
printf("enter the numbers");
scanf("%d %d",&n,&a);
big=a;
small=a;
while(i<=n-1)  //as 1st value is declared before while,hence remaining count must be n-1.
{
scanf("%d",&a);
if(a>big)
big=a;
if(a<small)
small=a;
i++;

}
printf("biggest numberis:%d\n smallset number is:%d\n",big,small);
return 0;

}
