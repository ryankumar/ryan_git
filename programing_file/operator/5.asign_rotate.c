#include<stdio.h>
int main()
{

int x,y,z,c;
printf("enter the 3 values:");
scanf("%d%d%d",&x,&y,&z);

c=x;
x=y;
y=z;
z=c;
 
printf("values are :%d\n%d\n%d\n",x,y,z);
return 0;


}
