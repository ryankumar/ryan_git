#include<stdio.h>
  int main()
    {
	int a[5],i,j,temp;
	int b[5];
	printf("enter the elements of a[%d]:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("\n enter the elements of b[%d]:");
	for(j=0;j<5;j++)
	 scanf("%d",&b[j]);
        printf("\n");
	for(i=0,j=5-1;i<5 && j>=0;i++,j--)
	  {
	   temp=a[i];
	   a[i]=b[j];
	   b[j]=temp;
	  }
	printf("swapping of two array is a: ");
	 for(i=0;i<5;i++)
	  printf("%d ",a[i]);
	 printf("\n swapping of array b : ");
	  for(i=0;i<5;i++)
	   printf("%d ",b[i]);
	 
    }
