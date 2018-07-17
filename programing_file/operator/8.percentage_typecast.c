#include<stdio.h>
int main()
{
 int a,b,c,d,e,f,sum;
float per;
printf("enter 6 subject mark:");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
sum=a+b+c+d+e+f;
per=(float)sum/600*100;



printf("%f",per);
return 0;



}
