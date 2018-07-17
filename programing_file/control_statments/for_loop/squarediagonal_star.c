/*   * * * * * * *
     * *         *
     *   *       *
     *     *     * 
     *       *   *
     *         * *
     * * * * * * *
*/

#include<stdio.h>
int main()
{
int i ,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
   for(j=1;j<=n;j++)
   {
    if(i==j)
     printf("* ");
   else if(i==i && j==(n-i)+1)
     printf("* ");
 else if(i>1 && i<n && j>1 && j<n)
   printf("  ");
  else
    printf("* ");
  }
    printf("\n");
  
 }

}
