/*  *
    *  *
    *  *  * 
    *  *  *  *
    *  *  *  *  *
*/

#include<stdio.h>
int main()
{
int i ,j,n;
printf("enter the no. of terms:");
scanf("\n%d",&n);
  for(i=1;i<=n ;i++)
    {
	j=1;

     start:  if(j<=i)
	{
        printf("* ");
         j++;
         goto start;
	}
	
	printf("\n");
    }
  
}
