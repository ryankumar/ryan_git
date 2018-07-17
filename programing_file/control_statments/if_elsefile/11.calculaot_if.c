#include<stdio.h>
int main()
{

int a,b;
char ch;
printf("enter the number and character:");
scanf("%d\n%c\n%d",&a,&ch,&b);
if(ch=='+')
printf("%d",a+b);
else
 if(ch=='-')
   printf("%d",a-b);
  else
     if(ch=='*')
       printf("%d",a*b);
      else
        if(ch=='/')
          printf("%d",a/b);
//printf("a+b");
else
  printf("enter a valid character");
return 0;


}
