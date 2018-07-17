#include<stdio.h>
int main()
{

int a,b;
printf("neter the values");
scanf("%d %d",&a,&b);
switch(a>b)
{
case 1: printf("bigger is:%d",a);
       break;
case 0:printf("bigger is:%d",b);
       break;
}

return 0;
}
