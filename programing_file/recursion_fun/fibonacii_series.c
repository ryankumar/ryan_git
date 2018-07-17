#include<stdio.h>
int fibo(int);
 int main()
 {
	int n,i;
 	printf("enter the no.of terms ");
 	scanf("%d",&n);
        printf("fibonacci series is\n");
    for(i=1;i<=n;i++)
	printf("%d ",fibo(i));
      return 0;
 }
 
int fibo(int n)
  {
    if(n==1 || n==2)
	return 1;
   return fibo(n-1)+fibo(n-2);
  }   
