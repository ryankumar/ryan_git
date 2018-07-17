#include<stdio.h>
int main()
{
int a,b,i=1,mul=0;
printf("enter the number for multiplication");
scanf("%d%d",&a,&b);
while(i<=b)
{
mul=mul+a;
i++;
}

printf("%d\n",mul);
return 0;
}
