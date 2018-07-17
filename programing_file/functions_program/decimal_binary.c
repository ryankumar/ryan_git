#include<stdio.h>
 int dec_bin(int);
int main()
 {
   int dec;
   printf("enter the decimal number:");
   scanf("%d",&dec);
    printf("binary number is:%d",dec_bin(dec));
 }
int dec_bin(int x)
  {
	int rem,bin=0,a=1;
     	 while(x>0)
	  {
	   rem=x%2;
	    bin=bin+a*rem;
	   a=a*10;
	   x/=2;
          }
	return bin;
  }

	    

