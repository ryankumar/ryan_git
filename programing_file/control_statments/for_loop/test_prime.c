#include<stdio.h>
int main()
{

int n,i=2,a=1;
printf("enter the numbers");
scanf("%d",&n);
while(i<=n/2)
 {
    if(n%i==0)	  
    {
      printf("number is not prime\n");                
       a=0;
	break;
    }
     i++;
 }
    if(a==1)
    printf(" prime number:%d\n",n);
     return 0;

}


