#include<stdio.h>
int count_digit(int);
 int main()
  {
 	int n;
	printf("entre the number\n");
	scanf("%d",&n);
	printf("number of digit is:%d\n",count_digit(n));
  }

 int count_digit(int n)
 {
	static int c;
      if(n==0)
	return c;
	n/=10;
	c++;
	count_digit(n);
 }
