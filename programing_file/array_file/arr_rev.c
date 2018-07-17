#include<stdio.h>
  int main()
   {
	int a[10],i;
	printf("entre the elements:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("\n reverse of arr is:\n");
	for(i=10-1;i>=0;i--)
	 printf("a[%d]=%d ",i,a[i]);
	printf("\n");
    }
