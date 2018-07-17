#include<stdio.h>
 int fibo(int);
 int main()
 {
	int n;
 	printf("enter the no.of terms ");
 	scanf("%d",&n);
 	printf("nth fibonacii number is:%d\n",fibo(n));
      return 0;
 }
 
int fibo(int n)
  {
   	if(n==1 || n==2)
	  return 1;
	return fibo(n-2)+fibo(n-1); 
  }
