#include<stdio.h>
float floatpower(float,int);
int main()
{
   float x;
   int y;
  printf("enter the float base number and int power number:");
  scanf("%f%d",&x,&y);
  if(y==0)
     printf("number is:%d",1);
  else
   printf("power of float number:%f",floatpower(x,y));
 return 0;
}
  float floatpower(float x,int y)
   {
       int i;
	float sum=0;
 	for(i=1;i<=y;i++)
	  {
	     sum=sum+x;
	  }
     return sum;
  }
