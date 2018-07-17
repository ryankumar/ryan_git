#include<stdio.h>
int print_bin(int);
int main()
 {
   int n;
 	printf("enter the number\n");
	scanf("%d",&n);
	printf("binary of the integer is:%d\n",print_bin(n));
	
 }

int print_bin(int n)
 {
    static int a,r=1;
      int rem;
	if(n==0)
	 return a;
	rem=n%2;
	a=a+rem*r;
	printf("%d\n",a);
	r=r*10;
	n=n/2;
	print_bin(n);
 }
