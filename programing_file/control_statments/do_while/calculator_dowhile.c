/* calculate program using do..while*/

#include<stdio.h>
int main()
{

char ch;
 char c;
 int a,b;
  
 do
  {
 printf("enter the number and character:");
 scanf("%d\n%c\n%d",&a,&ch,&b);
     switch(ch)
  
          { 
             case '+':printf("%d + %d = %d\n",a,b,a+b);
                      break;
             case '-':printf("%d - %d = %d\n",a,b,a-b);
                      break;
	     case '*':printf("%d * %d = %d\n",a,b,a*b);
                      break;
	     case '/':printf("%d / %d = %d\n",a,b,a/b);
                      break;
             default: printf("Thank you for using our services.");
           }
printf("enter continue or not y/n \n");
scanf(" %c",&c);
    }while(c=='y');
  
 printf("\n");
}
