#include<stdio.h>
int main()
{

   int a,b;
   char ch;
  
    do {
	
	printf("enter the number and character:");
	scanf("%d\n%c\n%d",&a,&ch,&b);
	switch(ch)
	      {
		case '+':printf("%d + %d=%d\n",a,b,a+b);
			break;
		case '-':printf("%d - %d=%d\n",a,b,a-b);
			break;
		case '*':printf("%d * %d=%d\n",a,b,a*b);
			break;
		case '/':printf("%d / %d=%d\n",a,b,a/b);
			break;
		default: goto end;
	      }
 printf("do you want to continue y/n\n");
	}while(ch);
   end: printf("thank you");

}
