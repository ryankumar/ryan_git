#include<stdio.h>
int power(int ,int);
int main()
 {
     int n,p;
	printf("enter the number\n");
 	scanf("%d",&n);
	printf("enter the power\n");
	scanf("%d",&p);
  	n=power(n,p);
 	printf("power of n:%d\n",n);
 }
 
int power(int n,int p)
 {
	
	static int res=1;
	if(p==0)
	return res;
	res=res*n;
	power(n,--p);
    
 }
	
