#include<stdio.h>
int main()
{
int i,j,n,k;
printf("enter the number of terms:");
scanf("\n%d",&n);
for(i=1;i<=n;i++)
 {
  for(j=1,k=0;j<=n;j++)
    if(j<i)
      printf("  ");
    else
       printf("%d ",j);
      printf("\n");
  }
 

}
