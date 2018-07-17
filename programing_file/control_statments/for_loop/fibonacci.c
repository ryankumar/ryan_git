#include<stdio.h>
int main()
{
int n,x,y,z;
printf("enter the fibonacci numbe:\n");
scanf("%d",&n);
y=1;
printf("%d ",y);
for(x=0;n>1;n--)
 {
 z=x+y;
  x=y;
  y=z;

printf("%d ",z);
}
printf("\n");
 
}

