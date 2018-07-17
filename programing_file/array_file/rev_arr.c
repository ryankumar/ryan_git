#include<stdio.h>
 int main()
   {
	int i,j,n,temp;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("entre the elements:");
	  for(i=0;i<n;i++)
	   {
	      scanf("%d",&a[i]);
	   }
	 printf("\n");
	
	for(i=0,j=n-1;i<j;i++,j--)
	  {
	  	temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	  }
	printf("print the revers of the array : ");
	for(i=0;i<n;i++)
	printf("a[%d]=%d\n",i,a[i]);
	printf("\n");
    }
