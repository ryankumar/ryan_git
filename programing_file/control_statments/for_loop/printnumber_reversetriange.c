/*         1
        1  2
     1  2  3
   1 2  3  4
1  2 3  4  5

*/


#include<stdio.h>
int main()
{
int i,j,n,k;
printf("enter the no. of terms:");
scanf("\n%d",&n);
  for(i=1;i<=n;i++)
    {
      for(j=1,k=1;j<=n;j++)
        if(j<=n-i)
        printf("  ");
       else
	printf("%d ",k++);
     printf("\n");
    }

 }
