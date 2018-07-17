#include<stdio.h>
int main()
{
int n,i,j;
printf("enter the range of number:");

scanf("\n%d",&n);
   printf("even number:");
      for(i=1;i<=n;i++)
	{     
 	  if(i%2==0)
            printf("%d\t",i);
	}
	   
           printf("\n");

   printf("odd number:");
      for(j=1;j<=n;j++)
	{
	   if(j%2)
	      printf("%d\t",j);
	}
	    printf("\n");

 }
