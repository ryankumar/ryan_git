#include<stdio.h>
int main()
{

int a;
printf("enter the year");
scanf("%d",&a);
  
( ( a%4==0) && (a%100!=0)) ? printf("this is leap year"):(a%400==0) ? printf("this is leap year"):printf("this is not a leap year");
return 0;

}
