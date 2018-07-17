#include<stdio.h>
int main()
{

int n;
printf("enter number of calls");
scanf("%d",&n);
if(n<=100)
printf("mobile bill is:%d",250 );
else
printf("bill is:%f",(n-100)*1.25+250);
return 0;


}
