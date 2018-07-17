/*   *
     * *
     * * *
     * * * *
     * * * * *
*/


#include<stdio.h>
int main()
{
int i,j,n;
i=1;
n=5;
 
 do 
   {
     j=1;
         do
    	   {
	     printf("* ");
               j++;
		
	   }while(j<=i);
   printf("\n");
     i++;
   }while(i<=n);
 printf("\n");

}
