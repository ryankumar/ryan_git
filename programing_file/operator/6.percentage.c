#include<stdio.h>
int main()
{
 int a,b,c,d,e,f,sum;
float per;
printf("enter the 6 subjects marks");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
sum=a+b+c+d+e+f;
per=(sum*100/600);
printf("%f",per);
return 0;


}
