#include<stdio.h>
float add(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);
int main()
{
int x,y,z;
char ch;
printf("enter the value and character:");
scanf("%d\n%c\n%d",&x,&ch,&y);
if(ch=='+')
 z= add(x,y);
if(ch=='-')
 z= sub(x,y);
if(ch=='*')
 z= mul(x,y);
if(ch=='/')
 z= div(x,y);
printf("%d\n",z);
}
 float add(float a,float b)
  {
    return a+b;
  }
 float sub(float a,float b)
   {
	return a-b;
   }
 float mul(float a,float b)
  {
	return a*b;
  }
 float div(float a,float b)
   {
	return a/b;
   }

