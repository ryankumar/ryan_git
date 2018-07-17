#include<stdio.h>
int main()
{

int a,b,d;
char c;
printf("enter the values");
scanf("%d\n%c\n%d",&a,&c,&b);
switch(c)
{
case '+':d=a+b;
        break;
case '-':d=a-b;
    break;
case '*':d=a*b;
    break;
case '/':d=a/b;
    break;
default:printf("enter the valid key");
}
printf("%d\n",d);
return 0;



}
