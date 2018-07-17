#include<stdio.h>
int main()
{
int x;
printf("Enter the Number:");
scanf("%d",&x);
printf("%d",(x+(x<<1)+(x<<2))>>1);
}
