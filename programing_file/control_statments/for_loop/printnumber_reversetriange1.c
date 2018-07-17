/*         1
        2  1
     3  2  1 
   4 3  2  1
5  4 3  2  1

*/


#include<stdio.h>
int main()
{
int i,j,n,k;
printf("enter the no. of terms:");
scanf("\n%d",&n);
  for(i=1;i<=n;i++)
    {
      for(j=1,k=5;j<=n;j++,k--)
        if(j<=n-i)
        printf("  ");
       else
	printf("%d ",k);
     printf("\n");
    }

 }
