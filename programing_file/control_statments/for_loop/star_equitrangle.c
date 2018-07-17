/* 
      *  *  *  *  * 
       *  *  *  * 
        *  *  * 
          *  * 
           * 
*/

#include<stdio.h>
int main()
{

int i,j,n;
printf("enter the no.of terms:");
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
   for(j=1;j<=n;j++)
    if(i>j)
printf(" ");
else
printf("* ");
printf("\n");

 }

}
