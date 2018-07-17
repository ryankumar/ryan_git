#include<stdio.h>
int main()
{

int n;
printf("enter no.of calls");
scanf("%d",&n);

n<=100 ? printf("mobile bill cost is 250/- \n"):printf("%.2f",1.25*(n-100)+250);
return 0;


}
