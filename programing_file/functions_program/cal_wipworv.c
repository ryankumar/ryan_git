#include<stdio.h>
void add(float,float);
void sub(float,float);
void mul(float,float);
void div(float,float);
int main()
{
int x,y;
char ch;
printf("enter the value and character:");
scanf("%d\n%c\n%d",&x,&ch,&y);
if(ch=='+')
 add(x,y);
if(ch=='-')
 sub(x,y);
if(ch=='*')
 mul(x,y);
if(ch=='/')
 div(x,y);
}
 void add(float a,float b)
  {
    printf("%f\n",a+b);
  }
 void sub(float a,float b)
   {
     printf("%f\n",a-b);
   }
 void mul(float a,float b)
  {
     printf("%f\n",a*b);
  }
 void div(float a,float b)
   {
     printf("%f\n",a/b);
   }

