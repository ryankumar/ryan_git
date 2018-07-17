#include<stdio.h>
  void calcii(char ch)
    {
       extern int a,b;
 	switch(ch)
 	{
	  case '+':printf("%d\n",a+b);
			break;
    	  case '-':printf("%d\n",a-b);
 			break;
	  case '*':printf("%d\n",a*b);
			break;
	  case '/':printf("%f\n",(float)a/b);
			break;
	  case '%':printf("%d\n",a%b);
			break;
	  default:printf("enter the valid character\n");
        }
   }
