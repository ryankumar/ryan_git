#include<stdio.h>
int div11(int);
int main()
{
  int num,ret=1;
 printf("enter the number:");
 scanf("%d",&num);
 ret=div11(num);
 if(ret==0)
     printf("number is divible by 11\n");
	else
	  printf("not divisible\n");
	return 0;
 }

  int div11(int n)
   {
      int rem,sum=0,sum1=0,c=0,res;
      while(n>0)
        {
	  rem=n%10;
	   c++;
	    if(c%2==1)
  		sum=sum+rem;
	    else
		sum1=sum1+rem;
		n=n/10;
        }
    res=sum-sum1;
     return res;
   }

  
