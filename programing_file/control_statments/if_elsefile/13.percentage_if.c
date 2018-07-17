#include<stdio.h>
int main()
{

int a,b,c,d,e,f,sum;
float per;
printf("enter the 6 subjects mark");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
sum=a+b+c+d+e+f;
per=(float)sum/600*100;
printf("%f\n",per);
if(per>=75 && per<=100)
printf("honour");
else 
if(per>=70 && per<75)
printf("first class");
else
if(per>=55 && per<70)
printf("2nd class");
else
if(per>=40 && per<55)
printf("3rd class");
else 
printf("fail");
return 0;


}
