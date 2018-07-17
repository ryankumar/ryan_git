#include<stdio.h>
int main()
{
int u;
printf("enter the unit");
scanf("%d",&u);
if(u<=200)
printf("bill is:%f\n",u*0.50);
else
if(u>200 && u<=400)
printf("bill is :%f\n",100+0.65*(u-200));
else
if(u>400 && u<=600)
printf("bill is:%f\n",230+0.80*(u-400));
else
printf("bill is:%f\n",390+1.00*(u-600));
return 0;


}
