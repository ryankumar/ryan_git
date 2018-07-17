#include<stdio.h>
float math(void);
int main()
{

float res;
 res=math();
 printf("%f\n",res);
 return 0;
}

 float math(void)
 {
   float a,b,c;
    char ch;
   printf("enter the number and character:");
   scanf("%f\n%c\n%f",&a,&ch,&b);
    if(ch=='+')
     c=a+b;
    if(ch=='-')
     c=a-b;
     if(ch=='*')
      c=a*b;
     if(ch=='/')
       c=a/b;
      return c;

  }
