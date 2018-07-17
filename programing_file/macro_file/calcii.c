//#include<stdio.h>
#define ADD(a,b) printf("%d\n",a+b)
#define SUB(a,b) printf("%d\n",a-b)
#define MUL(a,b) printf("%d\n",a*b)
#define DIV(a,b) printf("%d\n",a/b)
#define MOD(a,b) printf("%d\n",a%b)
 int main()
 {
    int a=10,b=20;
	printf("entred numer is:%d %d",a,b);
     char c;
	printf("enter the char +,-,*,/ or %:");
	scanf("\n%c",&c);
	switch(c)
	 {
	  case '+':ADD(a,b);break;
	  case '-':SUB(a,b);break;
	  case '*':MUL(a,b);break;
	  case '/':DIV(a,b);break;
	   default :MOD(a,b);
  	}
 }
	
