#include<stdio.h>
int rev_int(int);
int main()
 {
   	int n;
 	printf("enter the number\n");
	scanf("%d",&n);
	printf("reverse intger is:%d\n",rev_int(n));
 }

int rev_int(int n)
 {
    static int rev,rem;
    if(n==0)
	return rev;
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
	rev_int(n);
 }
